using UnityEngine;
using UnityEngine.Video;

/// <summary>
/// Attach this to the Miya NPC GameObject in Scene3_Cabin.
/// When the player enters Miya's body trigger collider, a cutscene video plays.
/// After the video ends (or is skipped), the player receives the cat hat and Miya disappears.
/// If the player already has the hat, Miya is deactivated at Start() so this never fires.
/// 
/// Setup:
/// 1. Attach this script to the Miya GameObject
/// 2. Ensure Miya has a BoxCollider2D with "Is Trigger" checked
/// 3. Assign the Meet Miya video clip in the Inspector
/// 4. The Player must have a Rigidbody2D and Collider2D (it already does)
/// 5. CutsceneVideoPlayer must exist on the PersistentScene
/// </summary>
public class MiyaNPCInteraction : MonoBehaviour
{
    [SerializeField] private string _playerTag = "Player";
    public string PlayerTag { get => _playerTag; }

    [Header("Cutscene")]
    [SerializeField] private VideoClip meetMiyaVideoClip = null;

    [Header("Background Music")]
    [SerializeField] private AudioClip meetMiyaBgmClip = null;

    private bool transformToHat = false;

    private void Start()
    {
        if (Player.Instance != null && Player.Instance.HasHat)
        {
            gameObject.SetActive(false);
        }
    }

    // Handles the actual collision = player touches Miya -> play cutscene -> transforms to hat
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (transformToHat) return;

        if (other.CompareTag(_playerTag))
        {
            Player player = other.GetComponent<Player>();

            if (player != null && !player.HasHat)
            {
                transformToHat = true;

                // Play cutscene first, then equip hat when video ends
                if (meetMiyaVideoClip != null && CutsceneVideoPlayer.Instance != null)
                {
                    CutsceneVideoPlayer.Instance.PlayCutscene(meetMiyaVideoClip, () =>
                    {
                        player.EquipHat();
                        gameObject.SetActive(false);  // Miya becomes the hat!
                    }, meetMiyaBgmClip);
                }
                else
                {
                    // Fallback: no video assigned, equip immediately
                    player.EquipHat();
                    gameObject.SetActive(false);
                }
            }
        }
    }
}
