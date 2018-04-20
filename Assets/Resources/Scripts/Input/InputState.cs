using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine.Networking;

public class InputState : NetworkBehaviour
{
    public HorisontalDirections RotationDirection = HorisontalDirections.RIGHT;
    public HorisontalDirections HorisontalDirection = HorisontalDirections.RIGHT;
    public LateralDirections LateralDirection = LateralDirections.FORWARD;
    
    public float AbsoluteXVelocity { get; private set; }
    public float AbsoluteYVelocity { get; private set; }
    public float AbsoluteZVelocity { get; private set; }

    private Rigidbody _body;
    private Dictionary<Buttons, ButtonState> _buttonStates; //This will be used to track all of the button states

    protected void OnEnable()
    {
        this._body = this.GetComponent<Rigidbody>();

        this._buttonStates = new Dictionary<Buttons, ButtonState>();
    }

    private void FixedUpdate()
    {
        if(_body != null)
        {
            this.AbsoluteXVelocity = Mathf.Abs(this._body.velocity.x); //This may be useful later once movement, throwing, and jumping are all finished
            this.AbsoluteYVelocity = Mathf.Abs(this._body.velocity.y); //This may be useful later once movement, throwing, and jumping are all finished
            this.AbsoluteZVelocity = Mathf.Abs(this._body.velocity.z); //This may be useful later once movement, throwing, and jumping are all finished
        }
    }

    public void SetButtonValue(Buttons key, bool isPressed, float value)
    {
        ButtonState state;
        
        if (!this._buttonStates.TryGetValue(key, out state)) //Test if the key is in the dictionary
        {
            this._buttonStates.Add(key, new ButtonState()); //If not, add it

            state = this._buttonStates[key]; //Then set our variable to it
        }

        if (state.IsPressed && !isPressed) //If the button WAS being pressed but now it isn't...
        {
            state.HoldTime = 0; 
        }
        else if (state.IsPressed && isPressed) //If the button is being held...
        {
            state.HoldTime += Time.deltaTime;
        }

        state.IsPressed = isPressed;

        state.Value = value;
    }

    public bool IsPressed(Buttons key)
    {
        ButtonState keyState;
        
        if (_buttonStates.TryGetValue(key, out keyState)) //Test if the key is in the dictionary
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
        
        if(_buttonStates.TryGetValue(key, out keyState)) //Test if the key is in the dictionary
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
        
        if (_buttonStates.TryGetValue(key, out keyState))
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