using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using Prototype.NetworkLobby;

public class ThrowBall : BaseBehavior
{
    [SerializeField]
    private float _maxThrowPower = 1000f;

    [SerializeField]
    private float _minThrowPower = 400f;

    [SerializeField]
    private float _maxPowerHoldTime = 1f;

    //[SyncVar]
    private PlayerHoldingState _holdingState;

    [SyncVar]
    private float _currentHoldTime;
    
    protected override void Start()
    {
        base.Start();

        _holdingState = this.GetComponent<PlayerHoldingState>();
    }

    private void Update()
    {
        if(isClient)
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

                var ball = _holdingState.StopHoldingBall();//_holdingState.Ball;

                var forceAxis = _holdingState.RotateXParent.forward; //the forward axis relative to the object's current rotation

                var forceMultiplier = Mathf.Min(_currentHoldTime, _maxPowerHoldTime) / _maxPowerHoldTime; //this changes power based on hold time

                var force = Mathf.Max(_maxThrowPower * forceMultiplier, _minThrowPower);

                var forceOnAxis = forceAxis * force;

                _currentHoldTime = 0f;

                var throwMessage = new ThrowBallMessage
                {
                    Force = forceOnAxis
                };

                //LobbyManager.singleton.client.Send(MyMessageTypes.BallThrown, throwMessage);

                NormalThrowBall(ball, forceOnAxis);
                
                //CmdThrowBall(ball, forceOnAxis);

                //_holdingState.CmdStopHoldingBall(ball);
            }
        }
    }

    [Command]
    public void CmdThrowBall(GameObject ball, Vector3 force)
    {
        var ballBody = ball.GetComponent<Rigidbody>();

        var ballState = ball.GetComponent<BallThrownState>();

        ballBody.AddForce(force, ForceMode.VelocityChange); //we don't want to have to worry about the weight of the ball... at least not yet

        ballState.WasThrown = true;
    }

    public void NormalThrowBall(GameObject ball, Vector3 force)
    {
        var ballBody = ball.GetComponent<Rigidbody>();

        ballBody.AddForce(force, ForceMode.VelocityChange); //we don't want to have to worry about the weight of the ball... at least not yet

        CmdSetThrown(ball);   
    }

    [Command]
    public void CmdSetThrown(GameObject ball)
    {
        var ballState = ball.GetComponent<BallThrownState>();

        ballState.WasThrown = true;
    }
}