using UnityEngine;
using System.Collections;
using System;

public class LateralMovement : BaseBehavior
{
    [SerializeField]
    private float _movementSpeed = 2f;

    private bool _isMoving = false;

    private Vector3 _previousMove = Vector3.zero;

    protected override void Awake()
    {
        base.Awake();
    }

    private void Update()
    {
        bool willMoveForward = _inputState.IsPressed(Buttons.FORWARD) || _inputState.IsPressed(Buttons.BACK);
        bool willMoveHorizontal = _inputState.IsPressed(Buttons.LEFT) || _inputState.IsPressed(Buttons.RIGHT);

        Vector3 moveSpeed = Vector3.zero;

        if(willMoveForward)
        {
            int multiplier = _inputState.IsPressed(Buttons.BACK)
            ? (int)LateralDirections.BACKWARD
            : (int)LateralDirections.FORWARD;

            var axis = this.transform.forward.normalized;

            var speed = axis * _movementSpeed;

            moveSpeed += speed;
        }
        if(willMoveHorizontal)
        {
            int multiplier = _inputState.IsPressed(Buttons.LEFT)
                ? (int)HorisontalDirections.LEFT
                : (int)HorisontalDirections.RIGHT;

            var axis = this.transform.right.normalized;

            var speed = axis * _movementSpeed;

            moveSpeed += speed;
        }

        _body.velocity = moveSpeed;
        //_isMoving = willMove;
        //Debug.Log(willMove);
        //if (willMove)
        //{

        /*
        int multiplier = _inputState.IsPressed(Buttons.BACK)
            ? (int)LateralDirections.BACKWARD
            : (int)LateralDirections.FORWARD;

        //var moveSpeed = (_movementSpeed - Mathf.Abs(_body.velocity.z)) * multiplier;
        var moveSpeed = _movementSpeed;

        var axis = this.transform.forward.normalized;
        var moveAxis = Vector3.forward;

        var moveAmount = axis * moveSpeed;

        _body.AddForce(_previousMove * -1, ForceMode.VelocityChange);
        _body.AddForce(moveAmount, ForceMode.VelocityChange);

        _previousMove = moveAmount;*/
        }
    }

