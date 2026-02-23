using UnityEngine;

/// <summary>
/// Attach this to the "hat" child GameObject under the Player.
/// It controls the hat's visibility based on Player.HasHat.
/// Disables both the SpriteRenderer AND the Animator so the
/// Animator doesn't override the SpriteRenderer every frame.
/// </summary>
public class PlayerHat : MonoBehaviour
{
    private SpriteRenderer hatSpriteRenderer;
    private Animator hatAnimator;

    private void Awake()
    {
        hatSpriteRenderer = GetComponent<SpriteRenderer>();
        hatAnimator = GetComponent<Animator>();
    }

    private void Start()
    {
        // Apply the initial hat state
        UpdateHatVisibility(Player.Instance.HasHat);
    }

    /// <summary>
    /// Call this from Player.EquipHat() to show/hide the hat at runtime.
    /// </summary>
    public void UpdateHatVisibility(bool showHat)
    {
        if (hatSpriteRenderer != null)
        {
            hatSpriteRenderer.enabled = showHat;
        }

        if (hatAnimator != null)
        {
            hatAnimator.enabled = showHat;
        }
    }
}
