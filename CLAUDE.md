I'll start by exploring your project to understand its current state, then provide a comprehensive Android conversion plan.I've done a thorough review of your **FarmRPG2D** project. Here's a complete breakdown of what needs to happen to get it running on an Android phone.

---

## Project Overview

Your project is a 2D Farm RPG built in **Unity 2021.1.17f1** using **URP 11.0.0**, currently targeting **Standalone Desktop (PC)** at a hardcoded **1920×1080** resolution. It uses the **Legacy Input System** (keyboard + mouse), has **5 scenes**, **100+ scripts**, and no native plugins — which is actually great news for Android porting.

---

## Android Conversion Plan

### Phase 1 — Project & Build Setup

**1. Install Android Build Support**
In Unity Hub, add the Android module to your Unity 2021.1.17f1 installation (includes Android SDK, NDK, and OpenJDK). Then switch your build target to Android via File → Build Settings.

**2. Configure Player Settings for Android**
- Set the **Package Name** (e.g., `com.yourcompany.farmrpg2d`)
- Set **Minimum API Level** to Android 7.0 (API 24) or higher
- Set **Target API Level** to API 33+ (Google Play requirement)
- Set **Scripting Backend** to **IL2CPP** (required for modern Android, better performance)
- Set **Target Architectures** to **ARM64** (ARMv7 is being phased out)
- Set **Graphics APIs** to **OpenGLES3** (remove Vulkan initially for compatibility, add back later)

**3. Screen Orientation**
Lock to **Landscape Left + Landscape Right** in Player Settings since your game is designed for 16:9 landscape.

---

### Phase 2 — Resolution & Screen Adaptation (Critical)

**4. Remove Hardcoded Resolution**
Your `GameManager.cs` (line 12) forces `1920×1080 FullScreenWindow`. This needs to be replaced with dynamic screen detection:
```csharp
// Remove: Screen.SetResolution(1920, 1080, FullScreenMode.FullScreenWindow);
// Android handles its own resolution — just set the target frame rate
Application.targetFrameRate = 60;
```

**5. UI Scaling**
- Ensure your **Canvas Scaler** components use **"Scale With Screen Size"** mode with a reference resolution of 1920×1080 and a match of 0.5 (width/height blend)
- Test all UI elements at common Android ratios: 16:9, 18:9, 19.5:9, 20:9
- Your 16:9-only aspect ratio restriction in ProjectSettings needs to be relaxed

**6. Camera / Pixel Perfect**
You're using `com.unity.2d.pixel-perfect`. On Android, screen DPI varies wildly. You may need to adjust the Pixel Perfect Camera's "Assets Pixels Per Unit" or use a reference resolution approach instead of strict pixel-perfect on mobile.

---

### Phase 3 — Input System Overhaul (Biggest Task)

This is the most significant work item. Your entire game uses keyboard/mouse input that doesn't exist on a phone.

**7. Create a Virtual Joystick for Movement**
Replace `Input.GetAxisRaw("Horizontal/Vertical")` in `Player.cs` with a virtual on-screen joystick. Options include writing your own UI-based joystick or using a package like "Joystick Pack" from the Asset Store.

