using UnityEngine;
using UnityEditor;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class MobileHUDBuilder : EditorWindow
{
    [MenuItem("FarmRPG/Build Mobile HUD (Phase 2)")]
    public static void BuildHUD()
    {
        // 1. Create the core MobileTouchRouter
        GameObject routerGo = GameObject.Find("MobileTouchRouter");
        if (routerGo == null)
        {
            routerGo = new GameObject("MobileTouchRouter");
            routerGo.AddComponent<MobileTouchRouter>();
            Debug.Log("[FarmRPG] Created MobileTouchRouter global singleton.");
        }

        // 2. Safely create or find an EventSystem (crucial for UI dragging)
        if (FindObjectOfType<EventSystem>() == null)
        {
            GameObject esGo = new GameObject("EventSystem");
            esGo.AddComponent<EventSystem>();
            esGo.AddComponent<StandaloneInputModule>();
            Debug.Log("[FarmRPG] Synthesized missing UI EventSystem.");
        }

        // 3. Create the Main Mobile HUD Canvas
        GameObject canvasGo = GameObject.Find("MobileHUD_Canvas");
        if (canvasGo == null)
        {
            canvasGo = new GameObject("MobileHUD_Canvas");
            Canvas canvas = canvasGo.AddComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceOverlay;
            canvas.sortingOrder = 99; // Top-most layer

            CanvasScaler scaler = canvasGo.AddComponent<CanvasScaler>();
            scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            scaler.referenceResolution = new Vector2(1920, 1080);
            scaler.matchWidthOrHeight = 0.5f;

            canvasGo.AddComponent<GraphicRaycaster>();
            Debug.Log("[FarmRPG] Created MobileHUD_Canvas (1920x1080 Scaler).");
        }

        // 4. Create the Virtual Joystick Base
        GameObject joystickBg = GameObject.Find("VirtualJoystick_BG");
        if (joystickBg == null)
        {
            joystickBg = new GameObject("VirtualJoystick_BG");
            joystickBg.transform.SetParent(canvasGo.transform, false);
            
            // Layout (Bottom-left corner)
            RectTransform bgRect = joystickBg.AddComponent<RectTransform>();
            bgRect.anchorMin = new Vector2(0, 0);
            bgRect.anchorMax = new Vector2(0, 0);
            bgRect.pivot = new Vector2(0.5f, 0.5f);
            bgRect.anchoredPosition = new Vector2(300, 300);
            bgRect.sizeDelta = new Vector2(350, 350);

            // Visuals
            Image bgImg = joystickBg.AddComponent<Image>();
            bgImg.color = new Color(0, 0, 0, 0.5f); // Semi-transparent black
            bgImg.sprite = AssetDatabase.GetBuiltinExtraResource<Sprite>("UI/Skin/Background.psd");
            bgImg.type = Image.Type.Sliced;

            // Logic Script
            VirtualJoystick vjScript = joystickBg.AddComponent<VirtualJoystick>();

            // 5. Create the Joystick Knob
            GameObject joystickKnob = new GameObject("VirtualJoystick_Knob");
            joystickKnob.transform.SetParent(joystickBg.transform, false);

            // Layout (Centered on BG)
            RectTransform knobRect = joystickKnob.AddComponent<RectTransform>();
            knobRect.anchorMin = new Vector2(0.5f, 0.5f);
            knobRect.anchorMax = new Vector2(0.5f, 0.5f);
            knobRect.pivot = new Vector2(0.5f, 0.5f);
            knobRect.anchoredPosition = Vector2.zero;
            knobRect.sizeDelta = new Vector2(150, 150);

            // Visuals
            Image knobImg = joystickKnob.AddComponent<Image>();
            knobImg.color = new Color(1f, 1f, 1f, 0.9f); // Solid white
            knobImg.sprite = AssetDatabase.GetBuiltinExtraResource<Sprite>("UI/Skin/Knob.psd");

            // Wire the inspector references via SerializedObject to bypass private constraints
            SerializedObject so = new SerializedObject(vjScript);
            so.FindProperty("joystickBackground").objectReferenceValue = bgRect;
            so.FindProperty("joystickKnob").objectReferenceValue = knobRect;
            so.ApplyModifiedProperties();

            Debug.Log("[FarmRPG] Built and wired Virtual Joystick.");
        }

        // 6. Enforce "Scale With Screen Size" on ALL existing CanvasScalers in the project
        CanvasScaler[] allScalers = GameObject.FindObjectsOfType<CanvasScaler>();
        int convertedScalers = 0;
        foreach (CanvasScaler cs in allScalers)
        {
            if (cs.uiScaleMode != CanvasScaler.ScaleMode.ScaleWithScreenSize)
            {
                Undo.RecordObject(cs, "Updated Canvas Scaler Mode");
                cs.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
                cs.referenceResolution = new Vector2(1920, 1080);
                cs.matchWidthOrHeight = 0.5f;
                EditorUtility.SetDirty(cs);
                convertedScalers++;
            }
        }
        if (convertedScalers > 0)
        {
            Debug.Log($"[FarmRPG] Converted {convertedScalers} legacy Canvases to 'Scale With Screen Size' (1920x1080) for Android compatibility.");
        }

        Selection.activeGameObject = canvasGo;
        Debug.Log("=> Mobile HUD Build Complete! Check your scene hierarchy.");
    }
}
