using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;

public class DamagePopUp : MonoBehaviour
{
    private TextMeshPro _textMeshPro;
    private Transform mainCamera;

    private void Awake()
    {
        _textMeshPro = transform.GetComponent<TextMeshPro>();
        mainCamera = Camera.main.transform;
    }

    public void Setup(float damageAmount)
    {
        _textMeshPro.SetText(damageAmount.ToString(CultureInfo.InvariantCulture));
        Destroy(this.gameObject, 1.5f);
    }

    private void Update()
    {
        _textMeshPro.transform.rotation =
            Quaternion.LookRotation(_textMeshPro.transform.position - mainCamera.position);
    }
}