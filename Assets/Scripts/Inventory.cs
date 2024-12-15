using System.ComponentModel;
using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class Inventory : MonoBehaviour {

    #region Singleton
    public static Inventory instance;

    string msg;

    private void Awake() {
        msg = ("Awake at: " + Time.realtimeSinceStartup);
        Invoke(nameof(PrintAwake), 0.2f);
        if (instance == null)
            instance = this;
    }

    void PrintAwake() {
        Debug.Log(msg);
    }
    #endregion

    #region Delegates
    public delegate void OnItemChanged();
    public OnItemChanged onItemChangedCallback;

    public delegate void OnItemEquippedChanged(EquipmentSlot equipmentSlot, Item newItem);
    public OnItemEquippedChanged onItemEquipped;
    #endregion

    public GameObject inventoryUIGO;

    private int maxInventorySize = 20;
    public List<Item> inventory = new List<Item>();
    //public Dictionary<uint, Item> inventory = new Dictionary<uint, Item>();


    private Item[] equippedItems = new Item[6];


    //This should be called every time someone join the server, the inventory should be downloaded from the database
    public void CreateInventory(List<Item> inv) {
        inventory = inv;
    }

    //When the user adds an item to it's inventory
    //This method also should update the database
    public bool AddItem(Item item) {
        //If your inventory is not full
        if (inventory.Count < maxInventorySize) {
            inventory.Add(item);

            #region WHEN I NEED TO USE DICTONIARIES
            /* //Loop through all the slots, the first one that is empty will be filled with the item
            foreach (uint slot in inventory.Keys) {
                if (inventory[slot] == null) {
                    inventory[slot] = item;
                }
            } */
            #endregion

            //Invoke callback to update UI
            onItemChangedCallback?.Invoke();
            return true;
        }
        return false;
    }

    //Everytime a player destroys, sell, or however remove an item
    //Should update to the database
    public void RemoveItem(Item item) {
        inventory.Remove(item);
        onItemChangedCallback?.Invoke();
    }

    public void EquipItem(int invSlot, EquipmentSlot equipmentSlot) {
        //If the slot is empty
        if (!inventory[invSlot]) return;

        //Get the previous equipped item, if there's nothing then it's null
        Debug.Log((int)equipmentSlot + " size of " + equippedItems.Length);
        Item oldEquippedItem = equippedItems[(int)equipmentSlot];
        //Get the new equipped item from the inv
        Item newEquippedItem = inventory[invSlot];
        //Equip item
        equippedItems[(int)equipmentSlot] = newEquippedItem;

        //Remove the item you just added
        RemoveItem(newEquippedItem);
        //Add the item you had equipped before
        if (oldEquippedItem)
            AddItem(oldEquippedItem);

        onItemEquipped?.Invoke(equipmentSlot, newEquippedItem);
    }

    public void UnEquipItem(EquipmentSlot equipmentSlot) {
        //If the slot is empty
        if (!equippedItems[(int)equipmentSlot]) return;

        //The item you want to unequip
        Item equippedItem = equippedItems[(int)equipmentSlot];
        //Remove item from equipment
        equippedItems[(int)equipmentSlot] = null;

        //Add item to inventory
        AddItem(equippedItem);

        onItemEquipped?.Invoke(equipmentSlot, null);
    }

    public bool ToggleInventory() {
        inventoryUIGO.SetActive(!inventoryUIGO.activeSelf);
        return inventoryUIGO.activeSelf;
    }

    public void DisableInventory() {
        inventoryUIGO.SetActive(false);
    }
}

public enum EquipmentSlot : int {
    LeftHand,
    RightHand,
    Head,
    Chest,
    Legs,
    Feet
}
