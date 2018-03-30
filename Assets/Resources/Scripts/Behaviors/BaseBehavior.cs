using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BaseBehavior : MonoBehaviour
{
    protected InputState _inputState;
    protected Rigidbody _body;

    protected virtual void Awake()
    {
        _inputState = GetComponent<InputState>();
        _body = GetComponent<Rigidbody>();
    }
}
