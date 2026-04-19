# FarmRPG2D Android Port — Master Project Summary

**Engine:** Unity 2021.1.17f1 · URP 11.0.0
**Branch:** `FarmRPG2DELs_CaicaiSprite_dev` (Android standalone)
**Port Started:** April 12, 2026

---

## Part 1 — The Target: OnePlus 3

All decisions in this project were anchored to one specific device.

| Spec | Value | Impact on Development |
|---|---|---|
| **Device** | OnePlus 3 | |
| **CPU** | Qualcomm Snapdragon 820 (64-bit) | IL2CPP + ARM64 required |
| **GPU** | Adreno 530 | Vulkan **removed** (unstable on this GPU) — OpenGLES3 only |
| **OS** | Android 9.0 Pie (API 28) | Min API Level set to **24** (not 33 — original was too high to install) |
| **Screen** | 5.5 inch · 1920×1080 · ~401 ppi | Same aspect ratio as PC (16:9) — no complex multi-resolution needed |
| **Screen Density** | ~401 PPI | PC-sized UI elements are **microscopic** — required aggressive scaling |

### Build Settings Applied

| Setting | Before | After |
|---|---|---|
| Build Target | Standalone PC | Android |
| Min API Level | 33 (blocks Android 9) | 24 (Android 7.0+) |
| Target API | — | 33+ |
| Scripting Backend | Mono | IL2CPP |
| Target Architectures | ARM64 only | ARMv7 + ARM64 |
| Graphics API | Vulkan + OpenGLES3 | OpenGLES3 only |
| Orientation | Default | Landscape Left + Right locked |
| Frame Rate | Uncapped | `Application.targetFrameRate = 60` |

### URP Optimization for Adreno 530

| Property | Before | After |
|---|---|---|
| HDR | Enabled | **Disabled** |
| Main Light Shadow Resolution | 2048 | **1024** |
| Additional Lights Per Object | 4 | **2** |
| Dynamic Batching | Disabled | **Enabled** |

---

## Part 2 — The Previous Port Failure: What Went Wrong

A previous port attempt was made before this project. It was abandoned. Understanding why
it failed directly shaped every decision made in the current implementation.

### The Failed Approach: 4-Mode Input State Machine

The previous port tried to solve touch targeting by building a complex state machine with
four modes: **Normal → Select → Aim → Action**. 

```
Game Start → NORMAL → (tap inventory) → SELECT → (press USE) → AIM → (press USE) → ACTION → fire tool
```

Each mode toggled different UI visibility, joystick behaviour, and cursor control.
The idea was sound on paper but created cascading problems in practice.

### Documented Failures from the Dev Log

| # | Failure | Root Cause |
|---|---|---|
| 1 | All screen touches were treated equally | Joystick drags accidentally triggered inventory items or tool aiming |
| 2 | Tool select disabled joystick movement | `OnBeginDrag()` fired on tiny taps (delta < 10px), calling `DisablePlayerInputAndResetMovement()` |
| 3 | Joystick capture zone blocked inventory | Zone anchored to full screen height — overlapped the inventory bar |
| 4 | Aim arrow hidden when inventory faded | Aim arrow was a child of `InventoryAimContainer` which fades to alpha=0 in Normal mode |
| 5 | `MobileInputModeManager` UI references null | Manager lived on a separate GameObject from the HUD — serialized refs never wired |
| 6 | Cutscene video showed as small square | Parent container defaulted to 100×100px; children stretched only within it |
| 7 | APK wouldn't install on Android 9 | Min API Level was set to 33, blocking API 28 devices |
| 8 | Vulkan crash on device | Adreno 530 driver instability with Vulkan |
| 9 | Broken `PersistentScene.unity` YAML | Python SafeArea injection script appended blocks without a trailing newline |
| 10 | Grey inventory selection boxes changed colour | Wrong fix applied during debug session |

> [!CAUTION]
> The core failure of the previous attempt was the **4-Mode State Machine was inherently fragile** — it required too many systems to coordinate simultaneously. Adding one new UI button could break the mode flow entirely, and the AIM mode stopped the player from moving while targeting, making the game feel unnatural.

---

## Part 3 — The Strategic Decision: Strip All PC Code

