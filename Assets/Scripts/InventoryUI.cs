using UnityEngine;

public class InventoryUI : MonoBehaviour {

    public Transform itemsParent;

    InventorySlot[] slots;

    Inventory inventoryInstance;

    string msg;

    void Start() {
        msg = ("Start at: " + Time.realtimeSinceStartup);
        Invoke(nameof(PrintStart), 0.2f);

        Invoke(nameof(DelayedStart), 0.15f);
    }

    private void DelayedStart() {
        inventoryInstance = Inventory.instance;
        inventoryInstance.onItemChangedCallback += UpdateUI;

        slots = itemsParent.GetComponentsInChildren<InventorySlot>();
    }

    void PrintStart() {
        Debug.Log(msg);
    }

    private void UpdateUI() {
        //Every time a slot changes update the UI
        //Loop through every slot
        for (int i = 0; i < slots.Length; i++) {
            //If i is less than the inv count it means that there're item to update
            //If the i is less than the inv count it means that there's nothing left, just clear the slot
            if (i < inventoryInstance.inventory.Count) {
                //Add the item to the slot
                slots[i].AddItem(i, inventoryInstance.inventory[i]);
            } else {
                slots[i].ClearSlot();
            }
        }
    }
}
