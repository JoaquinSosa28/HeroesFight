using Mirror;
using UnityEngine;

public class ItemPickup : NetworkBehaviour {
    private const string ITEMS_PICK_UP_TAG = "ItemPickUp";
    private const float DISTANCE_TO_PICKUP = 20f;
    public LayerMask MASKS_TO_RAYCAST;

    #region Components
    private Transform cameraTransform;
    private CharacterStateManager csm;
    private InputManager inputManager;
    #endregion

    public override void OnStartAuthority() {
        cameraTransform = Camera.main.transform;
        csm = GetComponent<CharacterStateManager>();
        inputManager = GetComponent<InputManager>();

        //When the interaction key is preseed then open check for a target
        inputManager.onInteractKeyPressed += CallCheckForTarget;
    }

    [Client]
    private void CallCheckForTarget() {
        CmdCheckForTarget(netIdentity, cameraTransform.position, cameraTransform.forward);
    }

    ///<summary>
    ///This method checks for the target were the player is looking at.
    ///It filters the raycast with layers and based on a distance. 
    ///</summary>
    [Command]
    private void CmdCheckForTarget(NetworkIdentity netIdentity, Vector3 origin, Vector3 distance) {
        Ray ray = new Ray();
        ray.origin = origin;
        ray.direction = distance;
        RaycastHit hitInfo;

        //May want to raycast in the server in case the player changed it's position locally cheating
        //Raycast including other visible objects, in case the weapon is behind a wall
        if (Physics.Raycast(ray, out hitInfo, DISTANCE_TO_PICKUP, MASKS_TO_RAYCAST)) {
            if (!hitInfo.transform.CompareTag(ITEMS_PICK_UP_TAG))
                return;

            //What you hit
            NetworkIdentity itemIdentity = hitInfo.collider.GetComponent<NetworkIdentity>();
            //Item info
            PickUpItem pickUpItem = hitInfo.collider.GetComponent<PickUpItem>();
            //To make sure that you will not be able to pick it up twice due to server latency
            if (pickUpItem.hasBeenPickedUp || !itemIdentity)
                return;

            pickUpItem.hasBeenPickedUp = true;

            TargetAddItemToInventory(netIdentity.connectionToClient, pickUpItem.item);
            // CmdDestroyItem(itemIdentity);
            NetworkServer.Destroy(itemIdentity.gameObject);
        }
    }

    //This needs to be a target rpc
    [TargetRpc]
    private void TargetAddItemToInventory(NetworkConnection target, Item item) {
        Inventory.instance.AddItem(item);
    }

    #region DEPRACATED
    [Command]
    void CmdDestroyItem(NetworkIdentity itemIdentity) {
        //Destroy the the picked item
        NetworkServer.Destroy(itemIdentity.gameObject);

        //Depending in the item type you may want to add it to your inventory or equip it
        // switch (item.type) {
        //     case ItemType.MeleeWeapon:
        //         meleeManager.SpawnEquippedItem(item, owner);
        //         break;
        //     case ItemType.DistanceWeapon:
        //         Debug.Log("Picked up a distance weapon");
        //         break;
        //     case ItemType.Armor:
        //         Debug.Log("Picked up armor");
        //         break;
        //     case ItemType.Consumable:
        //         Debug.Log("Picked up a consumable");
        //         break;
        //     default:
        //         return;
        // }
    }
    #endregion
}
