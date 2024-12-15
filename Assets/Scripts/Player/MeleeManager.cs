using System.Collections.Generic;
using Mirror;
using UnityEngine;

[System.Serializable()]
public class DictionaryUintAndTransform : SerializableDictionaryBase<ItemId, Transform>
{
}

[System.Serializable()]
public class DictionaryItemTypeAndGameObject : SerializableDictionaryBase<ItemType, GameObject>
{
}

///<summary>
///This is the official Weapon Manager, there're other but it's because I'm dumb.
///This bascially hands off everything important to the server so the clients can
///only interact with visuals and models, there's no actual collisions or logic
///being run on the clients side.
///</summary>
public class MeleeManager : NetworkBehaviour
{
    //The player has two hands, therefore he has two slots for equipped items
    private readonly GameObject[] _equippedItemsGO = new GameObject[2];

    #region Items config

    [Header("Equippable config")]
    //The transform under which all the weapons will be spawned, for simplicity and organization
    [SerializeField]
    Transform weaponsParent;

    //Unused
    [SerializeField] LayerMask canHitLayers;

    [Space] //Separation in the inspector

    //All the different types of weapons have a different base
    //this is done so there's no need to have a prefab for every single
    //weapon, only a scriptable object and it's corresponding model,
    //then when ever you want to spawn and item you spawn
    //it's base and apply the scriptable object 
    [SerializeField]
    DictionaryItemTypeAndGameObject itemsBasePrefab;

    //Each weapon could have a different spawn point, also there could be the
    //case that many objects have the same spawn point but different offset
    [SerializeField] DictionaryUintAndTransform whenEquippedItemsSpawnPoints;

    //TODO:WTF
    [SerializeField] GameObject meleeHitAreaPrefab;

    #endregion

    //Imported components needed for the functionality of this script

    #region Components

    private ItemManager _itemManager;
    private Inventory _invInstance;
    private InputManager _inputManager;
    private CharacterAiming _characterAiming;
    private CharacterStateManager _characterStateManager;
    private Animator _characterAnimator;
    private NetworkAnimator _networkAnimator;
    private RootParts _rootParts;

    #endregion

    //Attack param hash
    private readonly int _hasAttackParamHash = Animator.StringToHash("hasAttack");

    //Init vars already in this gameObject
    private void Start()
    {
        //Init all the needed components
        _characterAnimator = GetComponent<Animator>();
        _characterAiming = GetComponent<CharacterAiming>();
        _characterStateManager = GetComponent<CharacterStateManager>();
        _networkAnimator = GetComponent<NetworkAnimator>();
        _rootParts = GetComponent<RootParts>();

        _itemManager = ItemManager.instance;
    }

    //Weird start order in clients, idk
    //Init the vars that will only be used on the client
    public override void OnStartAuthority()
    {
        _inputManager = GetComponent<InputManager>();
        _invInstance = Inventory.instance;

        //TODO: Get the inventory from the database :D
        //TODO: This is creating a new fresh inventory everytime
        List<Item> inv = new List<Item>();
        _invInstance.CreateInventory(inv);

        //Subscribe delegates
        _inputManager.onInventoryKeyPressed += OpenInventory; //TODO: Export this into an inv manager
        _inputManager.onSingleClicksPressed += Attack;
        _invInstance.onItemEquipped += EquipItem;
    }

    //TODO: Make inventory manager, take this somewhere else
    [Client]
    private void OpenInventory()
    {
        if (_invInstance.ToggleInventory())
        {
            _characterAiming.UnlockCursor();
            _characterStateManager.isAnyMenuOpened = true;
        }
        else
        {
            _characterAiming.LockCursor();
            _characterStateManager.isAnyMenuOpened = false;
        }
    }

    #region EQUIP

    [Client]
    private void EquipItem(EquipmentSlot hand, Item newItem)
    {
        //We only want to handle this item if it's one of the following types
        if (newItem.type != ItemType.MeleeWeapon && newItem.type != ItemType.DistanceWeapon) return;

        //This that the there's no longer a weapon equipped in this hand
        if (newItem == null)
        {
            CmdUnEquipWeapon(hand);
        }
        else
        {
            //Spawn the new item in hand
            CmdEquipWeaponServer(newItem, hand, netIdentity);
        }
    }

