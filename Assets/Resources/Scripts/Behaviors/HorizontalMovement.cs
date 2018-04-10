using UnityEngine;
using System.Collections;

public class HorizontalMovement : BaseBehavior
{
    [SerializeField]
    private float _movementSpeed = 2f;

    private Vector3 _previousMove = Vector3.zero;

    protected override void Awake()
    {
        base.Awake();
    }
    
    private void Update()
    {
        bool willMove = _inputState.IsPressed(Buttons.LEFT) || _inputState.IsPressed(Buttons.RIGHT);
        //Debug.Log(willMove);
        if (willMove)
        {
            int multiplier = _inputState.IsPressed(Buttons.LEFT)
                ? (int)HorisontalDirections.LEFT
                : (int)HorisontalDirections.RIGHT;

            //var moveSpeed = (_movementSpeed - Mathf.Abs(_body.velocity.x)) * multiplier;
            var moveSpeed = _movementSpeed;

            var axis = this.transform.right.normalized;
            var moveAxis = Vector3.right;

            var moveAmount = axis * moveSpeed;
            _body.AddForce(_previousMove * -1, ForceMode.VelocityChange);
            _body.AddForce(moveAmount, ForceMode.VelocityChange);
            _previousMove = moveAmount;
        }
    }
}