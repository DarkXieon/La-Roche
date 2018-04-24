using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class BallThrownState : NetworkBehaviour
{
    public bool WasThrown { get { return _wasThrown; } }

    [SyncVar]
    private bool _wasThrown = false;

    [SyncVar]
    private GameObject _thrownBy;

    [SyncVar]
    private bool _updateNextFrame = false;

    private void Update()
    {
        if(isServer && _updateNextFrame)
        {
            _updateNextFrame = false;

            _wasThrown = false;

            _thrownBy = null;
        }
    }
    
    private void OnCollisionEnter(Collision collision)
    {
        var networkIdentity = GetComponent<NetworkIdentity>();

        if(networkIdentity != null && isServer)
        {
            var conditionState = collision.gameObject.GetComponent<PlayerConditionState>();

            if (WasThrown && collision.gameObject.tag == "Player")
            {
                if(conditionState != null)
                {
                    Debug.Log("time to freeze");
                    
                    _thrownBy.GetComponent<PlayerConditionState>().GetPlayerOut(conditionState);
                }
                else
                {
                    Debug.LogError("You forgot to add a PlayerConditionState script to the target player.");
                }
            }

            _updateNextFrame = true;
        }
    }
    //So far this is all that this does--will likely do more in the future

    public void BallThrownBy(GameObject player)
    {
        if(!isServer)
        {
            CmdBallThrownBy(player);
        }
        else
        {
            ThrownByInternal(player);
        }
    }

    [Command]
    private void CmdBallThrownBy(GameObject player)
    {
        ThrownByInternal(player);
    }

    private void ThrownByInternal(GameObject player)
    {
        _thrownBy = player;

        _wasThrown = true;
    }
}