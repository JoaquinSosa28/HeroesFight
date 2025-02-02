﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FpsCounter : MonoBehaviour
{
    [SerializeField] private TMPro.TextMeshProUGUI _fpsText;
    [SerializeField] private float _hudRefreshRate = 1f;

    private float _timer;

    private void Update() {
        if (Time.unscaledTime > _timer) {
            int fps = (int)(1f / Time.unscaledDeltaTime);
            _fpsText.text = fps + " fps";
            _timer = Time.unscaledTime + _hudRefreshRate;
        }
    }
}
