using UnityEngine;
using System.Collections;
using System;

public class InputManager : MonoBehaviour
{
    public InputAxisState[] Inputs;
    public InputState InputState;

    private void Update()
    {
        foreach (var input in Inputs)
        {
            InputState.SetButtonValue(input.Button, input.IsPressed, input.Value);
        }
    }
}