using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Power_Telekinesis : NetworkBehaviour {

    #region TELEKINESIS POWER SETTINGS
    //--- First ability - Telekinesis
    [SerializeField] float telekinesisForce;
    [SerializeField] float maxDistanceToGrab;
    [SerializeField] float breakDistance;
    [SerializeField] float throwForce;
    [SerializeField] float rotationSpeed;
    //--- 

    //--- Second ability - Forcefield
    [SerializeField] float forcefieldMaxScale;
    [SerializeField] float forcefieldScaleVelocity;
    [SerializeField] float forceFieldCooldown;
    //---
    #endregion

    #region SERIALIZED VARS
    [SerializeField] Transform weaponHolder;
    [SerializeField] Transform dragPosition;
    [SerializeField] GameObject forcefieldPrefab;
    #endregion

    #region PRIVATE VARS
    private CharacterStateManager csm;
    private CharacterLocomotion characterLocomotion;
    private Camera targetCamera;
    private Vector3 localDragPos;
    #endregion

    private float forcefieldScaleAtVel;
    private bool canSpawnForcefield = true;

    private Rigidbody selectedRigidbody;

    public override void OnStartAuthority() {
        targetCamera = Camera.main;
        localDragPos = dragPosition.localPosition;
        csm = GetComponentInParent<CharacterStateManager>();
        characterLocomotion = GetComponentInParent<CharacterLocomotion>();
    }

    private void OnEnable() {
        if (hasAuthority)
            csm.CmdSetCanFly(true);
    }

    private void OnDisable() {
        if (hasAuthority) {
            characterLocomotion.StopFlying();
            csm.CmdSetCanFly(false);
            DeselectRigidbody();
        }
    }

    void Update() {
        if (!hasAuthority || csm.isHoldingWeapon || !csm.isAlive) return;

        //Must be done first due to throwing the selectedRigidbody
        //will make it null and the forcefield will be able to spawn giving an 
        //unwanted behaviour
        SecondAbilityUpdate(); //Forcefield

        FirstAbilityUpdate(); //Telekinesis
    }

    #region First ability
    private void FirstAbilityUpdate() {
        if (Input.GetMouseButtonDown(0)) {
            //Check if we are hovering over Rigidbody, if so, select it
            selectedRigidbody = CheckAndGrabRigidbody();
        }

        if (!selectedRigidbody) return; // selectedRigidbody is needed for each condition

        //Rotate selected rigidbody
        if (Input.GetKey(KeyCode.E)) {
            //Mouse inputs
            float verticalInput = Input.GetAxis("Mouse X") * Time.deltaTime * rotationSpeed;
            float horizontalInput = Input.GetAxis("Mouse Y") * Time.deltaTime * rotationSpeed;

            csm.CmdSetCanMove(false);
            csm.CmdSetCanMoveCamera(false);

            //If you're not the host you need to send the updates to the server due to server auth
            if (base.isClientOnly) {
                CmdRotateObject(selectedRigidbody.GetComponent<NetworkIdentity>(), horizontalInput, verticalInput);
            } else {
                Quaternion deltaRotation = Quaternion.Euler(new Vector3(horizontalInput, verticalInput, 0));
                selectedRigidbody.MoveRotation(selectedRigidbody.rotation * deltaRotation);
            }
        }

        if (Input.GetKeyUp(KeyCode.E)) {
            FinishRotation();
        }

        //Deselect the rigidbody and then throw it
        if (Input.GetMouseButtonDown(1)) {
            //selectedRigidbody.AddForce(dragPosition.forward * throwForce, ForceMode.Impulse);
            CmdThrowObject(selectedRigidbody.GetComponent<NetworkIdentity>(), dragPosition.forward);
            //Throw it and then deselect it since you need the ref to throw it
            DeselectRigidbody();
        }

        if (Input.GetMouseButtonUp(0)) {
            //Release selected Rigidbody if there's any
            DeselectRigidbody();
        }
    }

    Rigidbody CheckAndGrabRigidbody() {
        RaycastHit hitInfo;
        Ray ray = new Ray();
        ray.origin = targetCamera.transform.position;
        ray.direction = targetCamera.transform.forward;

        float distance = Vector3.Distance(targetCamera.transform.position, weaponHolder.position);

        //Since the ray origin is in the camera you need the distance between the player and the camera
        distance += maxDistanceToGrab;
        if (Physics.Raycast(ray, out hitInfo, distance)) {
            if (hitInfo.collider.gameObject.GetComponent<Rigidbody>()) {
                Debug.Log(hitInfo.transform.name);
                //dragPosition.transform.position += dragPosition.transform.forward * hitInfo.transform.localScale.magnitude / 2.5f;
                dragPosition.transform.position = hitInfo.point;
                return hitInfo.collider.gameObject.GetComponent<Rigidbody>();
            }
        }
        return null;
    }

    [Command]
    void CmdRotateObject(NetworkIdentity networkIdentity, float horizontalInput, float verticalInput) {
        Rigidbody rb = networkIdentity.GetComponent<Rigidbody>();
        Quaternion deltaRotation = Quaternion.Euler(new Vector3(horizontalInput, verticalInput, 0));
        rb.MoveRotation(rb.rotation * deltaRotation);
    }

    void FinishRotation() {
        csm.CmdSetCanMove(true);
        csm.CmdSetCanMoveCamera(true);
    }

    [Command]
    void CmdThrowObject(NetworkIdentity networkIdentity, Vector3 direction) {
        networkIdentity.GetComponent<Rigidbody>().AddForce(direction * throwForce, ForceMode.Impulse);
        Debug.Log("Doing xed");
    }
    #endregion

    #region Second ability
    private void SecondAbilityUpdate() {
        if (Input.GetMouseButtonDown(1) && !selectedRigidbody && canSpawnForcefield) {
            StartCoroutine(nameof(ForcefieldCooldown));
            CmdSpawnForcefield();
        }
    }

    [Command]
    void CmdSpawnForcefield() {
        StartCoroutine(nameof(SpawnForcefield));
    }

    [Server]
    IEnumerator SpawnForcefield() {
        GameObject forcefield = Instantiate(forcefieldPrefab, transform.position, transform.rotation);
        NetworkServer.Spawn(forcefield);
        do {
            Vector3 scale;
            scale.x = Mathf.SmoothDamp(forcefield.transform.localScale.x, forcefieldMaxScale, ref forcefieldScaleAtVel, forcefieldScaleVelocity);
            scale.y = Mathf.SmoothDamp(forcefield.transform.localScale.y, forcefieldMaxScale, ref forcefieldScaleAtVel, forcefieldScaleVelocity);
            scale.z = Mathf.SmoothDamp(forcefield.transform.localScale.z, forcefieldMaxScale, ref forcefieldScaleAtVel, forcefieldScaleVelocity);

            forcefield.transform.localScale = scale;

            yield return new WaitForEndOfFrame();
        } while (forcefield.transform.localScale.x < (forcefieldMaxScale - 0.1f)); //Every scale is the same
    }

    IEnumerator ForcefieldCooldown() {
        canSpawnForcefield = false;
        yield return new WaitForSecondsRealtime(forceFieldCooldown);
        canSpawnForcefield = true;
    }
    #endregion

    void FixedUpdate() {
        if (!hasAuthority || !csm.isAlive) return;

        if (selectedRigidbody) {
            Vector3 velocity = (dragPosition.position - selectedRigidbody.transform.position) * (telekinesisForce / selectedRigidbody.mass) * Time.deltaTime;
            selectedRigidbody.velocity = velocity;
            if (base.isClientOnly)
                CmdDragRigidbody(selectedRigidbody.GetComponent<NetworkIdentity>(), velocity);
            if (Vector3.Distance(dragPosition.position, selectedRigidbody.position) - selectedRigidbody.transform.localScale.magnitude / 2 > breakDistance) {
                DeselectRigidbody();
            }

        }
    }

    [Command]
    void CmdDragRigidbody(NetworkIdentity networkIdentity, Vector3 velocity) {
        networkIdentity.gameObject.GetComponent<Rigidbody>().velocity = velocity;
    }

    void DeselectRigidbody() {
        FinishRotation();

        selectedRigidbody = null;
        dragPosition.localPosition = localDragPos;
    }
}
