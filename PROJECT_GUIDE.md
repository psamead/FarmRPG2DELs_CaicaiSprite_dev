# FarmRPG2D: Android Conversion Master Guide

## Overview

This guide serves as the definitive reference for converting the **FarmRPG2D** Unity project from a PC (Keyboard/Mouse) target to a fully functional Android mobile experience. The project is currently built in **Unity 2021.1.17f1** using **URP 11.0.0**, featuring 5 scenes and over 100 scripts without native plugins. 

This guide synthesizes two existing planning documents:
1. **`CLAUDE.md`**: Provides a deep diagnostic analysis, breaking the conversion down into 7 comprehensive phases, offering code-level insights, and assessing task effort/priority.
2. **`implementation_plan.md`**: Acts as an actionable checklist, distilling the technical steps and posing critical open questions regarding UX and control schemes that require user decisions.

By combining the analytical depth of `CLAUDE.md` with the actionable structure of the `implementation_plan.md`, this guide creates a unified roadmap for development.

---

## Core Technical Objectives

Porting this game to mobile involves three major pillars:
1. **Input System Overhaul (Highest Effort):** Removing hardcoded `Input.GetAxisRaw`, `Input.GetMouseButton`, and `Input.mousePosition` in favor of touch controls and virtual joysticks.
2. **Screen & UI Adaptation:** Adapting the PC-sized UI elements into touch-friendly sizes (resolving the "fat finger" problem), while targeting the strict **1920x1080 (16:9)** native resolution of the target phone.
3. **Mobile Optimization & Build Setup:** Configuring Android Player Settings, IL2CPP tooling, handling URP mobile performance, and optimizing APK size.

---

## Conversion Workflow

### Phase 1: Project Setup & Foundation (Target: OnePlus 3)
*   **Build Settings:** Switch target to Android. Install Android SDK/NDK via Unity Hub.
*   **Player Settings:** Set **Minimum API Level** to Android 9.0 Pie (API 28), as dictated by the target phone. Set Scripting Backend to **IL2CPP**, and enable **ARM64** (Snapdragon 820 is a 64-bit architecture). Force Graphics to **OpenGLES3** (avoid Vulkan on older Adreno 530 GPUs).
*   **Screen Orientation:** Lock to Landscape Left & Right.

### Phase 2: Input & Control Transformation (Critical Path)
*   **Movement (`Player.cs`):** Implement a Virtual Joystick HUD overlay to replace keyboard movement (`Horizontal`/`Vertical`).
*   **Interactions (`Player.cs`, Tools, UIManager):** Map the specific PC `KeyCode` toggles (`T`, `G`, `Esc`, `LeftShift`) down to 4 distinct, easily accessible UI buttons on the new Mobile HUD.
*   **Grid Targeting (Dual-Touch / Range Limited):** Implement a strict Multi-touch routing system. The Left thumb operates the Joystick (UI touch), while the Right thumb taps the world grid (World touch). Furthermore, tapping the world grid must be restricted to a specific max range (e.g., 10 grids). Taps outside this range must be clamped or rejected.
*   **Inventory UI (`UIInventorySlot.cs`):** Revamp the system for mobile ergonomics: Inside the fullscreen Inventory Panel, users **Tap-to-Select** an item, then tap another slot to swap it (no dragging allowed). On the bottom in-game Hotbar, users **Tap-to-Select** their active tool, but can **Drag-and-Drop** non-tool items directly out of the hotbar to drop them into the world.

### Phase 3: UI & Resolution Scaling (Strict 1920x1080 / 5.5" Target)
*   **Remove Hardcoded Resolution:** Remove `Screen.SetResolution(1920, 1080)` from `GameManager.cs` (line 12). Add `Application.targetFrameRate = 60;` (or target 30fps if the Snapdragon 820 gets too hot). Let Android manage its own window.
*   **Canvas Scalers:** Utilize "Scale With Screen Size" on all UI Canvases (Reference: 1920x1080). Because the target device is identical to the PC aspect ratio, complex multi-resolution scaling is not required.
*   **Mobile Elements ("Fat Finger" Fix):** The target is exactly 5.5 inches at 1080p (a dense ~401 ppi). PC-sized UI elements will be microscopically small. We must aggressively bump up the physical size of the new Joystick, Action buttons, Menu icon, and existing inventory slots to ensure they are comfortably tappable.
*   **Cutscene Video Player Resilience:** `CutsceneVideoPlayer.cs` must be injected with dynamic `RectTransform` constraints (anchorMin=0, anchorMax=1) upon playing a video to ensure it stretches seamlessly across the display rather than shrinking/breaking within the mobile UI Canvas.

### Phase 4: Performance & Refinement (Adreno 530 Limits)
*   **URP Tweak:** Create a mobile URP asset tailored for the older Snapdragon 820. Reduce shadow res, lower extra lights to 1 or 2, disable HDR, and strongly rely on Dynamic Batching and Sprite Atlasing.
*   **Files & Audio:** Verify `SaveLoadManager.cs` works smoothly with Android file boundaries. Ensure textures are utilizing ASTC compression.
*   **Lifecycle Handling:** Manage Android interruptions natively (`OnApplicationPause`, `OnApplicationFocus`).

---

## Finalized Architecture Decisions

Based on user feedback, the following core interaction rules are locked in:

> [!NOTE]
> **1. Targeting Constraints:** When tapping outside the 10-grid max range, the cursor will explicitly **clamp** to the 10-grid limit edge in the direction of the tap, rather than being ignored entirely.

> [!NOTE]
> **2. Interaction Fallback (Auto-Aim):** The character will **not** blindly swing a tool if the Action button is pressed without a targeted tile. This will only log a debug message for testing purposes.

> [!NOTE]
> **3. Platform Compatibility:** This project is branched as a **standalone Android codebase**. Old PC Keyboard/Mouse code will be aggressively stripped out rather than preserved via cross-platform wrappers.

---

## Testing & Verification
*   **Editor Simulation:** Iterative control and UI testing via the Unity Device Simulator.
*   **UI Usability Validation:** Validate that all scaled-up touch targets are comfortable to tap within the 1920x1080 constraint.
*   **Device Builds:** Conduct manual on-device testing via APK sideloading to verify touch responsiveness, input feel, and performance baselines.
