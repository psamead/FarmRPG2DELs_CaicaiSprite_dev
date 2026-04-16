# Convert Project to Android

This plan outlines the elements and steps required to convert the existing FarmRPG Unity project from a PC (Keyboard/Mouse) build to a fully functional Android mobile game. 

## User Review Required

> [!IMPORTANT]
> Please review the proposed changes below. Migrating from PC to Mobile involves significant Input and UI alterations. Let me know if you prefer specific joystick packages or custom UI designs!

## Proposed Changes

### 1. Platform & Build Settings
- **Switch Build Target**: Change the Unity build platform to Android.
- **Player Settings**: 
  - Set Company/Product Name and Package Name (e.g. `com.company.farmrpg`).
  - Configure Target API level.
  - Set Scripting Backend to IL2CPP to support ARM64 devices.
- **Optimization**: Set `Application.targetFrameRate = 60` (or 30) to prevent battery drain. Apply ASTC texture compression.

### 2. Input System - Movement
- **Add Virtual Joystick**: Introduce an On-Screen Joystick UI Canvas Overlay. 
- **Modify `Player.cs`**:
  - Replace `Input.GetAxisRaw("Horizontal")` and `"Vertical"` with inputs read from the Virtual Joystick.
  - Add an On-Screen toggle button for the Run/Walk mechanic (replacing `KeyCode.LeftShift`).

### 3. Input System - Actions & Grid Cursor
- **Modify `Player.cs`** and Tools:
  - Replace `Input.GetMouseButton(0)` and `Input.GetMouseButtonDown(0)` checks with Touch Input logic (`Input.GetTouch(0)`) or a dedicated On-Screen Action Button.
  - Map specific keyboard actions (`KeyCode.T`, `KeyCode.G`) to context-aware touchscreen UI buttons.
- **Modify `GridCursor.cs` & `Cursor.cs`**:
  - Since mobile lacks a continuous "mouse hover", modify the cursor logic so that it always highlights the tile directly in front of the player's facing direction, rather than relying on `Input.mousePosition`. 
  - Alternatively, keep touch-to-target functionality, but map it to tap inputs cleanly.

### 4. UI Adaptation
- **Modify UI Canvases**: Ensure all `CanvasScaler` components are set to `Scale With Screen Size` (e.g. Reference Resolution 1920x1080) so the UI adapts cleanly to various phone screen aspect ratios.
- **Add Mobile Controls HUD**: Add an overlay Canvas with the Joystick, Action buttons, and a Menu/Pause button (replacing `KeyCode.Escape` in `UIManager.cs`).
- **Inventory Drag & Drop (`UIInventorySlot.cs` / `PauseMenuInventoryManagementSlot.cs`)**:
  - Refactor `OnDrag` and `OnBeginDrag` to use `eventData.position` instead of `Input.mousePosition` for smooth native touch dragging.
  - Refactor item dropping `DropSelectedItemAtMousePosition()` to use the drag pointer event's point instead of the mouse position.
  - Change Item Tooltips (`OnPointerEnter`) to be toggled by tapping or long-pressing, as touchscreens don't have natural hover states.

## Open Questions

> [!WARNING]
> Your answers to these questions will define how we move forward.

1. **Movement Controls**: Do you already have a preferred Virtual Joystick asset (like the popular Joystick Pack), or should I create a simple custom UI EventTrigger-based joystick from scratch?
2. **Action Controls**: For using tools and planting seeds, would you prefer a dedicated on-screen "Action/Interact" button, or would you prefer touching directly on the world grid tiles?
3. **Cross-Platform Support**: Do you want to preserve the PC Keyboard/Mouse controls to build for both PC and Android simultaneously (requires a wrapper), or permanently replace them for Android only?

## Verification Plan

### Manual Verification
- Testing Movement and Actions iteratively using the Unity Editor's Device Simulator.
- Testing the UI Canvas Scalers using various phone resolutions (Notch, 18:9, 16:9).
- Building an `APK` and testing the inputs (joystick, pause menu, inventory dragging) natively on an actual Android device to confirm touch responsiveness and scaling.
