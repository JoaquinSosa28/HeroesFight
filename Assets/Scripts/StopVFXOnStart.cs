using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;

public class StopVFXOnStart : MonoBehaviour
{
    void Start()
    {
        GetComponent<VisualEffect>().Stop(); 
    }

    void OnEnable() {
        GetComponent<VisualEffect>().Stop();
    }
}
