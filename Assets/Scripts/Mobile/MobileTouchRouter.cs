using UnityEngine;
using UnityEngine.EventSystems;

/// <summary>
/// A global singleton that intercepts and routes Touch input natively.
/// Solves the UI vs World overlap by ensuring touches over joysticks or buttons 
/// are wholly ignored by the game world targeting logic.
/// </summary>
public class MobileTouchRouter : MonoBehaviour
{
    public static MobileTouchRouter Instance { get; private set; }

    /// <summary>
    /// The screen coordinates of the latest touch that did NOT hit a UI element.
    /// Replaces Input.mousePosition for grid calculations.
    /// </summary>
    public static Vector3 LastValidWorldTapScreenPos { get; private set; }
    
    /// <summary>
    /// True if the user is currently touching/holding the world grid.
    /// </summary>
    public static bool HasValidWorldTapThisFrame { get; private set; }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        // Allows this to persist across scenes if needed
        DontDestroyOnLoad(gameObject);
    }

    private void Update()
    {
        HasValidWorldTapThisFrame = false;

        if (Input.touchCount > 0)
        {
            foreach (Touch touch in Input.touches)
            {
                // We only care about touches that are actively held or moving
                if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved || touch.phase == TouchPhase.Stationary)
                {
                    // If the touch is over a UI Element (Joystick, Inventory, etc.), ignore it!
                    if (EventSystem.current != null && EventSystem.current.IsPointerOverGameObject(touch.fingerId))
                    {
                        continue; 
                    }

                    // This is a verified world tap
                    LastValidWorldTapScreenPos = touch.position;
                    HasValidWorldTapThisFrame = true;
                    
                    // Break after finding the first valid world touch to prevent multi-touch jumping
                    break;
                }
            }
        }
#if UNITY_EDITOR || UNITY_STANDALONE
        // Fallback for Editor simulation using mouse
        else if (Input.GetMouseButton(0))
        {
            if (EventSystem.current != null && !EventSystem.current.IsPointerOverGameObject())
            {
                LastValidWorldTapScreenPos = Input.mousePosition;
                HasValidWorldTapThisFrame = true;
            }
        }
#endif
    }
}