**8. Replace Mouse Input with Touch**
Your game heavily uses mouse for:
- **Grid cursor positioning** (`Input.mousePosition` in GridCursor.cs, Cursor.cs)
- **Tool use / interaction** (`Input.GetMouseButton(0)`, `Input.GetMouseButtonDown(0)`)
- **Inventory drag-and-drop** (UIInventorySlot.cs uses mouse-based drag)
- **UI clicks** (these mostly work via Unity's EventSystem, but verify)

You'll need to convert `Input.mousePosition` → `Touch.position` (or use `Input.GetTouch(0).position` which Unity partially bridges). For tool targeting, consider a tap-to-target system or an auto-aim to the nearest valid tile in the player's facing direction.

**9. Replace Keyboard Shortcuts**
Your code uses several keyboard bindings:
- `KeyCode.Escape` → Need a UI pause button
- `KeyCode.T` → Need a UI button for whatever T triggers
- `KeyCode.LeftShift` (running) → Could be auto-run, or a toggle button
- Number keys for inventory → Tap inventory slots directly

**10. Redesign Inventory Drag & Drop**
Mouse-based drag-and-drop is awkward on touch. Consider a tap-to-select, tap-to-place paradigm instead, or ensure Unity's `IDragHandler` works with touch (it partially does, but needs testing and UX refinement).

---

### Phase 4 — Performance Optimization

**11. URP Settings for Mobile**
Your URP asset needs a mobile-friendly variant:
- Reduce **shadow resolution** from 2048 → 1024 or 512
- Reduce **additional lights per object** from 4 → 2
- Disable HDR (saves GPU bandwidth)
- Enable **Dynamic Batching** (currently disabled — helpful for 2D sprites)
- Keep SRP Batcher enabled

**12. Quality Settings**
- Create a dedicated "Mobile" quality level
- Reduce texture quality if needed (your sprites are likely fine)
- Set `Application.targetFrameRate = 60` (or 30 for battery savings)
- Disable VSync (Android manages its own vsync)

**13. Sprite Atlasing**
Verify your sprite atlases are configured and packed. This reduces draw calls significantly on mobile.

**14. Audio Compression**
Check that audio files use compressed formats (Vorbis for music, ADPCM for short SFX) to reduce APK size and memory usage.

---

### Phase 5 — Save System & Storage

**15. Verify Save System**
Your `SaveLoadManager.cs` uses `Application.persistentDataPath` with binary serialization — this should work on Android out of the box. However, test thoroughly because Android file permissions have changed in recent API levels. No code changes likely needed, but verify during testing.

---

### Phase 6 — Mobile UI/UX Additions

**16. Add On-Screen Controls UI**
Create a new UI layer with:
- Virtual joystick (bottom-left)
- Action/interact button (bottom-right)
- Tool selection bar (top or side)
- Pause/menu button (top corner)
- Optional: auto-aim indicator for tool use

**17. Scale UI for Touch Targets**
All interactive UI elements need to be at least **48×48dp** (roughly 96–144px depending on DPI) for comfortable tapping. Your inventory slots and buttons may need to be larger.

**18. Add a Mobile-Friendly Pause Menu**
Replace the Escape-key pause with a hamburger/gear icon button.

---

### Phase 7 — Testing & Polish

**19. Handle Android Lifecycle**
- **OnApplicationPause** → Auto-save when the app goes to background
- **OnApplicationFocus** → Handle resuming gracefully
- Your `TimeManager` needs to handle pausing/resuming the game clock

**20. Handle Notch/Cutout Safe Areas**
Use `Screen.safeArea` to ensure UI doesn't overlap with notches, camera holes, or rounded corners.

**21. APK Size Optimization**
- Strip unused engine modules in Player Settings
- Enable "Managed Stripping Level" to Medium or High
- Compress textures with ASTC format (best for modern Android)

**22. Test on Multiple Devices**
- Low-end (2GB RAM, older GPU)
- Mid-range (typical target)
- Different aspect ratios (16:9, 19.5:9, 20:9)
- Devices with notches/punch-holes

---

## Priority & Effort Summary

| Phase | Effort | Priority |
|---|---|---|
| 1. Build Setup | Low (1-2 hours) | Do first |
| 2. Resolution/Screen | Medium (1-2 days) | Do second |
| 3. Input Overhaul | **High (1-2 weeks)** | Core work |
| 4. Performance | Medium (2-3 days) | Important |
| 5. Save System | Low (verify only) | Quick check |
| 6. Mobile UI | **High (1-2 weeks)** | Core work |
| 7. Testing/Polish | Medium (ongoing) | Continuous |

The **input system conversion** and **mobile UI creation** are by far the biggest tasks — they represent about 70% of the total effort. The good news is that your project has no native plugins, uses URP (which is mobile-friendly), and your 2D sprite-based art style is inherently well-suited for mobile performance.