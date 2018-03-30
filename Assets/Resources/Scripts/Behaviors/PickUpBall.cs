using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUpBall : BaseBehavior
{
    private PlayerHoldingState _holdingState;

    protected override void Awake()
    {
        base.Awake();

        _holdingState = this.GetComponent<PlayerHoldingState>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        var collidedWith = collision.gameObject;

        if(collidedWith.tag == "Ball" && !collidedWith.GetComponent<BallThrownState>().WasThrown)
        {
            Debug.Log("Found Ball");

            _holdingState.StartHoldingBall(collidedWith);
        }
    }
}
