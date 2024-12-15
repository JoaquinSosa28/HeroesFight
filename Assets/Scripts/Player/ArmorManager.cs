using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

[System.Serializable()]
public class DictionaryArmorSlotAndGameObject : SerializableDictionaryBase<ArmorSlot, GameObject>
{
}

public class ArmorManager : NetworkBehaviour
{
    [SerializeField] SkinnedMeshRenderer targetMesh;
    [SerializeField] Transform armorParent;

    private Inventory _invInstance;
    private ItemManager _itemManager;

    private readonly DictionaryArmorSlotAndGameObject _equipment = new DictionaryArmorSlotAndGameObject();

    //The base game object where the armor info is going to be put
    [SerializeField] GameObject baseItemPrefab;

    private void Start()
    {
        //Init item manager
        _itemManager = ItemManager.instance;

        //Default all the slots to null
        _equipment[ArmorSlot.Head] = null;
        _equipment[ArmorSlot.Chest] = null;
        _equipment[ArmorSlot.Legs] = null;
        _equipment[ArmorSlot.Feet] = null;
    }

    public override void OnStartAuthority()
    {
        //Init the inventory only in the client
        _invInstance = Inventory.instance;

        //Subscribe to the delegate
        _invInstance.onItemEquipped += EquipItem;
    }

    [Client]
    private void EquipItem(EquipmentSlot slot, Item newItem)
    {
        //We only want to handle the armor types of items
        if (newItem && newItem.type != ItemType.Armor) return;

        //This means that it was only an unequip
        if (newItem == null)
        {
            CmdUnEquipArmor(slot);
        }
        else
        {
            CmdEquipArmorServer(slot, newItem);
        }
    }

    [Command]
    private void CmdEquipArmorServer(EquipmentSlot slot, Item newItem)
    {
        //If the new item doesn't have an armor equipment variable then you can't work with it
        ArmorEquipment armorEquipment;
        if (!(armorEquipment = newItem.armorEquipment)) return;

        //Spawn the base prefab in the server to now fill it with info
        GameObject equippedGO = Instantiate(baseItemPrefab, armorParent);

        ArmorEquipmentBehaviour armorBehaviour = equippedGO.GetComponent<ArmorEquipmentBehaviour>();
        //Set the armor equipment so it can calculate the damage reduction later
        armorBehaviour.SetArmor(armorEquipment);

        RpcEquipArmorClients(slot, newItem);
        ReplacePreviousArmor(slot, equippedGO);
    }

    [ClientRpc]
    private void RpcEquipArmorClients(EquipmentSlot slot, Item newItem)
    {
        GameObject itemModel = GetArmorModel(newItem.id);

        GameObject equippedGO = Instantiate(baseItemPrefab, armorParent);

        ArmorEquipmentBehaviour armorBehaviour = equippedGO.GetComponent<ArmorEquipmentBehaviour>();

        //Spawn the armor model in the clients, also setup the meshes bones so it moves correctly
        //Get the armor moving with the player and get the bones connected
        armorBehaviour.SpawnModel(itemModel);
        armorBehaviour.SetupMesh(targetMesh);
        
        //Also change blend shapes
        SetEquipmentBlendShapes(newItem, 100);

        ReplacePreviousArmor(slot, equippedGO);
    }

    [Command]
    private void CmdUnEquipArmor(EquipmentSlot slot)
    {
        //Remove the mesh from the server
        ReplacePreviousArmor(slot, null);

        //Remove the mesh from the clients
        RpcUnEquipItem(slot);
    }

    [Client]
    private void RpcUnEquipItem(EquipmentSlot equipmentSlot)
    {
        ReplacePreviousArmor(equipmentSlot, null);
    }

    private void ReplacePreviousArmor(EquipmentSlot equipmentSlot, GameObject newArmor)
    {
        ArmorSlot armorSlot = EquipmentSlotToArmorSlot(equipmentSlot);
        if (armorSlot == ArmorSlot.Error) return;

        if (_equipment[armorSlot])
        {
            //Straight up destroy the game object, for now the armor doesn't use any other extra objects that need to be removed too
            Destroy(_equipment[armorSlot]);
        }

        //Now replace the dictionary with the new armor, either it be null or an actual object
        _equipment[armorSlot] = newArmor;
    }

    private void SetEquipmentBlendShapes(Item item, int weight)
    {
        if (item.coveredMeshRegions.Length != 0)
            foreach (EquipmentMeshRegion blendShape in item.coveredMeshRegions)
            {
                targetMesh.SetBlendShapeWeight((int) blendShape, weight);
            }
    }

    private ArmorSlot EquipmentSlotToArmorSlot(EquipmentSlot slot)
    {
        switch (slot)
        {
            case EquipmentSlot.Head:
                return ArmorSlot.Head;
            case EquipmentSlot.Chest:
                return ArmorSlot.Chest;
            case EquipmentSlot.Legs:
                return ArmorSlot.Legs;
            case EquipmentSlot.Feet:
                return ArmorSlot.Feet;
            default:
                return ArmorSlot.Error;
        }
    }

    private GameObject GetArmorModel(ItemId itemId)
    {
        return _itemManager.itemsModels[itemId];
    }
}

public enum ArmorSlot
{
    Head,
    Chest,
    Legs,
    Feet,
    Error
};