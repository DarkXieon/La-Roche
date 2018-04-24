using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public abstract class BaseBehavior : NetworkBehaviour
{
    protected InputState _inputState;
    protected Rigidbody _body;

    protected virtual void Start()
    {
        _inputState = GetComponent<InputState>();
        _body = GetComponent<Rigidbody>();
    }
}