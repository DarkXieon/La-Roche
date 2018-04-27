using UnityEngine;

public class RotateWithMouse : BaseBehavior
{
    private PlayerHoldingState _holdingState;

    protected override void Start()
    {
        base.Start();

        _holdingState = GetComponent<PlayerHoldingState>();
    }

    private void Update()
    {
        if (isLocalPlayer)
        {
            var direction = this._inputState.RotationDirection;
            
            if (direction != HorisontalDirections.STATIONARY)
            {
                var button = direction == HorisontalDirections.LEFT
                    ? Buttons.TURN_LEFT
                    : Buttons.TURN_RIGHT;

                var rawRotationChange = _inputState.GetButtonValue(button); //non directional rotation change

                var rotationChange = rawRotationChange * (int)direction; //directional rotation change

                this.transform.Rotate(Vector3.up, rotationChange); //change rotation

                //var ball = _holdingState.Ball;

                if(_holdingState.HoldingBall)
                {
                    //var ballHeldState = ball.GetComponent<BallHeldState>();
                    /*
                    var rotateMessage = new RotateAngleMessage
                    {
                        Angle = rotationChange
                    };
                    */
                    //LobbyManager.singleton.client.Send(MyMessageTypes.RotateBallOnYAxis, rotateMessage);
                }
            }
        }
    }
}