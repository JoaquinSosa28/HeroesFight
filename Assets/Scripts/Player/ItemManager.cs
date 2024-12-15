using UnityEngine;

[System.Serializable()]
public class DictionaryUintAndGameObject : SerializableDictionaryBase<ItemId, GameObject> { }

[System.Serializable()]
public class DictionaryUintAndItem : SerializableDictionaryBase<ItemId, Item> { }

public class ItemManager : MonoBehaviour {

    #region Singleton
    public static ItemManager instance;
    private void Awake() {
        if (instance == null)
            instance = this;
    }

    #endregion

    public GameObject localInventory;

    //You can't pass prefabs as parameters, you're obligated to set it in the inspector if you want it to be "global"
    [Header("Dictionaries")]
    public DictionaryUintAndItem items;
    public DictionaryUintAndGameObject itemsModels;
    public DictionaryUintAndGameObject itemsColliders;
}

public enum ItemId : uint {
    Pistol = 0,
    Rifle = 1,
    Sword = 2,
    Rapier = 3,
    BasicHelmet,
    BasicChestplate,
    BasicPlatelegs
}

public enum ItemType {
    MeleeWeapon = 0,
    DistanceWeapon = 1,
    Armor = 2,
    Consumable = 3
}
