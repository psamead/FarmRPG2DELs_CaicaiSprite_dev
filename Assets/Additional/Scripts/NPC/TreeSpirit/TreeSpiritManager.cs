using UnityEngine;

/// <summary>
/// Attach this script to Character_TreeSpirit in Scene2_Field.
/// </summary>
public class TreeSpiritManager : MonoBehaviour
{
    private void Start()
    {
        // Initially, the Character_TreeSpirit should only be visible if they've met the tree spirit.
        // It's possible to deactivate the entire game object or just the SpriteRenderer/Colliders.
        // We will deactivate the whole gameObject for a clean state.
        
        if (Player.Instance != null)
        {
            if (!Player.Instance.HasMetTreeSpirit)
            {
                gameObject.SetActive(false);
            }
        }
        else
        {
            // Safety precaution: hide if no player is found just in case.
            gameObject.SetActive(false);
        }
    }

    /// <summary>
    /// Will be called by MonumentRestoredInteraction when the cinematic completes
    /// </summary>
    public void ShowAndSetup()
    {
        gameObject.SetActive(true);
        
        // At this point, the tree spirit is just appearing, 
        // which meets the goal: "Just the character appearance is enough for current stage"
    }
}
