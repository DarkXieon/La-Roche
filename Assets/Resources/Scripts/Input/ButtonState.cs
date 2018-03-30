using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ButtonState
{
    public bool IsPressed { get; set; }
    public float Value { get; set; } //The Input.GetAxis value
    public float HoldTime { get; set; }
}
