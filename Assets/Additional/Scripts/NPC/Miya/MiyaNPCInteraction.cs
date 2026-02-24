using UnityEngine;

/// <summary>
/// Attach this to the Miya NPC GameObject in Scene3_Cabin.
/// When the player enters Miya's trigger collider, the player receives the cat hat.
/// 
/// Setup:
/// 1. Attach this script to the Miya GameObject
/// 2. Ensure Miya has a BoxCollider2D with "Is Trigger" checked
/// 3. The Player must have a Rigidbody2D and Collider2D (it already does)
/// </summary>
public class MiyaNPCInteraction : MonoBehaviour
{
    [SerializeField] private string playerTag = "Player";

    private bool transformToHat = false;

    private void Start()
    {
        if (Player.Instance != null && Player.Instance.HasHat)
        {
            gameObject.SetActive(false);
        }
    }

    // Handles the actual collision = player touches Miya ¡ú transforms to hat
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (transformToHat) return;

        if (other.CompareTag(playerTag))
        {
            Player player = other.GetComponent<Player>();

            if (player != null && !player.HasHat)
            {
                player.EquipHat();
                transformToHat = true;
                
                gameObject.SetActive(false);  // Miya becomes the hat!
            }
        }
    }
}
