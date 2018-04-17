using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class BallThrownState : NetworkBehaviour
{
    public bool WasThrown = false;

    private bool _updateNextFrame = false;

    private void Update()
    {
        if(_updateNextFrame)
        {
            _updateNextFrame = false;

            WasThrown = false;
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        var networkIdentity = GetComponent<NetworkIdentity>();

        if(networkIdentity != null && isLocalPlayer)
        {
            var frozenState = collision.gameObject.GetComponent<PlayerFrozenState>();

            if (WasThrown && collision.gameObject.tag == "Player" && frozenState != null)
            {
                Debug.Log("time to freeze");

                frozenState.Freeze();
            }

            _updateNextFrame = true;
        }
    }
    //So far this is all that this does--will likely do more in the future
}
