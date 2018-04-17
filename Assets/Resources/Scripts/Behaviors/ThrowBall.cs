using UnityEngine;
using System.Collections;

public class ThrowBall : BaseBehavior
{
    [SerializeField]
    private float _maxThrowPower = 1000f;

    [SerializeField]
    private float _minThrowPower = 400f;

    [SerializeField]
    private float _maxPowerHoldTime = 1f;

    private PlayerHoldingState _holdingState;

    private float _currentHoldTime;

    public override void OnStartLocalPlayer()
    {
        base.OnStartLocalPlayer();

        _holdingState = this.GetComponent<PlayerHoldingState>();
    }

    private void Update()
    {
        if(isLocalPlayer)
        {
            //Debug.Log(_inputState.IsPressed(Buttons.THROW));
            if (_inputState.IsPressed(Buttons.THROW) && _holdingState.HoldingBall) //if the throw button is pressed and the player is holding the ball...
            {
                Debug.Log(_currentHoldTime);
                _currentHoldTime = _inputState.GetButtonHoldTime(Buttons.THROW);
            }
            else if (!_inputState.IsPressed(Buttons.THROW) && _holdingState.HoldingBall && _currentHoldTime > 0f) //if the throw button is not pressed, the player is holding the ball, and the player WAS holding the throw button
            {
                Debug.Log("It's working");
                var ball = _holdingState.StopHoldingBall();

                var ballBody = ball.GetComponent<Rigidbody>();

                var ballState = ball.GetComponent<BallThrownState>();

                var forceAxis = _holdingState.HoldingIn.forward; //the forward axis relative to the object's current rotation

                var forceMultiplier = Mathf.Min(_currentHoldTime, _maxPowerHoldTime) / _maxPowerHoldTime; //this changes power based on hold time

                var force = Mathf.Max(_maxThrowPower * forceMultiplier, _minThrowPower);

                var forceOnAxis = forceAxis * force;

                ballBody.AddForce(forceOnAxis, ForceMode.VelocityChange); //we don't want to have to worry about the weight of the ball... at least not yet

                _currentHoldTime = 0f;

                ballState.WasThrown = true;
            }
        }
    }
}
