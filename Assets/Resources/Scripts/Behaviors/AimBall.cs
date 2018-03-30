using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AimBall : BaseBehavior
{
    public float MinAimRotation; //NOTE: THIS HAS TO BE GREATER THAN ZERO AS OF RIGHT NOW--IT'S BUGGY OTHERWISE

    public float MaxAimRotation;

    private PlayerHoldingState _holdingState;

    protected override void Awake()
    {
        base.Awake();

        _holdingState = this.GetComponent<PlayerHoldingState>();
    }

    private void Update()
    {
        var isAimingUp = this._inputState.IsPressed(Buttons.AIM_UP);
        var isAimingDown = this._inputState.IsPressed(Buttons.AIM_DOWN);

        var isRequestingToAim = isAimingUp || isAimingDown; //needs to do some aim adjustment

        if (isRequestingToAim /*&& _holdingState.HoldingBall*/) //for now, the camera and ball will be aimed the same way, so the ball shouldn't have to be held
        {
            var aimingWith = _holdingState.HoldingIn; //The transform of the object used as a fulcrum

            //For some reason, rotating _aiming with to a number like 30 rotates it down, and starting from 360 and counting down rotates it up
            //These are work-arounds for that
            var actualMaxAimRotation = 360 - this.MaxAimRotation; 
            var actualMinAimRotation = 360 - this.MinAimRotation;

            var currentAimRotation = aimingWith.localRotation.eulerAngles.x < actualMaxAimRotation
                //If the rotation is less than the actual max aim rotation, that means unity turned our 360 to 0 since they are technacally equal, this fixes it
                ? new Vector3(360 - MinAimRotation, aimingWith.localRotation.eulerAngles.y, aimingWith.localRotation.eulerAngles.z)
                : aimingWith.localRotation.eulerAngles;

            var rawAimRotation = isAimingUp //determines which button value to use
                ? this._inputState.GetButtonValue(Buttons.AIM_UP)
                : this._inputState.GetButtonValue(Buttons.AIM_DOWN);

            var rotation = isAimingUp //calculates what we will be setting our rotation to
                ? Mathf.Max(currentAimRotation.x - rawAimRotation, actualMaxAimRotation)
                : Mathf.Min(currentAimRotation.x + rawAimRotation, actualMinAimRotation);

            aimingWith.localRotation = Quaternion.Euler(rotation, currentAimRotation.y, currentAimRotation.z); //sets the rotation
        }
    }
}