> [!IMPORTANT]
> **This project is a standalone Android codebase.** Old PC keyboard/mouse code was aggressively stripped out rather than preserved via cross-platform `#if` wrappers.

### Why This Decision Was Made

The previous port attempt **preserved PC code behind `#if !UNITY_ANDROID` guards**. This created:
- Scripts that were twice as long and twice as hard to reason about
- Hidden bugs where PC pathways accidentally ran on Android
- A fundamentally different code path for Android that was impossible to test in isolation

### What Was Removed

| PC Component | Replacement |
|---|---|
| `Input.GetAxisRaw("Horizontal/Vertical")` | `VirtualJoystick.Instance.InputVector` |
| `Input.mousePosition` (everywhere) | `MobileTouchRouter.LastValidWorldTapScreenPos` |
| `Input.GetMouseButton(0)` click-to-use-tool | `MobileHUDManager.OnActionButtonPressed()` |
| `Input.GetKeyDown(KeyCode.Escape)` | `UIManager.TogglePauseMenu()` via Pause button |
| `Input.GetKeyDown(KeyCode.T/G)` (time debug) | `OnAdvanceMinuteButtonPressed()` / `OnAdvanceDayButtonPressed()` |
| `Screen.SetResolution(1920, 1080, ...)` | Removed; Android manages its own resolution |
| Walk/Run toggled by `LeftShift` | Walk/Run determined purely by joystick stick magnitude |
| `MobileInputModeManager` (4-mode state machine) | **Deleted entirely** — replaced by direct tap-to-target |

---

## Part 4 — The New Architecture: Keys to Success

### Why the New Approach Works

The core insight that made the current port succeed was **Dual-Zone Touch Routing** — separating UI touches from World touches at the lowest possible level, before any game logic runs.

```
Android Touch Input
        │
        ▼
MobileTouchRouter.Update()
        │
        ├─ IsPointerOverGameObject(touch.fingerId)?
        │       YES → UI Touch (Joystick, Buttons, Inventory) → ignored by world
        │       NO  → World Tap → stored in LastValidWorldTapScreenPos
        │
        ├─ VirtualJoystick reads its own UI touch
        │
        └─ GridCursor + Cursor + Player read LastValidWorldTapScreenPos
```

**Key Properties of This Design:**
- **No state machine required.** Movement and targeting can happen simultaneously at any time.
- **`LastValidWorldTapScreenPos` is persistent.** It holds the last valid tap even after the finger lifts. This means pressing a UI button after tapping the world still correctly reads the world position.
- **All existing scripts required minimal changes.** Just replacing `Input.mousePosition` with `MobileTouchRouter.LastValidWorldTapScreenPos`.

---

## Part 5 — Full Implementation

### 5.1 Movement (VirtualJoystick)

A Canvas-based floating joystick. Implements `IDragHandler` — its touch is fully consumed by the UI layer, so the world never sees it.

- Exposes `InputVector: Vector2` to `Player.cs`
- Walk vs. Run determined by `InputVector.magnitude` (threshold ≈ 0.5)
- Auto-hides on non-Android platforms via `CanvasGroup.alpha`

### 5.2 Grid Targeting (GridCursor)

- **Input source:** `MobileTouchRouter.LastValidWorldTapScreenPos` (replaces all `Input.mousePosition`)  
- **10-grid radius clamp:** If the player taps beyond 10 grid units from the character, the cursor clamps to the edge of the radius in the direction of the tap rather than following to an out-of-reach tile.

### 5.3 Free Cursor / Scythe Tool (Cursor.cs)

The `Cursor` (round green circle used for the Reaping/Scythe tool) had both `GetWorldPositionForCursor()` and `GetRectTransformPositionForCursor()` hardcoded to `Input.mousePosition`. On Android, that is always `(0,0,0)` when triggered by a button press.

**Fix:** Both methods now read `MobileTouchRouter.LastValidWorldTapScreenPos` with a fallback to `Input.mousePosition` for the editor.

### 5.4 Tool Use (MobileHUDManager → Player)

```
User presses "Use Tool" button
         │
         ▼
MobileHUDManager.OnActionButtonPressed()
         │
         ▼
Player.MobileUseToolAction()
         │
         ├─ Reads cursor grid position (already set by last world tap)
         ├─ Calls ProcessPlayerClickInputWrapper()
         │       └─ Sets animation flags (e.g. isUsingToolRight = true)
         └─ Calls SendMovementEvent()
                 └─ Fires CallMovementEvent() → animator triggers
```

