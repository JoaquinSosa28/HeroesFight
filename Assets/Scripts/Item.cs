using Mirror;
using UnityEngine;

[CreateAssetMenu(fileName = "Item", menuName = "HeroesFight/Item", order = 0)]
public class Item : ScriptableObject {
    public ItemId id;
    public new string name;
    public ItemType type;
    public string itemIcon;
    public MeleeWeapon meleeWeaponInfo; //TODO: THINK JOAQUIN THINK, make something better than this empty variable 
    public DistanceWeapon distanceWeaponInfo;
    public ArmorEquipment armorEquipment;
    public EquipmentMeshRegion[] coveredMeshRegions = new EquipmentMeshRegion[0];
    // public SkinnedMeshRenderer skinnedMeshRenderer; 

    public virtual void Use(int invSlot, EquipmentSlot hand) {
        Inventory inv = Inventory.instance;

        switch (id) {
            case ItemId.BasicHelmet:
                inv.EquipItem(invSlot, EquipmentSlot.Head);
                break;
            case ItemId.BasicChestplate:
                inv.EquipItem(invSlot, EquipmentSlot.Chest);
                break;
            case ItemId.BasicPlatelegs:
                inv.EquipItem(invSlot, EquipmentSlot.Legs);
                break;
            default:
                inv.EquipItem(invSlot, EquipmentSlot.LeftHand);
                break;
        }

        Debug.Log("Using " + name);
    }
}

public enum EquipmentMeshRegion { Legs, Chest, Arms };