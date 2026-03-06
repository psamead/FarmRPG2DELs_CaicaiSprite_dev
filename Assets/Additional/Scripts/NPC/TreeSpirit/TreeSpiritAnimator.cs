using UnityEngine;

public class TreeSpiritAnimator : MonoBehaviour
{
    [SerializeField] private string playerTag = "Player";
    private Animator treeSpiritAnimator;

    private void Awake()
    {
        // Get the Animator from the parent (TreeSpirit)
        treeSpiritAnimator = GetComponentInParent<Animator>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(playerTag) && treeSpiritAnimator != null)
        {
            treeSpiritAnimator.enabled = true;  // Swith from static to animated
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.CompareTag(playerTag) && treeSpiritAnimator != null)
        {
            treeSpiritAnimator.enabled = false;  // Back to static sprite
        }
    }



}
