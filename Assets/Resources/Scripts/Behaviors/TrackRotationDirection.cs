using UnityEngine;
using System.Collections;

public class TrackRotationDirection : BaseBehavior
{
    private void Update()
    {
        var isRotatingLeft = this._inputState.IsPressed(Buttons.TURN_LEFT);
        var isRotatingRight = this._inputState.IsPressed(Buttons.TURN_RIGHT);

        if(isRotatingLeft || isRotatingRight)
        {
            this._inputState.RotationDirection = isRotatingLeft
                ? HorisontalDirections.LEFT
                : HorisontalDirections.RIGHT;
        }
        else
        {
            this._inputState.RotationDirection = HorisontalDirections.STATIONARY;
        }
    }
}
