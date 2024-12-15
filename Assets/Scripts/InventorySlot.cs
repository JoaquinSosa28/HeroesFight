using System.Net.NetworkInformation;
using Mirror;
using UnityEngine;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour
{
    Item item;

    public int invSlot;
    public Image icon;
    public Button removeButton;

    public void AddItem(int invSlot, Item newItem){
        //So when ever you add an item you tell this slot which slot it is
        this.invSlot = invSlot;
        item = newItem;

        //TODO CHANGE TO SOMETHING MORE PERFORMANT
        icon.sprite = Resources.Load<Sprite>("ItemsIcons/" + item.itemIcon);
        icon.enabled = true;
        removeButton.interactable = true;
    }

    public void ClearSlot(){
        item = null;
        
        icon.sprite = null;
        icon.enabled = false;
        removeButton.interactable = false;
    }

    public void OnRemoveButton(){
        Inventory.instance.RemoveItem(item);
    }

    //This is called by a button
    //TODO: Change so there's a sub menu to select wich hand to equip it to
    public void UseItem(){
        if(item != null){
            item.Use(invSlot, EquipmentSlot.LeftHand);
        }
    }
}
