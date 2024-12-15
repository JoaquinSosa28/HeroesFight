using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmorEquipmentBehaviour : MonoBehaviour {

    private SkinnedMeshRenderer modelMesh;

    //Armor stats
    private float armor;

    public void SetArmor(ArmorEquipment armorEquipment) {

    }

    public void SpawnModel(GameObject model) {
        GameObject spawnedModel = Instantiate(model, transform);
        modelMesh = spawnedModel.GetComponent<SkinnedMeshRenderer>();
    }

    public void SetupMesh(SkinnedMeshRenderer targetMesh) {
        if (!modelMesh) return;

        modelMesh.bones = targetMesh.bones;
        modelMesh.rootBone = targetMesh.rootBone;
    }
}
