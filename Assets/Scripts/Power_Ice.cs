using System;
using Mirror;
using System.CodeDom;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.VFX;

public class Power_Ice : NetworkBehaviour {

    #region CONSTANTS
    private const float MAX_INC_ROT = 350f;
    private const float MAX_DEC_ROT = 10f;

    private const float MAX_DELTA_X = 10f;
    private const float MAX_DELTA_Y = 10f;

    private const float ICE_WALL_ANIM_DUR = 0.5f;
    #endregion 

    #region POWER SETTINGS
    //--- Ice transformation
    [SerializeField] float timeToBecomeNormal = 15f;
    //---

    //--- Ice platform movement
    [SerializeField] int icePlatformBaseLength = 5; //Amount of ice platforms
    [SerializeField] float icePlatformBaseSpawnCooldown = 5.0f; //Seconds
    [SerializeField] float icePlatformLifetime = 10f; //Seconds
    [SerializeField] float icePlatformSpawnCooldown = 0.1f; //Seconds
    //---

    //--- Ice wall
    [SerializeField] float iceWallSpawnDistance = 5f;
    [SerializeField] float iceWallSpawnCooldown = 20f; //Seconds
    //---
    #endregion

    #region SERIALIZED VARS
    [SerializeField] GameObject iceWallPrefab;
    [SerializeField] GameObject icePathPrefab;
    [SerializeField] Material[] iceMaterial;
    [SerializeField] Material[] normalMaterial;
    [SerializeField] AudioSource characterAudioSource;
    [SerializeField] AudioClip transformationClip;
    [SerializeField] AudioClip iceCastSound;
    [SerializeField] VisualEffect[] icePathEffect;
    [SerializeField] Transform pathRotationGuideTransform;
    [SerializeField] LayerMask iceSpawnerLayer;
    [SerializeField] LayerMask layersToSpawnIcePlatform;
    #endregion

    #region PRIVATE VARS
    private Animator rigAnimator;
    private NetworkAnimator rigNetworkAnimator;
    private Transform cameraTransform;
    private NetworkIdentity networkIdentity;
    private CharacterStateManager csm;
    private PowersAbilities powersAbilities;
    #endregion

    //--- Animator parameters
    private int isCastingAbilityParam;
    private int isCreatingSecondAbilityParam;
    //--- 

    //--- Transformation types
    private enum TransformationType { Normal = 0, Ice = 1 }
    //---

    private bool canBuildIcePlatformBase = true;
    private bool canBuildIcePlatform = true;

    private bool isPlayerIce = false;

    private bool canSpawnIceWall = true;

    private GameObject lastIcePlatform;

    private CapsuleCollider throwAbilityCollider;

    public override void OnStartAuthority() {

        cameraTransform = Camera.main.transform;
        networkIdentity = GetComponentInParent<NetworkIdentity>();
        csm = GetComponentInParent<CharacterStateManager>();

        rigAnimator = transform.parent.Find("---RigLayers---").GetComponent<Animator>(); // RIG LAYERS INDEX
        rigNetworkAnimator = GetComponentsInParent<NetworkAnimator>()[1]; // SECOND NETWORK ANIMATOR

        isCastingAbilityParam = Animator.StringToHash("isCastingAbility");
    }

    //Init variables used in the server
    public override void OnStartServer() {
        base.OnStartServer();
        powersAbilities = transform.root.GetComponentInChildren<PowersAbilities>();
        networkIdentity = GetComponentInParent<NetworkIdentity>();
    }

    private void Update() {
        if (!hasAuthority || csm.isHoldingWeapon || !csm.isAlive) return;

        IcePathUpdate();

        FirstAbilityUpdate();

        SecondAbilityUpdate();
    }

    private void IcePathUpdate() {
        if (Input.GetMouseButton(0) && Input.GetMouseButton(1) && canBuildIcePlatformBase) {
            SpawnIcePlatformBase();
        }

        if (Input.GetMouseButton(0) && Input.GetMouseButton(1) && canBuildIcePlatform) {
            CheckAndSpawnIce();
        }
    }

    private void FirstAbilityUpdate() {
        if (Input.GetMouseButton(0)) {
            StartIceEffect();
        }

        if (Input.GetMouseButtonUp(0)) {
            StopIceEffect(false);
        }
    }

    private void SecondAbilityUpdate() {
        if (Input.GetMouseButtonDown(1) && !Input.GetMouseButton(0) && canSpawnIceWall) {
            csm.CmdSetIsCastingAbility(true);

            rigAnimator.SetBool(isCastingAbilityParam, true);
            rigAnimator.SetTrigger("createIceWallTrigger");
            rigNetworkAnimator.SetTrigger("createIceWallTrigger");

            icePathEffect[0].Play();
            icePathEffect[1].Play();

            StartCoroutine("IceWallCooldown");
            Invoke(nameof(SpawnIceWall), (ICE_WALL_ANIM_DUR * 0.5f) + 0.6f);
        }
    }