### 5.5 Tool Animation Fix (AnimationOverrides + SendMovementEvent)

**The Problem:** Tool animations silently failed despite world effects (particles, shaking) running correctly.

**Root Cause:** Unity's `AnimatorOverrideController` swap in `AnimationOverrides.cs` deferred graph re-initialization. When the trigger fired into a half-initialized animator from a UI button event (outside the normal `Update()` loop), it was silently discarded.

**Two-part fix:**
1. `AnimationOverrides.cs` — Added `currentAnimator.Update(0f)` immediately after the controller swap to force instant synchronization.
2. `Player.cs` — Extracted `CallMovementEvent` into `SendMovementEvent()`. Called explicitly at the end of `MobileUseToolAction()` so animation flags always reach the animator, even when `PlayerInputIsDisabled = true` prevents the `Update()` loop from running.

### 5.6 Inventory & Pause UX

| Feature | Before (PC) | After (Mobile) |
|---|---|---|
| Pause Menu Inventory | Drag-and-drop | **Tap-to-Swap** (tap slot A, tap slot B) |
| Hotbar | Drag-and-drop | Drag kept for non-tools; **core tools locked** (guard clause prevents dragging Axe, Hoe, Pickaxe) |
| Floating Tooltips | Disappeared on `OnPointerExit` | `DestroyInventoryTextBox()` called defensively **at the start of `OnPointerEnter`** — prevents zombie tooltips from touch-drop events |
| Pause Button | `EnablePauseMenu()` was `private` — button was an empty `else` block | `EnablePauseMenu()` made `public`; `TogglePauseMenu()` added |

### 5.7 HUD Visibility: 4 Layers of State

| State | Trigger | Behaviour |
|---|---|---|
| **Scene-based** | Scene load | HUD hidden on Main Menu; shown on any `SceneName` enum scene (Farm, Field, Cabin) |
| **Cutscene** | `CutsceneVideoPlayer.PlayCutscene()` | Entire HUD fades out; raycasts disabled. Restored on video end/skip |
| **Idle auto-fade** | No touch for 1.5 seconds | HUD smoothly fades to 0% alpha. Any touch instantly wakes it. Raycasts remain active while invisible |
| **Pause menu** | `UIManager.EnablePauseMenu()` | `gameplayControlsRoot` (Joystick + action buttons) deactivated; only Pause button remains visible |

### 5.8 Time Controls Fix

| Button | Old Behaviour | New Behaviour |
|---|---|---|
| **Time+** | Advanced 60 game-seconds (1 minute — barely visible) | Advances 3,600 game-seconds (1 **hour** per press) |
| **Day+** | Iterated `UpdateGameSecond()` **86,400 times** in one frame → freeze | Directly sets `gameDay++`, resets clock to 6:30am, fires all events → **instant, no freeze** |

### 5.9 Video Cutscene Full-Screen Fix

Root cause: The `CutsceneManager` parent GameObject defaults to 100×100px in Unity.
Children stretching "to fill parent" were capped at 100×100, appearing as a square in the screen center.

Fix in `CutsceneVideoPlayer.Awake()` — enforces `anchorMin=0, anchorMax=1, offset=0` on **three levels**: the Manager itself, the CutscenePanel, and the RawImage video surface.

---

## Part 6 — Summary of All Changed Files

