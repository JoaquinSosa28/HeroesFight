﻿using UnityEngine;

public class Interactable : MonoBehaviour {
    public virtual void Interact() {
        //Meant to be overwritten
        Debug.Log("Interacting with: " + transform.name);
    }
}
