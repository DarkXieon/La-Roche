using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AimBall : BaseBehavior
{
    public float MinAimRotation;

    public float MaxAimRotation;

    private PlayerHoldingState _holdingState;

    protected override void Awake()
    {
        base.Awake();

        _holdingState = this.GetComponent<PlayerHoldingState>();
    }

    private void Update()
    {
        var isAimingUp = this._inputState.IsPressed(this.InputButtons[0]);
        var isAimingDown = this._inputState.IsPressed(this.InputButtons[1]);

        var isRequestingToAim = isAimingUp || isAimingDown;

        if (isRequestingToAim && _holdingState.HoldingBall)
        {
            var aimingWith = _holdingState.HoldingIn;

            var currentAimRotation = aimingWith.localRotation.eulerAngles.x < 360 - MaxAimRotation
                ? new Vector3(360 - MinAimRotation, aimingWith.localRotation.eulerAngles.y, aimingWith.localRotation.eulerAngles.z)
                : aimingWith.localRotation.eulerAngles;

            var rawAimRotation = isAimingUp
                ? this._inputState.GetButtonValue(this.InputButtons[0])
                : this._inputState.GetButtonValue(this.InputButtons[1]);

            var rotation = isAimingUp
                ? Mathf.Max(currentAimRotation.x - rawAimRotation, 360 - MaxAimRotation)
                : Mathf.Min(currentAimRotation.x + rawAimRotation, 360 - MinAimRotation);

            aimingWith.localRotation = Quaternion.Euler(rotation, currentAimRotation.y, currentAimRotation.z);
        }
    }
}
