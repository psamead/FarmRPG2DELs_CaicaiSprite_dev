using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

/// <summary>
/// Reusable singleton manager for playing in-game video cutscenes.
/// Lives on the PersistentScene.
///
/// IMPORTANT: This script must be on an ALWAYS-ACTIVE GameObject (not on the panel itself),
/// because the panel starts inactive and Awake() would never run.
///
/// Setup:
/// 1. Create an empty GameObject under MainGameUICanvas called "CutsceneManager" (keep it ACTIVE)
/// 2. Attach this script to "CutsceneManager"
/// 3. Create a child GameObject called "CutsceneVideoPanel" (start it INACTIVE)
/// 4. On "CutsceneVideoPanel": add an Image (black, alpha 50%), stretch to fill
/// 5. Under "CutsceneVideoPanel": add a RawImage child for the video display
/// 6. Add a VideoPlayer component on "CutsceneVideoPanel"
/// 7. Create a RenderTexture, assign it to both VideoPlayer Target Texture and the RawImage Texture
/// 8. Wire the references on this script: cutscenePanel, videoRawImage, videoPlayer
/// </summary>
public class CutsceneVideoPlayer : MonoBehaviour
{
    public static CutsceneVideoPlayer Instance { get; private set; }

    [Header("UI References")]
    [SerializeField] private GameObject cutscenePanel = null;
    [SerializeField] private RawImage videoRawImage = null;

    [Header("Video")]
    [SerializeField] private VideoPlayer videoPlayer = null;

    [Header("Audio (optional – added at runtime if missing)")]
    [SerializeField] private AudioSource bgmAudioSource = null;

    private Action onCompleteCallback;
    private bool isPlaying = false;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;

        // Enforce full-stretch on the Manager itself in case it was created as a default 100x100 square
        RectTransform myRT = GetComponent<RectTransform>();
        if (myRT != null)
        {
            myRT.anchorMin = Vector2.zero;
            myRT.anchorMax = Vector2.one;
            myRT.offsetMin = Vector2.zero;
            myRT.offsetMax = Vector2.zero;
        }

        // Ensure the panel starts hidden and enforce full-stretch anchors for Android
        if (cutscenePanel != null)
        {
            cutscenePanel.SetActive(false);
            
            RectTransform panelRT = cutscenePanel.GetComponent<RectTransform>();
            if (panelRT != null)
            {
                panelRT.anchorMin = Vector2.zero;
                panelRT.anchorMax = Vector2.one;
                panelRT.offsetMin = Vector2.zero;
                panelRT.offsetMax = Vector2.zero;
            }
        }

        // Enforce stretch on RawImage as well to guarantee full screen playback
        if (videoRawImage != null)
        {
            RectTransform rawRT = videoRawImage.GetComponent<RectTransform>();
            if (rawRT != null)
            {
                rawRT.anchorMin = Vector2.zero;
                rawRT.anchorMax = Vector2.one;
                rawRT.offsetMin = Vector2.zero;
                rawRT.offsetMax = Vector2.zero;
            }
        }

        // Ensure we have an AudioSource for BGM
        if (bgmAudioSource == null)
        {
            bgmAudioSource = GetComponent<AudioSource>();
            if (bgmAudioSource == null)
            {
                bgmAudioSource = gameObject.AddComponent<AudioSource>();
            }
        }
        bgmAudioSource.playOnAwake = false;
        bgmAudioSource.loop = false;
    }

    private void Update()
    {
        if (isPlaying && Input.anyKeyDown)
        {
            StopCutscene();
        }
    }

    /// <summary>
    /// Play a video cutscene. Player input is disabled during playback.
    /// Press any key to skip. When the video ends or is skipped, onComplete is invoked.
    /// </summary>
    /// <param name="clip">The VideoClip to play</param>
    /// <param name="onComplete">Callback invoked after the video ends or is skipped</param>
    /// <param name="bgmClip">Optional background music AudioClip to play during the cutscene</param>
    public void PlayCutscene(VideoClip clip, Action onComplete = null, AudioClip bgmClip = null)
    {
        if (clip == null)
        {
            Debug.LogWarning("CutsceneVideoPlayer: No video clip provided.");
            onComplete?.Invoke();
            return;
        }

        onCompleteCallback = onComplete;
        isPlaying = true;

        // Disable player input and stop movement/animation (prevents footstep sounds)
        if (Player.Instance != null)
        {
            Player.Instance.DisablePlayerInputAndResetMovement();
        }

        // Setup and show
        videoPlayer.clip = clip;
        videoPlayer.loopPointReached += OnVideoEnd;
        cutscenePanel.SetActive(true);

        if (videoPlayer.targetTexture != null)
        {
            videoPlayer.targetTexture.Release();
        }

        videoPlayer.Play();

        // Hide Mobile HUD if it exists
        if (MobileHUDManager.Instance != null)
        {
            MobileHUDManager.Instance.SetCutsceneVisibility(true);
        }

        // Play optional background music
        if (bgmClip != null && bgmAudioSource != null)
        {
            bgmAudioSource.clip = bgmClip;
            bgmAudioSource.Play();
        }
    }

    private void OnVideoEnd(VideoPlayer vp)
    {
        StopCutscene();
    }

    private void StopCutscene()
    {
        if (!isPlaying) return;
        isPlaying = false;

        videoPlayer.Stop();
        videoPlayer.loopPointReached -= OnVideoEnd;
        cutscenePanel.SetActive(false);

        // Stop background music
        if (bgmAudioSource != null && bgmAudioSource.isPlaying)
        {
            bgmAudioSource.Stop();
            bgmAudioSource.clip = null;
        }

        // Re-enable player input
        if (Player.Instance != null)
        {
            Player.Instance.PlayerInputIsDisabled = false;
        }

        // Un-hide Mobile HUD if it exists
        if (MobileHUDManager.Instance != null)
        {
            MobileHUDManager.Instance.SetCutsceneVisibility(false);
        }

        // Fire callback (e.g. Miya hat transformation)
        onCompleteCallback?.Invoke();
        onCompleteCallback = null;
    }
}

