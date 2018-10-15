using UnityEngine;
using UnityEngine.Networking;

public class AimBall : BaseBehavior
{
    public float MinAimRotation; //NOTE: THIS HAS TO BE GREATER THAN ZERO AS OF RIGHT NOW--IT'S BUGGY OTHERWISE

    public float MaxAimRotation;

    public GameObject AimingWith;
    
    private PlayerHoldingState _holdingState;

    protected override void Start()
    {
        base.Start();

        _holdingState = this.GetComponent<PlayerHoldingState>();
    }

    private void Update()
    {
        if(isLocalPlayer)
        {
            var isAimingUp = this._inputState.IsPressed(Buttons.AIM_UP);
            var isAimingDown = this._inputState.IsPressed(Buttons.AIM_DOWN);

            var isRequestingToAim = isAimingUp || isAimingDown; //needs to do some aim adjustment

            if (isRequestingToAim /*&& _holdingState.HoldingBall*/) //for now, the camera and ball will be aimed the same way, so the ball shouldn't have to be held
            {
                var aimingWith = _holdingState.HoldingWith.transform;//AimingWith.transform; //The transform of the object used as a fulcrum
                var aimingWithLocalRotation = aimingWith.localEulerAngles;

                var tempMaxAimRotation = this.MaxAimRotation;
                var tempMinAimRotation = this.MinAimRotation;

                var tempLocalRotation = aimingWithLocalRotation.z < -180 //The game rotation gets converted in an possible area of -180 to 180 instead of 0 to 360
                    ? aimingWithLocalRotation.z + 360
                    : aimingWithLocalRotation.z;

                tempLocalRotation = aimingWithLocalRotation.z > 180 //The game rotation gets converted in an possible area of -180 to 180 instead of 0 to 360
                    ? aimingWithLocalRotation.z - 360
                    : aimingWithLocalRotation.z;
                
                var rawAimRotation = isAimingUp //determines which button value to use
                    ? this._inputState.GetButtonValue(Buttons.AIM_UP)
                    : this._inputState.GetButtonValue(Buttons.AIM_DOWN);

                var rotation = isAimingUp //decreasing the rotation makes the player look up
                    ? tempLocalRotation - rawAimRotation
                    : tempLocalRotation + rawAimRotation;
                
                rotation = isAimingUp //the min and max are opposite of what feels natural
                    ? Mathf.Max(rotation, tempMaxAimRotation * -1)
                    : Mathf.Min(rotation, tempMinAimRotation * -1);
                
                rotation = rotation < -180 //The game rotation gets converted in an possible area of -180 to 180 instead of 0 to 360
                    ? aimingWithLocalRotation.z + 360
                    : rotation;

                rotation = rotation > 180 //The game rotation gets converted in an possible area of -180 to 180 instead of 0 to 360
                    ? aimingWithLocalRotation.z - 360
                    : rotation;
                
                aimingWith.localRotation = Quaternion.Euler(aimingWithLocalRotation.x, aimingWithLocalRotation.y, rotation); //sets the rotation
            }
        }
    }
}
