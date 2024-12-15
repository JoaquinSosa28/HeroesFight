using TMPro;
using UnityEngine;
using Mirror;
using System;

public class ChatBehaviour : NetworkBehaviour
{
    [SerializeField] private GameObject chatUI = null;
    [SerializeField] private TMP_Text chatText = null;
    [SerializeField] private TMP_InputField inputField = null;

    private static event Action<string> onMessage;

    public override void OnStartAuthority()
    {
        chatUI.SetActive(true);

        onMessage += HandleNewMessage;
    }

    [ClientCallback]

    private void OnDestroy()
    {
        if (!hasAuthority) return;

        onMessage -= HandleNewMessage;
    }

    private void HandleNewMessage(String message)
    {
        chatText.text += message;
    }

    [Client]
    public void Send(string message)
    {
        if (!Input.GetKeyDown(KeyCode.Return)) return;

        if (string.IsNullOrWhiteSpace(message)) return;

        CmdSendMessage(message);

        inputField.text = string.Empty;
        inputField.Select();
        inputField.ActivateInputField();
    }

    [Command]
    private void CmdSendMessage(string message)
    {
        RpcHandleMessage($"[{connectionToClient.connectionId}]: {message}");
    }

    [ClientRpc]
    private void RpcHandleMessage(String message)
    {
        onMessage?.Invoke($"\n{message}");
    }
}
