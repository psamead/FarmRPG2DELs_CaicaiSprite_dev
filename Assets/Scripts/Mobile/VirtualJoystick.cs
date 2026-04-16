using UnityEngine;
using UnityEngine.EventSystems;

/// <summary>
/// Dedicated UI Virtual Joystick for player movement. 
/// Placed on the Canvas. Uses native Touch pointer events.
/// </summary>
public class VirtualJoystick : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    public static VirtualJoystick Instance { get; private set; }

    [Header("UI Component References")]
    [SerializeField] private RectTransform joystickBackground;
    [SerializeField] private RectTransform joystickKnob;

    [Header("Settings")]
    [SerializeField] private float mobileRadiusOffset = 1.0f; // Scale modifier if needed

    // Output vector for Player.cs to read smoothly
    public Vector2 InputVector { get; private set; }

    private float _joystickRadius;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
    }

    private void Start()
    {
        // Calculate the physical interactive radius of the joystick background accurately
        if (joystickBackground != null)
        {
            _joystickRadius = (joystickBackground.rect.width / 2f) * mobileRadiusOffset;
        }
        else
        {
            _joystickRadius = 100f; // Fallback
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        OnDrag(eventData);
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (joystickBackground == null || joystickKnob == null) return;

        Vector2 position;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            joystickBackground, 
            eventData.position, 
            eventData.pressEventCamera, 
            out position
        );

        // Normalize the coordinate relative to the radius (max distance = 1)
        position = position / _joystickRadius;

        // Clamp to a perfect circle boundary
        InputVector = (position.magnitude > 1.0f) ? position.normalized : position;

        // Update the visual Knob position
        joystickKnob.anchoredPosition = InputVector * _joystickRadius;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        // Reset joystick when thumb is released
        InputVector = Vector2.zero;
        if (joystickKnob != null)
        {
            joystickKnob.anchoredPosition = Vector2.zero;
        }
    }
}
