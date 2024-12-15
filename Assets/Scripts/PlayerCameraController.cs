using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using System.Linq.Expressions;
using UnityEngine;
using Mirror;
using UnityEngine.Animations;

public class PlayerCameraController : NetworkBehaviour
{
    [Header("Camera")]
    [SerializeField] private float cameraSensibility = 3.5f;
    [SerializeField] public bool isCursorLocked = false;

    private CinemachineFreeLook thirdPersonCamera;

    public override void OnStartAuthority()
    {
        enabled = true;

        thirdPersonCamera = GameObject.FindGameObjectWithTag("ThirdPersonCamera").GetComponent<CinemachineFreeLook>();
        thirdPersonCamera.m_Follow = transform;
        thirdPersonCamera.m_LookAt = transform;
    }

    [ClientCallback]
    private void OnEnable() 
    {
        SwitchLockCursor();
    }

    [Client]
    private void SwitchLockCursor()
    {
        Cursor.lockState = isCursorLocked ? CursorLockMode.None : CursorLockMode.Locked;
        Cursor.visible = isCursorLocked;
        isCursorLocked = !isCursorLocked;

        thirdPersonCamera.m_XAxis.m_MaxSpeed = isCursorLocked ? (cameraSensibility * 100f) : 0f;
        thirdPersonCamera.m_YAxis.m_MaxSpeed = isCursorLocked ? cameraSensibility : 0f;
    }

    [ClientCallback]
    private void Update()
    {
        if (!hasAuthority) return;

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            SwitchLockCursor();
        }
    }
}
