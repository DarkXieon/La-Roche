using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class CameraDisabler : NetworkBehaviour
{
    private void Start()
    {
        var camera = GetComponentInChildren<Camera>().gameObject;
        //var audioListener = GetComponentInChildren<AudioListener>();
        
        if (!isLocalPlayer)
        {
            camera.SetActive(false);
        }
    }
}
