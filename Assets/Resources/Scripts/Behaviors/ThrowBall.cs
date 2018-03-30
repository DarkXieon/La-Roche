using UnityEngine;
using System.Collections;

public class ThrowBall : BaseBehavior
{
    public float ThrowPower = 10;

    private PlayerHoldingState _holdingState;

    protected override void Awake()
    {
        base.Awake();

        _holdingState = this.GetComponent<PlayerHoldingState>();
    }

    private void Update()
    {
        if(_inputState.IsPressed(Buttons.THROW) && _holdingState.HoldingBall)
        {
            var ball = _holdingState.StopHoldingBall();

            var ballBody = ball.GetComponent<Rigidbody>();

            var forceAxis = _holdingState.HoldingIn.forward; //the forward axis relative to the object's current rotation

            var force = forceAxis * ThrowPower;

            ballBody.AddForce(force, ForceMode.VelocityChange); //we don't want to have to worry about the weight of the ball... at least not yet
        }
    }
}
