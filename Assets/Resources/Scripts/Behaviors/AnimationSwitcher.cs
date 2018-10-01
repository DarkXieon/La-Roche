using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class AnimationSwitcher : NetworkBehaviour
{
    //[SerializeField]//[SyncVar]
    private Animator _animator;

    private void OnEnable()
    {
        _animator = GetComponent<Animator>();
    }

    public void StartWalking()
    {
        CmdSetBool("Walking", true);
    }

    public void StopWalking()
    {
        CmdSetBool("Walking", false);
    }

    public void Jump()
    {
        CmdSetBool("Jumping", true);
    }

    public void Land()
    {
        CmdSetBool("Jumping", false);
    }

    public void CatchBall()
    {
        if(_animator.GetBool("Out"))
        {
            CmdSetBool("Getting In", true);
        }
        else
        {
            CmdSetBool("Holding", true);
        }
    }

    public void AimBall()
    {
        CmdSetBool("Aiming", true);
    }

    public void ThrowBall()
    {
        CmdSetBool("Throwing", true);
    }

    public void GetOut()
    {
        CmdSetBool("Out", true);
    }

    public void GetIn()
    {
        CmdSetBool("Out", false);
    }

    [Command]
    private void CmdSetBool(string propertyName, bool value)
    {
        RpcSetBool(propertyName, value);
    }

    [ClientRpc]
    private void RpcSetBool(string propertyName, bool value)
    {
        _animator.SetBool(propertyName, value);
    }
}