using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateWithMouse : BaseBehavior
{
    private void Update()
    {
        var direction = this._inputState.RotationDirection;
        
        if (direction != HorisontalDirections.STATIONARY)
        {
            var button = direction == HorisontalDirections.LEFT
                ? this.InputButtons[0]
                : this.InputButtons[1];

            var rawRotationChange = _inputState.GetButtonValue(button);

            var rotationChange = rawRotationChange * (int)direction;

            this.transform.Rotate(transform.up, rotationChange);
        }
    }
}