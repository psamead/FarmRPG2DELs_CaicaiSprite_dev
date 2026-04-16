using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class PauseMenuInventoryManagementSlot : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
{
    public Image inventoryManagementSlotImage;
    public TextMeshProUGUI textMeshProUGUI;
    public GameObject greyedOutImageGO;
    [SerializeField] private PauseMenuInventoryManagement inventoryManagement = null;
    [SerializeField] private GameObject inventoryTextBoxPrefab = null;

    [HideInInspector] public ItemDetails itemDetails;
    [HideInInspector] public int itemQuantity;
    [SerializeField] private int slotNumber = 0;

    private Canvas parentCanvas;

    private void Awake()
    {
        parentCanvas = GetComponentInParent<Canvas>();
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            if (inventoryManagement.selectedSlotIndexForSwap == -1) 
            {
                // Select this slot for swapping if it's not empty
                if (itemQuantity != 0) 
                {
                    inventoryManagement.selectedSlotIndexForSwap = slotNumber;
                    // Darken image to indicate selection
                    inventoryManagementSlotImage.color = new Color(0.5f, 0.5f, 0.5f, 1f); 
                }
            }
            else 
            {
                // We already have a selected slot. If it's this exact slot, deselect!
                if (inventoryManagement.selectedSlotIndexForSwap == slotNumber)
                {
                    inventoryManagement.selectedSlotIndexForSwap = -1;
                    inventoryManagementSlotImage.color = Color.white;
                }
                else
                {
                    // Swap! The PopulatePlayerInventory will naturally clear the color tint when it rebuilds slots
                    InventoryManager.Instance.SwapInventoryItems(InventoryLocation.player, inventoryManagement.selectedSlotIndexForSwap, slotNumber);
                    inventoryManagement.selectedSlotIndexForSwap = -1;
                    
                    inventoryManagement.DestroyInventoryTextBoxGameobject();
                }
            }
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        // Populate text box with item details
        if (itemQuantity != 0)
        {
            // Safeguard: Destroy any currently floating textbox before instantiating a new one
            inventoryManagement.DestroyInventoryTextBoxGameobject();

            // Instantiate inventory text box
            inventoryManagement.inventoryTextBoxGameobject = Instantiate(inventoryTextBoxPrefab, transform.position, Quaternion.identity);
            inventoryManagement.inventoryTextBoxGameobject.transform.SetParent(parentCanvas.transform, false);

            UIInventoryTextBox inventoryTextBox = inventoryManagement.inventoryTextBoxGameobject.GetComponent<UIInventoryTextBox>();

            // Set item type description
            string itemTypeDescription = InventoryManager.Instance.GetItemTypeDescription(itemDetails.itemType);

            // Populate text box
            inventoryTextBox.SetTextboxText(itemDetails.itemDescription, itemTypeDescription, "", itemDetails.itemLongDescription, "", "");

            // Set text box position
            if (slotNumber > 23)
            {
                inventoryManagement.inventoryTextBoxGameobject.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0f);
                inventoryManagement.inventoryTextBoxGameobject.transform.position = new Vector3(transform.position.x, transform.position.y + 50f, transform.position.z);
            }
            else 
            {
                inventoryManagement.inventoryTextBoxGameobject.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 1f);
                inventoryManagement.inventoryTextBoxGameobject.transform.position = new Vector3(transform.position.x, transform.position.y - 50f, transform.position.z);
            }        
        }    
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        inventoryManagement.DestroyInventoryTextBoxGameobject();    
    }
}