    [Command]
    private void CmdUnEquipWeapon(EquipmentSlot hand)
    {
        ReplacePreviousWeapon(hand, newWeapon: null);
        RpcUnEquipWeapon(hand);
    }

    [ClientRpc]
    private void RpcUnEquipWeapon(EquipmentSlot hand)
    {
        ReplacePreviousWeapon(hand, newWeapon: null);
    }

    ///<summary>
    ///Equip the item, instantiate it in the server to do the logic and in the clients to show the model
    ///</summary>
    [Command]
    private void CmdEquipWeaponServer(Item item, EquipmentSlot hand, NetworkIdentity owner)
    {
        //Get the base prefab which will carry the weapon stats
        GameObject itemEquippedPrefab = GetEquippedItemObject(item.type);

        //The spawn point where the item will be spawned
        Transform itemEquippedSpawnPoint = GetEquippedItemSpawnPoint(item.id, hand);

        //Weapon collisions, I suppose this will only be needed in melee weapons
        GameObject itemEquippedCollider = GetEquippedItemCollider(item.id);

        //Spawn the object in the server to handle everything
        GameObject equippedGO = Instantiate(itemEquippedPrefab, itemEquippedSpawnPoint.position,
            itemEquippedSpawnPoint.rotation, weaponsParent);

        //Now manage the item depending on it's type
        if (item.type == ItemType.MeleeWeapon)
        {
            MeleeWeapon meleeWeapon = item.meleeWeaponInfo;
            //Get the weapon's brain
            MeleeWeaponBehaviour meleeWeaponBehaviour = equippedGO.GetComponent<MeleeWeaponBehaviour>();

            //Set the weapon stats
            meleeWeaponBehaviour.SetMeleeWeapon(meleeWeapon);
            //Spawn the collisions since this is done in the server
            meleeWeaponBehaviour.SpawnWeaponCollider(owner, itemEquippedCollider, itemEquippedSpawnPoint.transform,
                GetEquippedItemOffset(item.id));
            if (!isClientOnly) //TODO REMOVE FOR PRODUCTION / SERVER - HOST
                OnlyDoIfHost(equippedGO, item, itemEquippedSpawnPoint);
        }
        else if (item.type == ItemType.DistanceWeapon)
        {
            DistanceWeapon distanceWeapon = item.distanceWeaponInfo;
            //Send everything that the weapon need
        }

        RpcEquipWeaponClients(item, hand);

        ReplacePreviousWeapon(hand, equippedGO);
    }

    #region REMOVE WHEN HAVING EXTERNAL SERVER

    private void OnlyDoIfHost(GameObject equippedGO, Item item, Transform itemEquippedSpawnPoint)
    {
        equippedGO.GetComponent<MeleeWeaponBehaviour>().SpawnWeaponModel(GetItemModel(item.id));

        SetTransform setTransform;
        if (setTransform = equippedGO.GetComponent<SetTransform>())
        {
            setTransform.SetMoveToTransform(itemEquippedSpawnPoint, GetEquippedItemOffset(item.id));
        }
    }

    #endregion

    ///<summary>
    ///Spawn only the weapon model in every client, the only logic done in this weapon in handeled by the server
    ///</summary>
    [ClientRpc]
    public void RpcEquipWeaponClients(Item item, EquipmentSlot hand)
    {
        //TODO REMOVE FOR SERVER
        if (!isClientOnly)
            return; //If you're not only client it means you're the host (client + server) therefore you don't need this

        //All of this part is already commented before when spawning the weapon in the server
        //it's all the same expect now it gotta spawn the model and not the collisions
        GameObject itemEquippedPrefab = GetEquippedItemObject(item.type);
        Transform itemEquippedSpawnPoint = GetEquippedItemSpawnPoint(item.id, hand);

        GameObject equippedGO = Instantiate(itemEquippedPrefab, itemEquippedSpawnPoint.position,
            itemEquippedSpawnPoint.rotation, weaponsParent);

        //Every weapon has a model, it is assigned to it's id
        GameObject itemModel = GetItemModel(item.id);

        //Once the object is instantiated in the client just assign the item to it and spawn the model
        if (item.type == ItemType.MeleeWeapon)
        {
            MeleeWeaponBehaviour meleeWeaponComp = equippedGO.GetComponent<MeleeWeaponBehaviour>();
            //Just in case something went wrong
            if (meleeWeaponComp)
            {
                meleeWeaponComp.SpawnWeaponModel(itemModel);
            }
        }

        //To move the weapon according to it's spawn point, all the equippable objects should have the "SetTransform" component
        //Authority doesn't matter in this case because you're moving everything them in each client
        SetTransform setTransform;
        if (setTransform = equippedGO.GetComponent<SetTransform>())
        {
            setTransform.SetMoveToTransform(itemEquippedSpawnPoint, GetEquippedItemOffset(item.id));
        }

        ReplacePreviousWeapon(hand, equippedGO);
    }

