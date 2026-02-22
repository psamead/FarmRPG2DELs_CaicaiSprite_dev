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
    [SerializeField] private Image backgroundImage = null;

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
        // Hide Main Menu UI
        startButton.gameObject.SetActive(false);
        quitButton.gameObject.SetActive(false);
        if (backgroundImage != null) backgroundImage.gameObject.SetActive(false);

        // Play Intro Video
        if (introVideo != null && introVideo.clip != null)
        {
            isIntroPlaying = true;
            videoPanel.SetActive(true);
            introVideo.Play();
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