| File | Type | Summary of Changes |
|---|---|---|
| `Player.cs` | Modified | Removed all PC input; added `MobileUseToolAction()`, `SendMovementEvent()` |
| `GridCursor.cs` | Modified | Reads `MobileTouchRouter.LastValidWorldTapScreenPos`; 10-grid clamp |
| `Cursor.cs` | Modified | `GetWorldPositionForCursor()` and `GetRectTransformPositionForCursor()` use mobile touch pos |
| `AnimationOverrides.cs` | Modified | `currentAnimator.Update(0f)` after controller swap |
| `UIManager.cs` | Modified | `EnablePauseMenu` made public; `TogglePauseMenu()` added; calls `SetPauseMenuMode` |
| `UIInventorySlot.cs` | Modified | Tool drag guard; defensive tooltip destroy; `OnPointerEnter` fix |
| `PauseMenuInventoryManagementSlot.cs` | Modified | Tap-to-swap logic; defensive tooltip destroy |
| `SceneControllerManager.cs` | Modified | Auto show/hide HUD via `Enum.TryParse<SceneName>()` on every scene load |
| `CutsceneVideoPlayer.cs` | Modified | Full-screen fix (3-level RectTransform stretch); calls `SetCutsceneVisibility()` |
| `TimeManager.cs` | Modified | Day+ no longer freezes; Time+ advances 1 hour; `PauseGameClock()`/`ResumeGameClock()` added |
| `GameManager.cs` | Modified | `Screen.SetResolution` guarded; `targetFrameRate = 60` added |
| `MCPBridge.cs` | Modified | Port binding error downgraded from `LogError` to `LogWarning` |
| `MobileTouchRouter.cs` | **New** | Global world-touch routing singleton |
| `VirtualJoystick.cs` | **New** | On-screen floating joystick singleton |
| `MobileHUDManager.cs` | **New** | UI button bridge; idle auto-fade; cutscene hide; pause-mode hide |
| `MobileHUDBuilder.cs` | **New** | Editor tool: one-click canvas scaler (all to 1920×1080 Scale With Screen Size) |

---

## Part 7 — Lessons Learned

| Lesson | What Failed | What Works |
|---|---|---|
| **Don't build a state machine when routing suffices** | 4-mode state machine required all systems to coordinate; one change broke the whole flow | `MobileTouchRouter` routes touches at source; everything else is stateless |
| **`Input.mousePosition` is zero on Android button press** | All tool effects fired but `(0,0)` was passed to the cursor | `LastValidWorldTapScreenPos` persists after finger lifts so button press reads the last valid tap |
| **Animator triggers drop silently after controller swap** | Tool animations never ran despite game logic executing | Call `animator.Update(0f)` immediately after swapping `runtimeAnimatorController` |
| **Strip platform code — don't wrap it** | `#if !UNITY_ANDROID` guards doubled script length and hid bugs | One Android-only codebase; removal of PC code is permanent and clean |
| **`private` methods can't be called from UI buttons** | Pause button had an empty `else` block for 3 weeks | Any method a UI button needs must be `public` |
| **86,400 loop iterations freeze a frame** | `TestAdvanceGameDay()` froze the game for ~1 second | Set state directly; fire events manually |
| **Parent RectTransform size is inherited by children** | Cutscene video appeared as 100×100px square | Stretch the parent first, then stretch the children |
| **`OnPointerExit` can be dropped on touchscreens** | Tooltips stayed permanently after quick swipes | Destroy existing tooltip at the start of `OnPointerEnter` as a defensive safeguard |

---

## Part 8 — APK Readiness Checklist

### ✅ Confirmed Working
- [x] Player moves via VirtualJoystick (walk/run by magnitude)
- [x] Tool targeting via world tap → `MobileTouchRouter`
- [x] All tools animate correctly (Hoe, Axe, Pickaxe, Watering Can, Basket, Scythe)
- [x] Scythe/reaping tool uses correct tap position from `LastValidWorldTapScreenPos`
- [x] Pause/inventory menu opens and closes
- [x] Inventory tap-to-swap works in pause menu
- [x] Hotbar core tools cannot be accidentally dragged
- [x] Cutscenes play full-screen
- [x] HUD hides during cutscenes, auto-fades on idle, hides during pause menu
- [x] HUD correctly shows/hides based on scene (hidden on Main Menu)
- [x] Tooltips do not get permanently stuck
- [x] Day+ is instant (no freeze); Time+ advances 1 hour per press
- [x] Canvas scaling correct at 1920×1080

### 🔲 Before Shipping to Store
- [ ] Set ASTC texture compression in Player Settings
- [ ] Set Managed Stripping Level to Medium or High (smaller APK)
- [ ] Remove or hide Day+/Time+ debug buttons
- [ ] Set package name (`com.yourcompany.farmrpg2d`)
- [ ] Add application icon and splash screen
- [ ] On-device test: APK sideload to OnePlus 3 via ADB
- [ ] Verify frame rate stable at 60 FPS on device
- [ ] Verify safe area on device (notch/punch-hole handling)
- [ ] Test app background → auto-save and clock pause