    private void ReplacePreviousWeapon(EquipmentSlot hand, GameObject newWeapon)
    {
        int handIndex = (int) hand;

        if (_equippedItemsGO[handIndex])
        {
            GameObject weaponCollisions =
                _equippedItemsGO[handIndex].GetComponent<MeleeWeaponBehaviour>().weaponCollisions;

            //Basically only destroy if this method has been called from the server
            //Since the collisions are only instantiated in the server this statement
            //will only be true if you're the one that spawned, aka: the server
            if (weaponCollisions) Destroy(weaponCollisions);

            Destroy(_equippedItemsGO[handIndex]);
        }

        _equippedItemsGO[handIndex] = newWeapon;
    }

    #endregion

    #region GETTERS

    //Return the item offset for each item
    //If the item doesn't need offset it will go to default (Vector3.Zero)
    //Otherwise it will go to it's case and get the offset
    private Vector3 GetEquippedItemOffset(ItemId itemId)
    {
        switch (itemId)
        {
            case ItemId.Pistol:
                return new Vector3(0.1f, 0.1f, 0.1f);
            default:
                return Vector3.zero;
        }
    }

    //The prefab is the base of the weapon
    //The ScriptableObject in it will have all the actual weapon information
    private GameObject GetEquippedItemObject(ItemType itemType)
    {
        return itemsBasePrefab[itemType];
    }

    //TODO: Make this spawn point hand dependent :D
    private Transform GetEquippedItemSpawnPoint(ItemId itemId, EquipmentSlot hand)
    {
        return whenEquippedItemsSpawnPoints[itemId];
    }

    private GameObject GetItemModel(ItemId itemId)
    {
        //ItemModels it's a dictionary so the model will have the id as a key
        return _itemManager.itemsModels[itemId];
    }

    private GameObject GetEquippedItemCollider(ItemId itemId)
    {
        //ItemModels it's a dictionary so the model will have the id as a key
        return _itemManager.itemsColliders[itemId];
    }

    //TODO: Maybe change into something more globally accepted
    private bool CanAttack()
    {
        return _characterStateManager.hasCursorLocked && HasAnyWeapon();
    }

    private bool HasAnyWeapon()
    {
        return _equippedItemsGO[0] != null || _equippedItemsGO[1] != null;
    }

    #endregion

    #region MELEE ATTACKS

    //Perform the attack based on the input
    private void Attack(MouseEvent mouseEvent, KeyEvent keyEvent)
    {
        if (mouseEvent != MouseEvent.LEFT || keyEvent != KeyEvent.DOWN || !CanAttack())
            return;

        //When the trigger is set it will start reproducing the animation
        _characterAnimator.SetTrigger(_hasAttackParamHash);
        //The networkAnimator won't sync triggers so this is needed
        _networkAnimator.SetTrigger(_hasAttackParamHash);
    }

    //Called by an animation event
    //Called when the attack animation should start dealing damage
    //The float passed is the different attacks:
    private const int BAREHAND_ATTACK = 0; //(0) -> Barehanded
    private const int SWORD_ATTACK = 1; //(1) -> Sword

    public void MeleeAttackStarted(float attackTypeWithCombo)
    {
        //Animation events only allow to pass 1 parameter, therefore the float
        //has the attack type in the integers and the combo in the decimals
        int attackType = (int) Mathf.Floor(attackTypeWithCombo);
        //Get the integer and then subtract it to the total to get the decimals
        int combo = Mathf.RoundToInt((attackTypeWithCombo - attackType) * 10);
        Debug.Log("Combo" + combo);

        //Let only the client event actually do something
        //The animation is running in every client, therefore this will be called in every client
        if (!hasAuthority || (attackType == BAREHAND_ATTACK && HasAnyWeapon())) return;

        if (attackType == SWORD_ATTACK)
        {
            RpcStartSwordAttack();
            CmdStartSwordAttack(combo);
        }
        else
        {
            CmdStartMeleeAttack(combo);
        }
    }

