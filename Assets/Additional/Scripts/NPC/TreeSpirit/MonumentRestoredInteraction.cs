using UnityEngine;
using UnityEngine.Video;

/// <summary>
/// Attach this script to Monument_Complete.prefab.
/// Requires a trigger collider. Let's make sure to add one if it doesn't already exist.
/// </summary>
public class MonumentRestoredInteraction : MonoBehaviour
{
    [SerializeField] private string _playerTag = "Player";
    
    [Header("Cutscene Configuration")]
    public VideoClip meetTreeSpiritVideoClip;
    public AudioClip meetTreeSpiritBgmClip;

    private bool isCutsceneStarted = false;

    private void Awake()
    {
        // In the FarmRPG project, crops usually have a BoxCollider2D on a child object like CropHarvestedSprite.
        // Let's find all colliders in children to accurately check state.
        Collider2D[] colliders = GetComponentsInChildren<Collider2D>();
        bool hasTrigger = false;
        bool hasSolid = false;
        Collider2D existingTrigger = null;

        foreach (var c in colliders)
        {
            if (c.isTrigger) 
            {
                hasTrigger = true;
                existingTrigger = c;
            }
            else 
            {
                hasSolid = true;
            }
        }

        // If it only has an isTrigger collider, it's likely the one on CropHarvestedSprite which we WANT to be solid.
        if (hasTrigger && !hasSolid && existingTrigger != null && existingTrigger.gameObject.name == "CropHarvestedSprite")
        {
            // Convert it to solid so the player respects the graphical boundaries
            existingTrigger.isTrigger = false;
            hasSolid = true;
            hasTrigger = false; // We just stole the trigger, so we'll need to create a new one for interaction
        }

        if (!hasTrigger)
        {
            // Add an interaction trigger to the root object
            BoxCollider2D triggerCol = gameObject.AddComponent<BoxCollider2D>();
            triggerCol.isTrigger = true;
            triggerCol.size = new Vector2(3f, 3f); // Provide a generous interaction zone around the visual center
        }
    }

    private void Start()
    {
        // Disable this script if the player already met the tree spirit, so it won't check colliders
        if (Player.Instance != null && Player.Instance.HasMetTreeSpirit)
        {
            this.enabled = false;
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (isCutsceneStarted) return;
        
        // Fast-fail if not the player or player already met the spirit
        if (Player.Instance == null || Player.Instance.HasMetTreeSpirit) return;

        if (other.CompareTag(_playerTag))
        {
            isCutsceneStarted = true;

            if (meetTreeSpiritVideoClip != null && CutsceneVideoPlayer.Instance != null)
            {
                CutsceneVideoPlayer.Instance.PlayCutscene(meetTreeSpiritVideoClip, OnVideoCompleted, meetTreeSpiritBgmClip);
            }
            else
            {
                Debug.LogWarning("Missing video clip or CutsceneVideoPlayer instance. Proceeding to unlock Tree Spirit.");
                // Fallback mechanism to ensure the user gets the character
                OnVideoCompleted();
            }
        }
    }

    private void OnVideoCompleted()
    {
        // Save the event inside the Player state
        Player.Instance.MeetTreeSpirit();

        // Enable character
        TreeSpiritManager[] spiritManagers = FindObjectsOfType<TreeSpiritManager>(true);
        foreach (var manager in spiritManagers)
        {
            manager.ShowAndSetup();
        }

        // Disable this check indefinitely for this session
        this.enabled = false;
    }
}
