using System.Collections.Generic;
using UnityEngine;

public class PauseMenuInventoryManagement : MonoBehaviour
{
    [SerializeField] private PauseMenuInventoryManagementSlot[] inventoryManagementSlot = null;

    public GameObject inventoryManagementDraggedItemPrefab;

    [SerializeField] private Sprite transparent16x16 = null;

    [HideInInspector] public GameObject inventoryTextBoxGameobject;

    public int selectedSlotIndexForSwap = -1;

    private void OnEnable()
    {
        EventHandler.InventoryUpdatedEvent += PopulatePlayerInventory;

        // Populate player inventory
        if (InventoryManager.Instance != null)
        {
            PopulatePlayerInventory(InventoryLocation.player, InventoryManager.Instance.inventoryLists[(int)InventoryLocation.player]);
        }
    }

    private void OnDisable()
    {
        EventHandler.InventoryUpdatedEvent -= PopulatePlayerInventory;

        DestroyInventoryTextBoxGameobject();
        selectedSlotIndexForSwap = -1;
    }

    public void DestroyInventoryTextBoxGameobject()
    {
        // Destroy inventory text box if created
        if (inventoryTextBoxGameobject != null)
        {
            Destroy(inventoryTextBoxGameobject);
        }
    }

    public void DestroyCurrentlyDraggedItems()
    {
        // Dragging has been removed from the Pause Menu for mobile port.
        // Method retained to avoid breaking UIManager.cs callbacks.
    }

    private void PopulatePlayerInventory(InventoryLocation inventoryLocation, List<InventoryItem> playerInventoryList)
    {
        if (inventoryLocation == InventoryLocation.player)
        {
            InitializeInventoryManagementSlots();

            // loop through all player inventory items
            for (int i = 0; i < InventoryManager.Instance.inventoryLists[(int)InventoryLocation.player].Count; i++)
            {
                // Get inventory item details
                inventoryManagementSlot[i].itemDetails = InventoryManager.Instance.GetItemDetails(playerInventoryList[i].itemCode);
                inventoryManagementSlot[i].itemQuantity = playerInventoryList[i].itemQuantity;

                if (inventoryManagementSlot[i].itemDetails != null)
                {
                    // update inventory management slot with image and quantity
                    inventoryManagementSlot[i].inventoryManagementSlotImage.sprite = inventoryManagementSlot[i].itemDetails.itemSprite;
                    inventoryManagementSlot[i].textMeshProUGUI.text = inventoryManagementSlot[i].itemQuantity.ToString();
                }
            }
        }
    }

    private void InitializeInventoryManagementSlots()
    {
        // Clear inventory slots
        for (int i = 0; i < Settings.playerMaximumInventoryCapacity; i++)
        {
            inventoryManagementSlot[i].greyedOutImageGO.SetActive(false);
            inventoryManagementSlot[i].itemDetails = null;
            inventoryManagementSlot[i].itemQuantity = 0;
            inventoryManagementSlot[i].inventoryManagementSlotImage.sprite = transparent16x16;
            inventoryManagementSlot[i].inventoryManagementSlotImage.color = Color.white;
            inventoryManagementSlot[i].textMeshProUGUI.text = "";
        }

        // Grey out unavailable slots
        for (int i = InventoryManager.Instance.inventoryListCapacityIntArray[(int)InventoryLocation.player]; i < Settings.playerMaximumInventoryCapacity; i++)
        {
            inventoryManagementSlot[i].greyedOutImageGO.SetActive(true);
        }
    }
}