    #region Ice path
    void SpawnIcePlatformBase() {
        Ray ray = new Ray();
        ray.origin = cameraTransform.position;
        ray.direction = cameraTransform.forward;

        RaycastHit hitInfo;

        if (Physics.Raycast(ray, out hitInfo, 20f, layersToSpawnIcePlatform)) {
            Debug.Log("Hit: " + hitInfo.collider.name);
            Debug.DrawLine(ray.origin, hitInfo.point, Color.blue);

            if (!hitInfo.collider.tag.Equals("Ground")) return;

            for (int i = 0; i < icePlatformBaseLength; i++) {
                if (i == 0) { //Is the one touching the ground
                    Vector3 rot = transform.rotation.eulerAngles;
                    rot = new Vector3(-10f, rot.y, 0f);
                    SpawnIcePlatformLocally(hitInfo.point, rot);
                    CmdSpawnIcePath(hitInfo.point, rot, NetworkTime.time);
                } else {
                    Vector3 spawnPoint = lastIcePlatform.transform.GetChild(0).position;
                    Vector3 rot = lastIcePlatform.transform.rotation.eulerAngles;
                    SpawnIcePlatformLocally(spawnPoint, rot);
                    CmdSpawnIcePath(spawnPoint, rot, NetworkTime.time);
                }
            }
            StopCoroutine("IcePlatformBaseCooldown");
            StartCoroutine("IcePlatformBaseCooldown");
        }
    }


    ///<summary>
    ///How it is supposed to work:
    ///First compare the last ice platform eulerAngle with the new one
    ///which is pointing to the ice path rotation using Mathf.DeltaAngle,
    ///which will return a value which sign determins which side to adjust.
    ///After getting the DeltaAngle check (if DeltaAngle > MAX_ANGLE_DIF) 
    ///If so snap it to the corresponding side doing 
    ///lastIcePlatform.eulerAngles.y (+-) MAX_ANGLE_DIF
    ///</summary>
    void CheckAndSpawnIce() {
        Ray ray = new Ray();
        ray.origin = cameraTransform.position;
        ray.direction = cameraTransform.forward;

        RaycastHit hitInfo;

        float distance;
        if (csm.isCastingAbility) distance = 13.5f; else distance = 12f;
        if (Physics.Raycast(ray, out hitInfo, distance, iceSpawnerLayer)) {

            //Once you hit the collider for path creation disable it, since it will no longer be used
            hitInfo.collider.enabled = false;
            //The hit collider's transform has the spawnPoint for the next ice platform
            Vector3 spawnPoint = hitInfo.collider.transform.position;
            //Rotate the transform so you can get the corresponding rotation for the ice platform
            Transform rotatedTransform = hitInfo.collider.transform;
            rotatedTransform.transform.LookAt(pathRotationGuideTransform);

            Vector3 rot = rotatedTransform.rotation.eulerAngles;

            //New X and Y rotation
            float xRot = rot.x;
            float yRot = rot.y;

            //X and Y rotation from the last ice platform
            float lastXRot = lastIcePlatform.transform.rotation.eulerAngles.x;
            float lastYRot = lastIcePlatform.transform.rotation.eulerAngles.y;

            //Debug.Log("BF: newXROT:" + xRot + ", oldXROT: " + lastXRot);
            //Debug.Log("BF: newYROT:" + yRot + ", oldYROT: " + lastYRot);

            //Check the difference between angles, and if it's > than max allowed, then snap to prev angle
            float deltaAngleX = Mathf.DeltaAngle(lastXRot, xRot);
            if (Mathf.Abs(deltaAngleX) > MAX_DELTA_X) {
                //Depending on deltaAngleX sign move to the right or left
                float xRotDisplacement = deltaAngleX > 0 ? MAX_DELTA_X : -MAX_DELTA_X;

                xRot = lastXRot + xRotDisplacement;

                //Debug.Log("DeltaAngleY: " + deltaAngleX + "; yRotDis: " + xRotDisplacement);
            }

            //Snap the xRot to the max or min
            if (xRot < MAX_INC_ROT && xRot > MAX_DEC_ROT) {
                xRot = ClosestTo(xRot, MAX_DEC_ROT, MAX_INC_ROT);
            }

            //Check the DeltaAngle to decide what to do with it's rotation
            float deltaAngleY = Mathf.DeltaAngle(lastYRot, yRot);
            if (Mathf.Abs(deltaAngleY) > MAX_DELTA_Y) {
                //Depending on deltaAngleY sign move to the right or left
                float yRotDisplacement = deltaAngleY > 0 ? MAX_DELTA_Y : -MAX_DELTA_Y;

                yRot = lastYRot + yRotDisplacement;

                //Debug.Log("DeltaAngleY: " + deltaAngleY + "; yRotDis: " + yRotDisplacement);
            }

            //After checking X and Y axis it won't be able to rotate with a huge angular difference 
            //in comparison to the previous one, therefore there will be a smooth path

            rot.x = xRot;
            rot.y = yRot;
            rot.z = 0;

            StartCoroutine("IcePlatformCooldown");
            StopCoroutine("IcePlatformBaseCooldown");
            StartCoroutine("IcePlatformBaseCooldown");

            SpawnIcePlatformLocally(spawnPoint, rot);
            CmdSpawnIcePath(spawnPoint, rot, NetworkTime.time);
            //if (!iceSpellSound.isPlaying) iceSpellSound.Play();
        }
    }

