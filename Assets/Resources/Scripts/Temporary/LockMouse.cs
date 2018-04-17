using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class LockMouse : NetworkBehaviour
{
    private void Update()
    {
        if (isLocalPlayer && Input.GetKeyDown(KeyCode.CapsLock))
        {
            Cursor.lockState = Cursor.lockState == CursorLockMode.Locked
                ? CursorLockMode.None
                : CursorLockMode.Locked;
        }
    }
}
