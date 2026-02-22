using UnityEngine;

public class TitleDropAnimation : MonoBehaviour
{
    [Header("Animation Settings")]
    [SerializeField] private RectTransform titleTransform = null;
    [SerializeField] public float dropDuration = 3f; // How long the drop takes
    [SerializeField] private float startYOffset = 150f; // How far above to start
    [SerializeField] private AnimationCurve dropCurve = null;// = AnimationCurve.EaseInOut(0, 0, 1, 1); // Easing

    private Vector2 targetPosition;
    private Vector2 startPosition;
    private float elapsedTime = 0f;
    private bool isAnimating = false;
    private bool reachPosition = false;

    public bool ReachPosition => reachPosition;

    private void Awake()
    {
        // A simple bounce curve
        dropCurve = new AnimationCurve(
            new Keyframe(0f, 0f),
            new Keyframe(0.6f, 1.1f),     // Overshoot
            new Keyframe(0.8f, 0.95f),    // Bounce back
            new Keyframe(1f, 1f)          // Settle
            );

        if (titleTransform == null)
        {
            titleTransform = GetComponent<RectTransform>();
        }

        // Remember the final resting position (set in the Inspector/Scene)
        targetPosition = titleTransform.anchoredPosition;

        // Move it up off-screen as the starting position
        startPosition = targetPosition + new Vector2(0, startYOffset);
        titleTransform.anchoredPosition = startPosition;
    }

    private void Start()
    {
        isAnimating = true;
    }

    private void Update()
    {
        if (!isAnimating) return;

        elapsedTime += Time.deltaTime;
        float t = Mathf.Clamp01(elapsedTime / dropDuration);

        // Apply easing curve
        float curveValue = dropCurve.Evaluate(t);

        // Lerp from start to target
        titleTransform.anchoredPosition = Vector2.Lerp(startPosition, targetPosition, curveValue);

        if(t >= 1f)
        {
            isAnimating = false;
            titleTransform.anchoredPosition = targetPosition;
            reachPosition = true;
        }

        reachPosition = false;
    }
}
