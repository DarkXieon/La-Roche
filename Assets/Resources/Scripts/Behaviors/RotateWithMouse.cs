using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateWithMouse : BaseBehavior
{
    private void Update()
    {
        var direction = this._inputState.RotationDirection;
        Debug.Log(direction.ToString());
        if (direction != HorisontalDirections.STATIONARY)
        {
            var button = direction == HorisontalDirections.LEFT
                ? Buttons.TURN_LEFT
                : Buttons.TURN_RIGHT;

            var rawRotationChange = _inputState.GetButtonValue(button); //non directional rotation change

            var rotationChange = rawRotationChange * (int)direction; //directional rotation change

            this.transform.Rotate(transform.up, rotationChange); //change rotation
        }
    }
}