    //Called by an animation event
    //Called when the damaging stage has finished
    public void MeleeAttackEnded()
    {
        //The animation is running in every client, therefore this will be called in every client
        if (!hasAuthority /*  || !HasAnyWeapon() */) return;

        Debug.Log("Ended attack");
        RpcStopSwordAttack();
        CmdStopSwordAttack();
    }

    ///<sumary>
    ///This method does the melee attack logic on the server.
    ///It only enables the collision component in the weapon so
    ///it starts detecting hits and dealing damage, those hits are
    ///cached so you can't damage the same object twice in the same attack
    ///Since the combo is animation based it also passes the combo index,
    ///this way the combo is always synched with the attack
    ///</summary>
    [Command]
    private void CmdStartSwordAttack(int combo)
    {
        //May have to change due to multiple swords collisions
        foreach (GameObject weapon in _equippedItemsGO)
            if (weapon)
                weapon.GetComponent<MeleeWeaponBehaviour>().SwitchWeaponDamage(true, combo);
    }

    [ClientRpc]
    private void RpcStartSwordAttack()
    {
        //ONLY For visual effects in the clients
        foreach (GameObject weapon in _equippedItemsGO)
            if (weapon)
            {
                ParticleSystem.EmissionModule emission =
                    weapon.transform.Find("Trail").GetComponent<ParticleSystem>().emission;
                emission.enabled = true;
            }
    }

    //Just disables collisions so the it stops detecting hits
    [Command]
    private void CmdStopSwordAttack()
    {
        //TODO: WTF IS THIS 
        Transform parent = _rootParts.neededBodyParts[NeededBodyParts.LEFT_LEG_DIRECTION];
        for (int i = 0; i < parent.childCount; i++)
        {
            Destroy(parent.GetChild(i).gameObject);
        }

        foreach (GameObject weapon in _equippedItemsGO)
            if (weapon)
                weapon.GetComponent<MeleeWeaponBehaviour>().SwitchWeaponDamage(false, 0);
    }

    [ClientRpc]
    private void RpcStopSwordAttack()
    {
        foreach (GameObject weapon in _equippedItemsGO)
            if (weapon)
            {
                ParticleSystem.EmissionModule emission =
                    weapon.transform.Find("Trail").GetComponent<ParticleSystem>().emission;
                emission.enabled = false;
            }
    }


    [Command]
    private void CmdStartMeleeAttack(int combo)
    {
        //For the melee attack spawn a capsule/cone like hit box in front of the player
        //With the hand/feet direction and then do the magic

        //Spawn a hitbox area (capsule collider), then offset it depending on it's height
        Transform parent = _rootParts.neededBodyParts[NeededBodyParts.LEFT_LEG_DIRECTION];
        GameObject hitbox = Instantiate(meleeHitAreaPrefab, parent);

        hitbox.transform.localPosition = new Vector3(0, 0, hitbox.transform.localScale.y * 0.8f);
    }

    #endregion

    #region DEPRECATED BUT TOO HARD TO DO AGAIN

    private Vector3[] CalculateHitbox(MeleeAttack meleeAttack)
    {
        //Set the positions for the raycast depending on the attack being performed
        Vector3 up0 = Vector3.up * meleeAttack.pos0HeightFactor;
        Vector3 forward0 = transform.forward * meleeAttack.pos0ForwardFactor;
        Vector3 side0 = transform.right * meleeAttack.pos0SideFactor;

        Vector3 up1 = Vector3.up * meleeAttack.pos1HeightFactor;
        Vector3 forward1 = transform.forward * meleeAttack.pos1ForwardFactor;
        Vector3 side1 = transform.right * meleeAttack.pos1SideFactor;

        Vector3 pos0 = transform.position + up0 + forward0 + side0;
        Vector3 pos1 = transform.position + up1 + forward1 + side1;

        return new Vector3[] {pos0, pos1};
    }

    #endregion

    //TODO: TESTING, remove later
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.G))
        {
            _invInstance.UnEquipItem(EquipmentSlot.LeftHand);
        }
    }
}