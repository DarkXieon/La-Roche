using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text;

public class InputState : MonoBehaviour
{
    public HorisontalDirections RotationDirection = HorisontalDirections.RIGHT;
    public HorisontalDirections HorisontalDirection = HorisontalDirections.RIGHT;
    public LateralDirections LateralDirection = LateralDirections.FORWARD;
    public float AbsoluteXVelocity = 0f;
    public float AbsoluteYVelocity = 0f;

    private Rigidbody _body;
    private Dictionary<Buttons, ButtonState> _buttonStates = new Dictionary<Buttons, ButtonState>();

    private void Awake()
    {
        _body = GetComponent<Rigidbody>();

        Cursor.lockState = CursorLockMode.Locked;
    }

    private void FixedUpdate()
    {
        AbsoluteXVelocity = Mathf.Abs(_body.velocity.x);
        AbsoluteYVelocity = Mathf.Abs(_body.velocity.y);
    }

    public void SetButtonValue(Buttons key, bool isPressed, float value)
    {
        if (!_buttonStates.ContainsKey(key))
        {
            _buttonStates.Add(key, new ButtonState());
        }

        var state = _buttonStates[key];

        if (state.IsPressed && !isPressed)
        {
            state.HoldTime = 0;
        }
        else if (state.IsPressed && isPressed)
        {
            state.HoldTime += Time.deltaTime;
        }

        state.IsPressed = isPressed;

        state.Value = value;
    }

    public bool IsPressed(Buttons key)
    {
        ButtonState keyState;

        var hasValue = _buttonStates.TryGetValue(key, out keyState);

        if (hasValue)
        {
            return keyState.IsPressed;
        }
        else
        {
            string message = string.Format("Value {0} not found in dictionary.", key.ToString());

            Debug.LogError(message, this);

            return false;
        }
    }

    public float GetButtonValue(Buttons key)
    {
        ButtonState keyState;

        var hasValue = _buttonStates.TryGetValue(key, out keyState);

        Debug.Log(_buttonStates.ContainsKey(key));

        if(hasValue)
        {
            return keyState.Value;
        }
        else
        {
            string message = string.Format("Value {0} not found in dictionary.", key.ToString());

            Debug.LogError(message, this);

            return 0f;
        }
    }

    public float GetButtonHoldTime(Buttons key)
    {
        ButtonState keyState;

        var hasValue = _buttonStates.TryGetValue(key, out keyState);

        if (hasValue)
        {
            return keyState.HoldTime;
        }
        else
        {
            string message = string.Format("Value {0} not found in dictionary.", key.ToString());

            Debug.LogError(message, this);

            return 0f;
        }
    }
}