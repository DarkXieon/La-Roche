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
        if(_inputState.IsPressed(this.InputButtons[0]) && _holdingState.HoldingBall)
        {
            var ball = _holdingState.StopHoldingBall();

            var ballBody = ball.GetComponent<Rigidbody>();

            var forceAxis = _holdingState.HoldingIn.forward;

            var force = forceAxis * ThrowPower;

            ballBody.AddForce(force, ForceMode.VelocityChange);
        }
    }
}
