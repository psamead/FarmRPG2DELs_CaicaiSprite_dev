using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiyaAnimator : MonoBehaviour
{
    private Animator miyaAnimator;

    private void Awake()
    {
        // Get the Animator from the parent (Miya)
        miyaAnimator = GetComponentInParent<Animator>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Player") && miyaAnimator != null)
        {
            miyaAnimator.enabled = true;  // Switch from static to animated
        }
    }

    // Optional: stop animating when player walks away
    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.CompareTag("Player") && miyaAnimator != null)
        {
            miyaAnimator.enabled = false;  // Back to static sprite
        }
    }
}