    IEnumerator IcePlatformBaseCooldown() {
        canBuildIcePlatformBase = false;
        Debug.Log("cant");
        yield return new WaitForSecondsRealtime(icePlatformBaseSpawnCooldown);
        Debug.Log("can");
        canBuildIcePlatformBase = true;
    }

    IEnumerator IcePlatformCooldown() {
        canBuildIcePlatform = false;
        yield return new WaitForSecondsRealtime(icePlatformSpawnCooldown);
        canBuildIcePlatform = true;
    }

    private void SpawnIcePlatformLocally(Vector3 pos, Vector3 rot) {
        GameObject iceGO = Instantiate(icePathPrefab, pos, Quaternion.Euler(rot));
        //Enable the collider only for the one spawning so only he can spawn more ice
        iceGO.transform.GetChild(0).GetComponent<Collider>().enabled = true;
        //Set the originalIce only if this is called in your player
        if (lastIcePlatform) lastIcePlatform.transform.GetChild(0).GetComponent<Collider>().enabled = false;

        if (IsInGround(iceGO.transform.position)) {
            Destroy(iceGO);
            return;
        }

        lastIcePlatform = iceGO;

        Destroy(iceGO, icePlatformLifetime);
    }

    [Command]
    void CmdSpawnIcePath(Vector3 pos, Vector3 rot, double time) {
        RpcSpawnIcePath(pos, rot, time);
    }

    [ClientRpc]
    void RpcSpawnIcePath(Vector3 pos, Vector3 rot, double time) {
        if (hasAuthority) return;
        GameObject iceGO = Instantiate(icePathPrefab, pos, Quaternion.Euler(rot));

        if (IsInGround(iceGO.transform.position)) {
            Destroy(iceGO);
            return;
        }

        //It will comprate the current time to the time the platform was spawned locally
        //the difference is the time it took to reach each client, it the destruction
        //countdown had already started on the first client, so substract the time it
        //took to reach to each client to be in perfect sync with the local client
        float timeDifference = (float)(NetworkTime.time - time);
        Destroy(iceGO, icePlatformLifetime - timeDifference);
    }
    #endregion

    #region First ability
    void StartIceEffect() {
        //if (!iceSpellSound.isPlaying) iceSpellSound.Play();
        if (!rigAnimator.GetBool(isCastingAbilityParam)) {
            rigAnimator.SetBool(isCastingAbilityParam, true);
            csm.CmdSetIsCastingAbility(true);

            StartCoroutine("StartFirstAbilityEffect");
            StopCoroutine("MakePlayerNormalInCooldown");

            if (!isPlayerIce) {
                CmdTransformPlayer(TransformationType.Ice, networkIdentity);
                isPlayerIce = true;
            }
        }
    }

    public void StopIceEffect(bool onDisable) {
        //if (iceSpellSound.isPlaying) iceSpellSound.Stop();
        if (rigAnimator.GetBool(isCastingAbilityParam)) {
            rigAnimator.SetBool(isCastingAbilityParam, false);
            csm.CmdSetIsCastingAbility(false);
            CmdStopIceAttackEffect();

            StopCoroutine("StartFirstAbilityEffect");

            if (isPlayerIce && !onDisable) {
                StartCoroutine("MakePlayerNormalInCooldown");
            }
        }
    }

    IEnumerator StartFirstAbilityEffect() {
        yield return new WaitForSecondsRealtime(0.5f);
        CmdStartIceAttackEffect();
    }

    [Command]
    private void CmdStartIceAttackEffect() {
        ToggleAbilityCollider(true);
        RpcStartIceAttackEffect();
    }

