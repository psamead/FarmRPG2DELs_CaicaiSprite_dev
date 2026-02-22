using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Video;
using UnityEngine.EventSystems;
using System.Collections;

public class MainMenuUI : MonoBehaviour
{
    [SerializeField] private Button startButton = null;
    [SerializeField] private Button quitButton = null;

    [SerializeField] private GameObject videoPanel = null;
    [SerializeField] private VideoPlayer introVideo = null;

    [SerializeField] private Image backgroundFrame = null;
    //[SerializeField] private Image backgroundImage = null;
    [SerializeField] private RawImage backgroundImage = null;
    [SerializeField] private VideoPlayer menuBackgroundVideo = null;  // The looping background video player
    
    [SerializeField] private AudioSource menuMusic = null;             // Background music for the menu
    [SerializeField] private AudioSource storyIntroMusic = null;            // Music during the intro/story video

    [SerializeField] private GameObject TitleText = null;

    [SerializeField] private TitleDropAnimation titleDropAnimation = null;
    [SerializeField] private CanvasGroup buttonsGroup = null;    // Wrap buttons in a CanvasGroup



    private bool isIntroPlaying = false;

    private void Start()
    {
        // Hide buttons initially
        buttonsGroup.alpha = 0f;
        buttonsGroup.interactable = false;

        startButton.onClick.AddListener(StartGame);
        quitButton.onClick.AddListener(QuitGame);

        EventSystem.current.SetSelectedGameObject(startButton.gameObject);

        videoPanel.SetActive(false);

        if (introVideo != null)
        {
            introVideo.loopPointReached += OnVideoEnd;
        }

        // Start a coroutine to show buttons after title drops
        StartCoroutine(ShowButtonsAfterDelay(titleDropAnimation.dropDuration + 0.2f));
    }

    private void Update()
    {
        if (isIntroPlaying)
        {
            // Skip video on any key press
            if (Input.anyKeyDown)
            {
                LoadGame();
            }
        }
    }

    private void StartGame()
    {
        // Stop button fade-in coroutine if still running
        StopAllCoroutines();

        // Stop menu music
        if (menuMusic != null)
        {
            menuMusic.Stop();
        }

        // Hide Main Menu UI
        titleDropAnimation.gameObject.SetActive(false);
        buttonsGroup.gameObject.SetActive(false);
        TitleText.gameObject.SetActive(false);


        // Stop and hide the menu background video
        if (menuBackgroundVideo != null)
        {
            menuBackgroundVideo.Stop();
        }
        if (backgroundImage != null)
        {
            backgroundImage.gameObject.SetActive(false);
        }
        backgroundFrame.gameObject.SetActive(false);

        // Play Intro Video
        if (introVideo != null && introVideo.clip != null)
        {
            isIntroPlaying = true;
            videoPanel.SetActive(true);
            introVideo.Play();

            // Play intro/story music
            if (storyIntroMusic != null)
            {
                storyIntroMusic.Play();
            }
        }
        else
        {
            // If no video assigned, jump straight to game
            LoadGame();
        }
    }

    private void OnVideoEnd(VideoPlayer vp)
    {
        LoadGame();
    }

    /// <summary>
    /// Loads the PersistentScene which will then bootstrap the game
    /// via SceneControllerManager's Start() method (loading the starting scene, etc.)
    /// </summary>
    private void LoadGame()
    {
        isIntroPlaying = false;
        introVideo.Stop();

        // Stop intro music
        if (storyIntroMusic != null)
        {
            storyIntroMusic.Stop();
        }

        SceneManager.LoadScene(Settings.PersistentScene);
    }

    private void QuitGame()
    {
        Application.Quit();
    }

    private IEnumerator ShowButtonsAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);

        float fadeDuration = 0.5f;
        float elapsed = 0f;
        while (elapsed < fadeDuration)
        {
            elapsed += Time.deltaTime;
            buttonsGroup.alpha = Mathf.Clamp01(elapsed / fadeDuration);
            yield return null;
        }

        buttonsGroup.alpha = 1f;
        buttonsGroup.interactable = true;
        EventSystem.current.SetSelectedGameObject(startButton.gameObject);
    }
}
