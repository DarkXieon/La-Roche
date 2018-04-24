using UnityEngine;
using System.Collections;
using System;
using UnityEngine.Networking;

public class InputManager : NetworkBehaviour
{
    [SerializeField]
    private InputAxisState[] _inputs; //Array of inputs recieved from Input.GetAxis and stored for processing

    [SerializeField]
    private InputState _inputState; //The input state that is to be managed

    protected void Start()
    {
        foreach (var input in this._inputs)
        {
            this._inputState.SetButtonValue(input.Button, false, 0); //This updates all of the states of the button presses
        }
    }

    private void Update()
    {
        if(isLocalPlayer)
        {
            foreach (var input in this._inputs)
            {
                this._inputState.SetButtonValue(input.Button, input.IsPressed, input.Value); //This updates all of the states of the button presses
            }
        }
    }
}