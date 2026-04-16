# FarmRPG2D Android Port — Complete Development Record

**Project:** FarmRPG2DELs (CaicaiSprite dev branch)
**Engine:** Unity 2021.1.17f1 · URP 11.0.0
**Started:** April 12, 2026
**Status:** Implementation Complete — Ready for Device Testing

---

## How to Continue This Work

If you open a new Cowork session and want to continue, tell Claude:

> "I'm working on the FarmRPG2D Android conversion. Please read `FARMRPG2D_ANDROID_PORT_DEVLOG.md` in the project folder to catch up on what's been done."

---

## Table of Contents

1. [Project Starting Point](#1-project-starting-point)
2. [Phase 1 — Build & Project Setup](#2-phase-1--build--project-setup)
3. [Phase 2 — Resolution & Screen Adaptation](#3-phase-2--resolution--screen-adaptation)
4. [Phase 3 — Input System Overhaul (Desktop → Touch)](#4-phase-3--input-system-overhaul-desktop--touch)
5. [Phase 4 — Performance Optimisation](#5-phase-4--performance-optimisation)
6. [Phase 5 — Android Lifecycle & Save System](#6-phase-5--android-lifecycle--save-system)
7. [Phase 6 — Safe Area Handling](#7-phase-6--safe-area-handling)
8. [Phase 7 — On-Screen Controls HUD](#8-phase-7--on-screen-controls-hud)
9. [Phase 8 — UI Scaling](#9-phase-8--ui-scaling)
10. [Phase 9 — 4-Mode Mobile Input State Machine](#10-phase-9--4-mode-mobile-input-state-machine)
11. [Phase 10 — HUD Visibility System](#11-phase-10--hud-visibility-system)
12. [Phase 11 — Cutscene Video Fullscreen](#12-phase-11--cutscene-video-fullscreen)
13. [Phase 12 — Bug Fixes & Polish](#13-phase-12--bug-fixes--polish)
14. [Complete File Reference](#14-complete-file-reference)
15. [Architecture Diagram](#15-architecture-diagram)
16. [Errors Encountered and Fixed](#16-errors-encountered-and-fixed)
17. [Testing Guide](#17-testing-guide)
18. [What Still Needs Attention](#18-what-still-needs-attention)

---

## 1. Project Starting Point

The game was a desktop-only 2D Farm RPG with:

- **5 scenes** — MainMenu, PersistentScene, and several farm/dungeon levels
- **100+ scripts** — no native plugins (great for Android porting)
- **Resolution** hardcoded to 1920×1080 FullScreenWindow in `GameManager.cs`
- **Input** — Legacy Input System using keyboard (`WASD`, `Shift`, `Esc`, `T`, `G`, number keys) and mouse (click, drag, mouse position for grid cursor)
- **Render pipeline** — URP, 2D pixel-perfect (`com.unity.2d.pixel-perfect`)
- **Save system** — `Application.persistentDataPath` with binary serialization (works on Android as-is)
- **Target** — PC Standalone (no Android module installed)

---

## 2. Phase 1 — Build & Project Setup

### What Was Done

| Setting | Before | After |
|---|---|---|
| Build target | Standalone PC | Android |
| Package name | *(none)* | `com.yourcompany.farmrpg2d` |
| Min API Level | 33 (too high) | 24 (Android 7.0+) |
| Target API Level | — | 33+ |
| Scripting Backend | Mono | IL2CPP |
| Target Architectures | ARM64 only | ARMv7 + ARM64 |
| Graphics APIs | Vulkan + OpenGLES3 | OpenGLES3 only |
| Screen Orientation | Default | Landscape Left + Right |

**Why ARMv7 was added:** The user's test device runs Android 9 — some older Android 9 phones are 32-bit ARMv7 only.

**Why Vulkan was removed:** Vulkan can be unstable on older Android 9 devices; OpenGLES3 is safer for the initial build.

**Why Min API was changed:** The original setting (API 33) would block installation on the user's Android 9 phone (API 28).

### Files Modified

- `ProjectSettings/ProjectSettings.asset`
  - `AndroidMinSdkVersion` → 24
  - `TargetArchitectures` → 3 (ARMv7 + ARM64)
  - Graphics APIs: removed Vulkan, kept OpenGLES3

---

## 3. Phase 2 — Resolution & Screen Adaptation

### Problem
`GameManager.cs` line 12 forced `Screen.SetResolution(1920, 1080, FullScreenMode.FullScreenWindow)` — this prevents Android from managing its own resolution.

### Fix Applied to `GameManager.cs`

```csharp
// REMOVED:
Screen.SetResolution(1920, 1080, FullScreenMode.FullScreenWindow, 0);

// ADDED:
#if !UNITY_ANDROID
    Screen.SetResolution(1920, 1080, FullScreenMode.FullScreenWindow);
#endif
Application.targetFrameRate = 60;
QualitySettings.vSyncCount = 0;
```

### Canvas Scalers Updated

Both `MainGameUICanvas` and `PauseMenuCanvas` in `PersistentScene.unity`, and `MainMenuCanvas` in `MainMenu.unity`:

```yaml
# Before (pixel-perfect origin 480×270):
m_ReferenceResolution: {x: 480, y: 270}
m_MatchWidthOrHeight: 0

# After:
m_ReferenceResolution: {x: 1920, y: 1080}
m_MatchWidthOrHeight: 0.5
```

---

## 4. Phase 3 — Input System Overhaul (Desktop → Touch)

### Core Bridge — `MobileInput.cs`

A static abstraction layer so existing scripts could keep their logic unchanged:

```csharp
public static class MobileInput
{
    public static bool IsMobile => Application.platform == RuntimePlatform.Android;
    public static bool GetPointerHeld()   => IsMobile ? Input.touchCount > 0 : Input.GetMouseButton(0);
    public static bool GetPointerDown()   => IsMobile ? IsTouchBegan()       : Input.GetMouseButtonDown(0);
    public static bool GetPointerUp()     => IsMobile ? IsTouchEnded()       : Input.GetMouseButtonUp(0);
    public static Vector3 PointerPosition => IsMobile && Input.touchCount > 0
                                             ? (Vector3)Input.GetTouch(0).position
                                             : Input.mousePosition;
}
```

**Scripts modified to use MobileInput:**

| Script | Change |
|---|---|
| `Player.cs` | Movement reads `VirtualJoystick.GetAxis()` on Android; mouse-click replaced with `MobileInput.GetPointerHeld/Down` |
| `GridCursor.cs` | `GetGridPositionForCursor()` uses `MobileInput.PointerPosition` |
| `Cursor.cs` | `GetWorldPositionForCursor()` and `GetRectTransformPositionForCursor()` use `MobileInput.PointerPosition` |
| `UIInventorySlot.cs` | Drag uses `eventData.position`; drop uses `MobileInput.PointerPosition` |
| `PauseMenuInventoryManagementSlot.cs` | Drag updated to `eventData.position` |
| `UIManager.cs` | `KeyCode.Escape` guarded with `#if !UNITY_ANDROID`; `TogglePauseMenu()` public method added |

### Virtual Joystick — `VirtualJoystick.cs`

- Floating joystick: appears at the touch-start position on the left half of screen
- Implements `IPointerDownHandler`, `IDragHandler`, `IPointerUpHandler`
- Exposes `Horizontal` and `Vertical` float properties with dead-zone filtering
- `static Instance` for global access
- Auto-hides on non-Android platforms

### Debug Keys Guarded

```csharp
// PlayerTestInput() — T and G keys now desktop-only:
#if !UNITY_ANDROID
    if (Input.GetKeyDown(KeyCode.T)) ...
    if (Input.GetKeyDown(KeyCode.G)) ...
#endif
```

---

## 5. Phase 4 — Performance Optimisation

### URP Asset Changes (`UniversalRenderPipelineAsset.asset`)

| Property | Before | After |
|---|---|---|
| HDR | Enabled | Disabled |
| Main Light Shadow Resolution | 2048 | 1024 |
| Additional Lights Per Object | 4 | 2 |
| Dynamic Batching | Disabled | Enabled |
| SRP Batcher | Enabled | Enabled (kept) |

---

## 6. Phase 5 — Android Lifecycle & Save System

### `AndroidLifecycleHandler.cs`

Attached to `GameManager` in PersistentScene. Handles app backgrounding:

```csharp
void OnApplicationPause(bool pauseStatus)
{
    if (pauseStatus)
    {
        SaveLoadManager.Instance?.ISaveableStoreScene(SceneManager.GetActiveScene().name);
        TimeManager.Instance?.PauseGameClock();
        AudioListener.pause = true;
    }
    else
    {
        TimeManager.Instance?.ResumeGameClock();
        AudioListener.pause = false;
    }
}
```

### `TimeManager.cs` — New Public Methods

```csharp
public void PauseGameClock()  => gameClockPaused = true;
public void ResumeGameClock() => gameClockPaused = false;
```

---

## 7. Phase 6 — Safe Area Handling

### `SafeAreaHandler.cs`

Applied to a full-screen `SafeArea` panel injected as a child of each HUD canvas. Recalculates anchors every frame to respect device notches, punch-holes, and rounded corners:

```csharp
void Update()
{
    Rect safeArea = Screen.safeArea;
    // converts pixel rect → normalised anchors and updates RectTransform
}
```

Safe area panels were injected into:
- `MainGameUICanvas` (PersistentScene)
- `PauseMenuCanvas` (PersistentScene)
- `MainMenuCanvas` (MainMenu scene)

All existing children were re-parented under the SafeArea panel automatically via `MobileAndroidSetup.cs`.

---

## 8. Phase 7 — On-Screen Controls HUD

### `MobileControlsUI.cs` — Button Wiring

Handles all mobile button callbacks:

| Button | Wires To | Key Equivalent |
|---|---|---|
| `PauseButton` | `UIManager.Instance.TogglePauseMenu()` | Esc |
| `ActionButton` | `_actionButtonHeld` flag (held detection via EventTrigger) | Mouse hold |
| `WalkToggle` | `Player.Instance.SetWalkMode(bool)` | Shift |
| `TimeAdvanceButton` | `TimeManager.Instance.TestAdvanceGameMinute()` | T |
| `DayAdvanceButton` | `TimeManager.Instance.TestAdvanceGameDay()` | G |

All mobile UI hides on non-Android platforms:

```csharp
#if !UNITY_ANDROID || UNITY_EDITOR
    mobileHUDRoot.SetActive(false);
    return;
#endif
```

### HUD Layout (at 1920×1080 reference resolution)

```
┌──────────────────────────────────────────────────────────────────┐
│                                           [ Pause ② ]  (192×192) │
│                                                                   │
│                                                                   │
│  [Joystick ⊕]        [T+10M]  [G+1D]        [WALK ⬤]            │
│  (floating)          (120×120)(120×120)      (180×180)            │
│                                              [Action ✋] (260×260) │
└──────────────────────────────────────────────────────────────────┘
```

### MobileHUDBuilder.cs — Joystick Positioning

Joystick zones were precisely positioned to match the user's annotated screenshot:

- **Capture Zone (red zone):** anchorMin `(0, 0)` → anchorMax `(0.35, 0.5)` — left 35% width, lower 50% height
- **Joystick Background (blue zone):** anchor at `(0.35, 0.5)` — centred on the capture zone's top-right corner
- **CanvasGroup** added to PauseButton, ActionButton, WalkToggle, InventoryAimContainer for alpha fade control
- **AimArrow & AimIndicator** placed directly in SafeArea (not inside InventoryAimContainer) so they can appear independently

---

## 9. Phase 8 — UI Scaling

### Problem Reported by User

After running on the phone: title, buttons, text, and inventory bar were all too small for comfortable touch use.

### Solution: Editor Tools

**`MobileUIScaler.cs`** — `FarmRPG → Scale All UI for Mobile (2×)`
- Doubles all `Text.fontSize` values
- Doubles `sizeDelta` on all RectTransforms that own a Button, Toggle, or Image
- Doubles spacing in HorizontalLayoutGroup, VerticalLayoutGroup, GridLayoutGroup
- Skips `MobileHUD_Canvas` (already sized correctly)
- Safe to run multiple times; fully Undo-able

**`MobileHUDBuilder.cs`** — button font sizes pre-scaled 2× from the start:
- Button labels: 56pt (was 28pt)
- Toggle labels: 44pt (was 22pt)

---

## 10. Phase 9 — 4-Mode Mobile Input State Machine

This is the largest and most important system added. It manages how the player interacts with tools and inventory on a touchscreen.

### The Problem

On PC, the player uses the mouse to point at tiles and click to use tools. On mobile, there is no mouse cursor. Tapping inventory items was also disabling joystick input due to drag detection false-positives.

### The Solution: 4 Input Modes

A state machine (`MobileInputModeManager.cs`) with four distinct modes that control UI visibility, joystick behavior, cursor positioning, and player movement.

### Mode Flow Diagram

```
     Game Start
         │
         ▼
    ┌─────────┐
    │ NORMAL  │◄──── Tap outside inventory (deselect)
    │         │
    └────┬────┘
         │ Tap inventory item
         ▼
    ┌─────────┐
    │ SELECT  │◄──── Browse/scroll inventory
    │         │
    └────┬────┘
         │ Press USE button
         ▼
    ┌─────────┐
    │   AIM   │  Joystick moves cursor (player stops)
    │         │
    └────┬────┘
         │ Press USE button
         ▼
    ┌─────────┐
    │ ACTION  │  Cursor locks, joystick moves player
    │         │  Press USE → fires tool
    └─────────┘
```

### Mode Details

#### NORMAL MODE (Default gameplay)
- **UI:** All buttons hidden (alpha=0, blocksRaycasts=false) except joystick
- **Joystick:** Controls player movement
- **Cursor:** Hidden (GridCursor/Cursor disabled)
- **Aim Indicator:** Hidden

#### SELECT MODE (Item browsing)
- **UI:** All buttons visible (alpha=1, blocksRaycasts=true)
- **Joystick:** Controls player movement (can walk while browsing)
- **Cursor:** Hidden
- **Aim Indicator:** Shows "SELECT" text

#### AIM MODE (Cursor positioning)
- **UI:** All buttons visible
- **Joystick:** Controls cursor direction and distance (player stops moving)
- **Cursor:** Visible on-screen (GridCursor enabled)
- **Aim Indicator:** Shows "AIM" text with rotating aim arrow
- **Virtual Pointer:** Enabled — calculates screen position from player + aim direction × distance

#### ACTION MODE (Tool execution ready)
- **UI:** All buttons visible
- **Joystick:** Controls player movement again (cursor locks at offset)
- **Cursor:** Locked at fixed distance/direction from player (follows player)
- **Aim Indicator:** Shows "ACTION" text
- **Press USE:** Fires tool at locked cursor position
- **Tap outside inventory:** Deselects and returns to Normal mode

### Core File: `MobileInputModeManager.cs` (NEW)

**Location:** `Assets/Scripts/Mobile/MobileInputModeManager.cs`

**Key Features:**
- Singleton pattern with static `Instance` property
- `CurrentMode` enum (Normal, Select, Aim, Action)
- Mode transition logic in `OnUseButtonPressed()` / `OnUseButtonReleased()`
- Virtual cursor position calculation for Aim/Action modes
- Aim arrow rotation based on joystick input
- Deselect detection (tap outside inventory → Normal mode via EventSystem raycast)
- Auto-discovery of UI references at runtime (aimIndicatorText, aimIndicatorRoot, aimArrowRoot)

**Critical Methods:**

| Method | Purpose |
|---|---|
| `EnterNormalMode()` | Hide buttons, disable virtual pointer, enable player movement |
| `EnterSelectMode()` | Show buttons, show "SELECT" indicator |
| `EnterAimMode()` | Enable virtual cursor, joystick controls aim direction |
| `EnterActionMode()` | Lock cursor offset, show "ACTION" indicator |
| `OnUseButtonPressed()` | Routes USE button press to correct mode transition |
| `UpdateVirtualCursorPosition()` | Calculate cursor from player + aim direction × distance |
| `TriggerToolAction()` | Set virtual pointer held/down to simulate tool use |
| `CheckDeselectTap()` | Detect taps outside UIInventoryBar via EventSystem raycast |

### Virtual Pointer System in `MobileInput.cs`

Added four static fields that allow MobileInputModeManager to override real touch input:

```csharp
public static bool UseVirtualPointer { get; set; } = false;
public static Vector3 VirtualPointerPosition { get; set; } = Vector3.zero;
public static bool VirtualPointerHeld { get; set; } = false;
public static bool VirtualPointerDown { get; set; } = false;
```

When `UseVirtualPointer` is true:
- `MobileInput.PointerPosition` returns `VirtualPointerPosition` instead of real touch
- `MobileInput.GetPointerHeld()` returns `VirtualPointerHeld`
- `MobileInput.GetPointerDown()` returns `VirtualPointerDown`

This means **all existing scripts** that use `MobileInput` automatically get the virtual cursor position without any changes.

### Mode-Aware Cursor Display

Both `GridCursor.cs` and `Cursor.cs` were updated with Android guards:

```csharp
#if UNITY_ANDROID && !UNITY_EDITOR
if (MobileInputModeManager.Instance == null ||
    (MobileInputModeManager.Instance.CurrentMode != MobileInputModeManager.InputMode.Aim &&
     MobileInputModeManager.Instance.CurrentMode != MobileInputModeManager.InputMode.Action))
{ return; }
#endif
```

Cursors only display during Aim/Action modes on Android. Desktop always shows cursors.

### Player Movement Override in `Player.cs`

```csharp
if (MobileInput.IsMobile)
{
    if (MobileInputModeManager.IsAimMode)
    {
        xInput = 0f; yInput = 0f; return;  // Stop player during aim
    }
    Vector2 joystick = VirtualJoystick.GetAxis();
    xInput = joystick.x; yInput = joystick.y;
}
```

### Inventory Tap Detection in `UIInventorySlot.cs`

```csharp
// OnPointerClick — notify mode manager on Android
#if UNITY_ANDROID && !UNITY_EDITOR
if (MobileInputModeManager.Instance != null)
    MobileInputModeManager.Instance.OnInventoryItemTapped();
#endif
```

Also added a drag threshold check in `OnBeginDrag()` (delta < 10f → return early) to prevent accidental drag-triggered input disable on Android.

---

## 11. Phase 10 — HUD Visibility System

### CanvasGroup-Based Alpha Fading

All buttons use `CanvasGroup` component with two properties:
- **alpha** = 0 (invisible) or 1 (visible)
- **blocksRaycasts** = false (transparent to input) or true (receives input events)

### `MobileControlsUI.ShowGameplayUIOnly()` (Normal mode)

Sets on each button's CanvasGroup:
- PauseButton → alpha=0, blocksRaycasts=false
- ActionButton → alpha=0, blocksRaycasts=false
- WalkToggle → alpha=0, blocksRaycasts=false
- InventoryAimContainer → alpha=0, blocksRaycasts=false
- Joystick → **unaffected** (remains visible and interactive)

### `MobileControlsUI.ShowFullUI()` (Select/Aim/Action modes)

Sets on each button's CanvasGroup:
- All buttons → alpha=1, blocksRaycasts=true

### `GameplayUIController.cs`

Initializes visibility on startup:
- On Android: defers to MobileInputModeManager (starts in Normal mode → buttons hidden)
- On desktop: calls ShowFullUI() as fallback

---

## 12. Phase 11 — Cutscene Video Fullscreen

### Problem
When meeting NPC Miya, the movie cutscene appeared with semi-transparent background and didn't fill the screen.

### Fix Applied to `CutsceneVideoPlayer.cs`

In `PlayCutscene()`, added runtime fullscreen expansion:

```csharp
RectTransform panelRT = cutscenePanel.GetComponent<RectTransform>();
if (panelRT != null)
{
    panelRT.anchorMin = Vector2.zero;
    panelRT.anchorMax = Vector2.one;
    panelRT.offsetMin = Vector2.zero;
    panelRT.offsetMax = Vector2.zero;
}
// Same stretch applied to videoRawImage RectTransform
// Background set to opaque: bgImage.color = new Color(0f, 0f, 0f, 1f);
```

---

## 13. Phase 12 — Bug Fixes & Polish

### Bug: Null Reference in ShowGameplayUIOnly()
**Cause:** `cg.blocksRaycasts = false` was outside the `if (cg != null)` check on five buttons.
**Fix:** Moved `blocksRaycasts` assignment inside the null check for all buttons.

### Bug: Joystick Capture Zone Blocking Inventory
**Cause:** Capture zone `anchorMax.y` was 1.0 (full screen height), overlapping the inventory bar.
**Fix:** Changed to `anchorMax.y = 0.5` (lower half only).

### Bug: Tool Selection Disabling Joystick Input
**Cause:** `UIInventorySlot.OnBeginDrag()` called `DisablePlayerInputAndResetMovement()` even on simple taps on Android (drag delta was tiny but nonzero).
**Fix:** Added drag threshold check — if delta < 10 pixels, return early without disabling input. Also added safety `EnablePlayerInput()` calls in `OnEndDrag()` and `OnPointerClick()`.

### Bug: Aim Arrow Hidden When Inventory Fades
**Cause:** AimArrow was a child of InventoryAimContainer, which gets faded to alpha=0 in Normal mode.
**Fix:** Moved AimArrow and AimIndicator to SafeArea (parent of InventoryAimContainer) so they can appear independently.

### Bug: Grey Inventory Selection Boxes Color Changed Accidentally
**Cause:** I changed highlight colour to light yellow instead of just repositioning.
**Fix:** Reverted to original white (1, 1, 1, 1). User manually positioned the boxes.

### Bug: MobileInputModeManager UI References Null
**Cause:** MobileInputModeManager lives on a separate GameObject from the HUD (created by AutoMobileSetupOnLoad), so serialized references were never wired.
**Fix:** Added runtime auto-discovery in `Start()`:
```csharp
if (aimIndicatorRoot == null)
{
    GameObject found = GameObject.Find("AimIndicator");
    if (found != null)
    {
        aimIndicatorRoot = found;
        aimIndicatorText = found.GetComponentInChildren<Text>();
    }
}
```

### Error: Broken YAML in PersistentScene.unity
**Cause:** Python SafeArea injection script appended blocks without a trailing newline.
**Fix:** Split the corrupted line back into two correct lines.

### Error: Android SDK `repositories.cfg` Warning
**Fix:** `echo. > "%USERPROFILE%\.android\repositories.cfg"`

---

## 14. Complete File Reference

### All New Script Files Created

| File | Location | Purpose |
|---|---|---|
| `MobileInputModeManager.cs` | `Scripts/Mobile/` | 4-mode input state machine (Normal/Select/Aim/Action) |
| `MobileInput.cs` | `Scripts/Mobile/` | Mouse→Touch bridge + virtual pointer override |
| `VirtualJoystick.cs` | `Scripts/Mobile/` | Floating analog joystick |
| `MobileControlsUI.cs` | `Scripts/Mobile/` | Button wiring + UI visibility (alpha fade) |
| `GameplayUIController.cs` | `Scripts/Mobile/` | Startup visibility initialization |
| `AndroidLifecycleHandler.cs` | `Scripts/Mobile/` | Auto-save + clock pause on app background |
| `SafeAreaHandler.cs` | `Scripts/Mobile/` | Notch/punch-hole safe area enforcement |
| `MobileHUDBuilder.cs` | `Scripts/.../Editor/` | One-click HUD creation tool |
| `MobileAndroidSetup.cs` | `Scripts/.../Editor/` | Lifecycle handler + SafeArea injection tool |
| `MobileUIScaler.cs` | `Scripts/.../Editor/` | 2× UI scaling tool |
| `MobileSetupGuide.cs` | `Scripts/.../Editor/` | Setup guide menu wrapper |
| `AutoMobileSetupOnLoad.cs` | `Scripts/.../Editor/` | Auto-creates GameplayUIController + MobileInputModeManager |

### All Existing Scripts Modified

| Script | What Changed |
|---|---|
| `GameManager.cs` | Removed hardcoded `SetResolution`; added `targetFrameRate = 60`, `vSyncCount = 0` |
| `Player.cs` | Movement reads joystick on Android; click/hold uses MobileInput; Aim mode stops movement; T/G keys guarded; `SetWalkMode()` added |
| `GridCursor.cs` | `Input.mousePosition` → `MobileInput.PointerPosition`; mode-aware Android guard; `DisplayCursorAtScreenPosition()` method added |
| `Cursor.cs` | `Input.mousePosition` → `MobileInput.PointerPosition`; mode-aware Android guard |
| `UIInventorySlot.cs` | Drag uses `eventData.position`; drag threshold check; notifies MobileInputModeManager on tap; safety `EnablePlayerInput()` calls |
| `PauseMenuInventoryManagementSlot.cs` | Drag uses `eventData.position` |
| `UIManager.cs` | Esc key guarded; `TogglePauseMenu()` public method added |
| `TimeManager.cs` | `PauseGameClock()` and `ResumeGameClock()` public methods added |
| `CutsceneVideoPlayer.cs` | Fullscreen expansion of video panel/RawImage + opaque background |

### Scene Files Modified

| File | Changes |
|---|---|
| `PersistentScene.unity` | Canvas scalers → 1920×1080, match 0.5; SafeArea panels injected |
| `MainMenu.unity` | Canvas scaler → 1920×1080, match 0.5; SafeArea panel injected |
| `ProjectSettings.asset` | Min API 24, ARMv7+ARM64, OpenGLES3 only |
| `UniversalRenderPipelineAsset.asset` | HDR off, shadows 1024, 2 lights, dynamic batching on |

---

## 15. Architecture Diagram

```
                    User Touch Input
                          │
                          ▼
                ┌──────────────────┐
                │   MobileInput    │  Bridges touch ↔ virtual pointer
                │   (static)       │  Returns real touch OR virtual position
                └────────┬─────────┘
                         │
            ┌────────────┼────────────────┐
            ▼            ▼                ▼
       Player.cs    GridCursor.cs     Cursor.cs
       (movement)   (grid display)    (world cursor)
            │            │                │
            └────────────┼────────────────┘
                         │
                         ▼
            ┌──────────────────────────┐
            │  MobileInputModeManager  │  State Machine
            │  (singleton)             │
            └──────────┬───────────────┘
                       │
          ┌────────┬───┴────┬─────────┐
          ▼        ▼        ▼         ▼
       NORMAL   SELECT     AIM     ACTION
          │        │        │         │
          ▼        ▼        ▼         ▼
     Hide UI   Show UI  Virtual    Locked
     Move      Move     Cursor     Cursor
     Player    Player   No Move    Move Player
                        Joystick→  USE→Tool
                        Cursor     Fire
```

### Data Flow: Virtual Cursor in Aim/Action Mode

```
VirtualJoystick.GetAxis()
        │
        ▼
MobileInputModeManager.UpdateAimMode()
        │
        ├─→ _aimDirection = joystick.normalized
        ├─→ _aimDistance = lerp(1, maxDist, joystick.magnitude)
        │
        ▼
UpdateVirtualCursorPosition()
        │
        ├─→ worldPos = playerCenter + aimDirection × distance
        ├─→ screenPos = camera.WorldToScreenPoint(worldPos)
        ├─→ MobileInput.VirtualPointerPosition = screenPos
        │
        ▼
GridCursor reads MobileInput.PointerPosition
        │
        ▼
Cursor displays at virtual position
```

---

## 16. Errors Encountered and Fixed

| # | Error | Cause | Fix |
|---|---|---|---|
| 1 | Broken YAML in PersistentScene.unity | SafeArea injection missing newline | Split corrupted line |
| 2 | `repositories.cfg` warning | Missing Android SDK config file | Created empty file |
| 3 | APK won't install on Android 9 | Min API 33 too high | Changed to API 24 |
| 4 | Vulkan crash on older devices | Driver incompatibility | Removed Vulkan, kept OpenGLES3 |
| 5 | Joystick zone blocks inventory taps | Capture zone full-height | Reduced to lower 50% |
| 6 | Tool select disables joystick | OnBeginDrag fires on taps | Added drag threshold (10px) |
| 7 | Aim arrow hidden by inventory fade | Child of InventoryAimContainer | Moved to SafeArea |
| 8 | Null reference in ShowGameplayUIOnly | blocksRaycasts outside null check | Moved inside `if (cg != null)` |
| 9 | MobileInputModeManager UI refs null | Separate GameObject from HUD | Added runtime auto-discovery |
| 10 | Grey boxes colour accidentally changed | Wrong fix applied | Reverted to original white |

---

## 17. Testing Guide

### Build Steps

```
1. File → Build Settings → Switch to Android
2. Player Settings:
   - Package Name: com.yourcompany.farmrpg2d
   - Min API: 24
   - Target API: 33+
   - Scripting Backend: IL2CPP
   - Target Architectures: ARMv7 + ARM64
   - Graphics: OpenGLES3
3. Build APK and deploy to device
```

### Gameplay Flow Test Checklist

- [ ] Game starts → only joystick visible (**Normal mode**)
- [ ] Move player around with joystick
- [ ] Tap an inventory item → all buttons appear (**Select mode**)
- [ ] "SELECT" label visible
- [ ] Can walk while browsing (joystick still works)
- [ ] Press USE → cursor appears on screen (**Aim mode**)
- [ ] Label changes to "AIM"
- [ ] Joystick moves cursor in different directions
- [ ] GridCursor follows joystick input
- [ ] Press USE again → cursor locks (**Action mode**)
- [ ] Label changes to "ACTION"
- [ ] Joystick moves player again
- [ ] Cursor stays at locked offset from player
- [ ] Press USE → tool fires at cursor position
- [ ] Tap outside inventory → buttons fade, back to **Normal mode**

### Edge Case Tests

- [ ] Small drag on inventory item doesn't disable input
- [ ] Pause button works in all modes
- [ ] Walk toggle works in all modes
- [ ] Movie cutscene fills full screen (1920×1080, opaque background)
- [ ] Aim arrow rotates correctly in Aim mode
- [ ] Safe area respected on notch/punch-hole devices
- [ ] App background → auto-save triggers
- [ ] App resume → game clock resumes

### Performance Tests

- [ ] Frame rate stable at 60 FPS (or 30 FPS on low-end)
- [ ] No memory leaks when switching modes repeatedly
- [ ] UI fade transitions smooth
- [ ] Works on 16:9, 18:9, 19.5:9, 20:9 aspect ratios

---

## 18. What Still Needs Attention

### Must Test on Device
- [ ] Build and install the APK, verify all buttons respond
- [ ] Verify mode transitions work smoothly on real touch hardware
- [ ] Test virtual cursor accuracy in Aim mode
- [ ] Verify tool firing works in Action mode

### May Need Tweaking
- [ ] `_maxAimDistance` in MobileInputModeManager (currently 3 tiles) — adjust based on feel
- [ ] Button positions in MobileHUDBuilder — may need adjustment for specific devices
- [ ] Joystick sensitivity in VirtualJoystick script
- [ ] Font compatibility — built-in Arial.ttf used for HUD; update if custom pixel font preferred

### Before Shipping
- [ ] Remove T+10M / G+1D debug buttons (or hide them)
- [ ] Set ASTC texture compression in Player Settings
- [ ] Set Managed Stripping Level to Medium or High for smaller APK
- [ ] Add haptic feedback (vibration) on mode transitions (optional)
- [ ] `MobileInventoryBar.cs` — verify inventory strip navigation is connected

---

## Quick Reference — All Menu Items

```
FarmRPG/
├── Android Setup/
│   ├── 1 - Add AndroidLifecycleHandler to GameManager
│   ├── 2 - Add SafeAreaHandler to HUD Canvases
│   └── Run Full Android Setup
├── Build Mobile HUD Canvas
├── Scale All UI for Mobile (2x)
└── Mobile Setup Guide/
    ├── 1 — Full Android Setup (First Time)
    ├── 2 — Build Mobile HUD Canvas (with T+G buttons)
    ├── 3 — Scale All UI for Mobile (2x)
    └── 4 — Show Mobile Setup Instructions
```

---

*Development Record — FarmRPG2D Android Port*
*Last Updated: April 12, 2026*
