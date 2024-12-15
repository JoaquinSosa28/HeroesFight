using UnityEngine;

public class PickUpItem : Interactable
{
    public Item item;
    [HideInInspector] public bool hasBeenPickedUp = false;

    public override void Interact()
    {
        base.Interact();
    }
}