    [ClientRpc]
    private void RpcStartIceAttackEffect() {
        icePathEffect[0].Play();
        icePathEffect[1].Play();
    }

    [Command]
    private void CmdStopIceAttackEffect() {
        ToggleAbilityCollider(false);
        RpcStopIceAttackEffect();
    }

    [ClientRpc]
    private void RpcStopIceAttackEffect() {
        icePathEffect[0].Stop();
        icePathEffect[1].Stop();
    }

    private void ToggleAbilityCollider(Boolean enabled) {
        try {
            powersAbilities.activeAbilityGO.GetComponent<CapsuleCollider>().enabled = enabled;
        } catch (Exception e) {
            Debug.LogError("Couldn't get the CapsuleCollider from the 'activeAbilityGO': " + e.Message);
        }
    }
    #endregion

    #region Second ability
    private void SpawnIceWall() {
        //TODO REFACTOR CODE AND OPTIMIZE IT

        rigAnimator.SetBool(isCastingAbilityParam, false);
        rigAnimator.ResetTrigger("createIceWallTrigger");
        rigNetworkAnimator.ResetTrigger("createIceWallTrigger");

        if (!isPlayerIce) CmdTransformPlayer(TransformationType.Ice, networkIdentity);
        StartCoroutine("MakePlayerNormalInCooldown");

        Vector3 posToSpawn = transform.position + transform.forward * iceWallSpawnDistance;
        Vector3 rotToSpawn = transform.rotation.eulerAngles;
        CmdSpawnIceWall(posToSpawn, rotToSpawn, networkIdentity);
        icePathEffect[0].Stop();
        icePathEffect[1].Stop();
        csm.CmdSetIsCastingAbility(false);
    }

    IEnumerator IceWallCooldown() {
        canSpawnIceWall = false;
        yield return new WaitForSeconds(iceWallSpawnCooldown);
        canSpawnIceWall = true;
    }

    [Command]
    private void CmdSpawnIceWall(Vector3 pos, Vector3 rot, NetworkIdentity networkIdentity) {
        GameObject iceWall = Instantiate(iceWallPrefab, pos, Quaternion.Euler(rot));
        NetworkServer.Spawn(iceWall, networkIdentity.connectionToClient);
    }
    #endregion

    IEnumerator MakePlayerNormalInCooldown() {
        Debug.Log("0 seconds");
        yield return new WaitForSeconds(timeToBecomeNormal);
        Debug.Log(timeToBecomeNormal + " seconds");
        if (isPlayerIce && !csm.isCastingAbility) {
            CmdTransformPlayer(TransformationType.Normal, networkIdentity);
            isPlayerIce = false;
        }
    }

    [Command]
    void CmdTransformPlayer(TransformationType transformation, NetworkIdentity player) {
        RpcTransformPlayer(transformation, player);
    }

    [ClientRpc]
    void RpcTransformPlayer(TransformationType transformation, NetworkIdentity player) {
        SkinnedMeshRenderer smr = player.transform.Find("---Model---").GetComponent<SkinnedMeshRenderer>();
        Material[] materialsToTransform = transformation == TransformationType.Ice ? iceMaterial : normalMaterial;
        smr.materials = materialsToTransform;

        // characterAudioSource.clip = transformationClip;
        // characterAudioSource.Play();
    }

    void TransformPlayerLocally(TransformationType transformation, NetworkIdentity player) {
        SkinnedMeshRenderer smr = player.transform.Find("---Model---").GetComponent<SkinnedMeshRenderer>();
        Material[] materialsToTransform = transformation == TransformationType.Ice ? iceMaterial : normalMaterial;
        smr.materials = materialsToTransform;

        // characterAudioSource.clip = transformationClip;
        // characterAudioSource.Play();
    }

    bool IsInGround(Vector3 origin) {
        Ray ray = new Ray();
        ray.origin = origin;
        ray.direction = Vector3.up;
        RaycastHit hitInfo;

        return Physics.Raycast(ray, out hitInfo, 5f) && hitInfo.collider.tag.Equals("Ground");
    }

    float ClosestTo(float value, float closeTo1, float closeTo2) {
        float dif1 = Mathf.Abs(value - closeTo1);
        float dif2 = Mathf.Abs(value - closeTo2);

        if (dif1 < dif2) return closeTo1;
        else return closeTo2;
    }

    private void OnDisable() {
        //StopIceEffect method can be called locally and will sync to all clients
        if (hasAuthority) {
            StopIceEffect(true);
        }

        isPlayerIce = false;
        CmdTransformPlayer(TransformationType.Normal, networkIdentity);
    }
}
