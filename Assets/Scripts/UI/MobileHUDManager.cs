using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Handles all on-screen HUD button presses that replace the PC keyboard hotkeys.
/// </summary>
public class MobileHUDManager : SingletonMonobehavior<MobileHUDManager>
{
    [Header("References")]
    [Tooltip("Parent GameObject that holds the Joystick + all gameplay buttons EXCEPT the Pause button. " +
             "This will be hidden while the inventory/pause panel is open.")]
    [SerializeField] private GameObject gameplayControlsRoot = null;

    private CanvasGroup canvasGroup;
    private float idleTimer = 0f;
    private float fadeSpeed = 3f;
    private float timeBeforeFade = 1.5f;

    private bool isCutscenePlaying = false;
    private bool isPauseMenuOpen = false;

    protected override void Awake()
    {
        base.Awake();
        canvasGroup = GetComponent<CanvasGroup>();
        if (canvasGroup == null)
        {
            canvasGroup = gameObject.AddComponent<CanvasGroup>();
        }
    }

    private void Update()
    {
        // While pause menu is open or cutscene is playing, skip idle fade logic
        if (isPauseMenuOpen || isCutscenePlaying)
        {
            if (isCutscenePlaying)
            {
                canvasGroup.alpha = Mathf.MoveTowards(canvasGroup.alpha, 0f, Time.deltaTime * fadeSpeed * 2f);
                canvasGroup.blocksRaycasts = false;
            }
            return;
        }

        // Reset timer on any screen interaction
        if (Input.touchCount > 0 || Input.GetMouseButton(0))
        {
            idleTimer = 0f;
        }
        else
        {
            idleTimer += Time.deltaTime;
        }

        // If idle too long, fade out. Otherwise, fade in.
        float targetAlpha = (idleTimer > timeBeforeFade) ? 0f : 1f;

        canvasGroup.alpha = Mathf.MoveTowards(canvasGroup.alpha, targetAlpha, Time.deltaTime * fadeSpeed);

        // Allow clicking even if invisible so a tap wakes the HUD back up.
        canvasGroup.blocksRaycasts = true;
    }

    public void SetCutsceneVisibility(bool isPlaying)
    {
        isCutscenePlaying = isPlaying;
    }

    /// <summary>
    /// Called by UIManager when the pause/inventory panel opens or closes.
    /// Hides the gameplay controls (joystick + action buttons) while the panel is visible,
    /// leaving only the Pause button on screen.
    /// </summary>
    public void SetPauseMenuMode(bool isOpen)
    {
        isPauseMenuOpen = isOpen;

        if (gameplayControlsRoot != null)
        {
            gameplayControlsRoot.SetActive(!isOpen);
        }

        // When returning to gameplay, reset idle timer so HUD is immediately fully visible
        if (!isOpen)
        {
            idleTimer = 0f;
            canvasGroup.alpha = 1f;
            canvasGroup.blocksRaycasts = true;
        }
    }

    public void OnActionButtonPressed()
    {
        if (Player.Instance != null && !Player.Instance.PlayerInputIsDisabled)
        {
            Player.Instance.MobileUseToolAction();
        }
    }

    public void OnPauseButtonPressed()
    {
        if (UIManager.Instance != null)
        {
            UIManager.Instance.TogglePauseMenu();
        }
    }

    public void OnAdvanceMinuteButtonPressed()
    {
        if (TimeManager.Instance != null)
        {
            TimeManager.Instance.TestAdvanceGameMinute();
        }
    }

    public void OnAdvanceDayButtonPressed()
    {
        if (TimeManager.Instance != null)
        {
            TimeManager.Instance.TestAdvanceGameDay();
        }
    }
}
