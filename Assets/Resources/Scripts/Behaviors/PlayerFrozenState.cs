using UnityEngine;
using System.Collections;
using UnityEngine.Networking;

public class PlayerFrozenState : NetworkBehaviour
{
    public bool IsFrozen { get { return _isFrozen; } }

    [SerializeField] [SyncVar]
    private bool _isFrozen = false;
    
    [SyncVar]
    private float _timeLeft;

    private PlayerConditionState _playerCondition;

    private void Start()
    {
        _playerCondition = GetComponent<PlayerConditionState>();
    }

    private void Update()
    {
        if(isLocalPlayer && _playerCondition.IsOut && !_isFrozen)
        {
            Debug.Log("Is out and frozen");

            _isFrozen = true;
        }
        else if(isLocalPlayer && _isFrozen)
        {
            if(_timeLeft > 0)
            {
                _timeLeft -= Time.deltaTime;
            }
            else if(!_playerCondition.IsOut)
            {
                UnFreeze();
            }
        }
    }

    public void UnFreeze()
    {
        _isFrozen = false;
    }
    /*
    public void Freeze()
    {
        InternalFreeze(null);
    }
    */
    public void FreezeOnTimer(float time)
    {
        InternalFreeze(time);
    }

    private void InternalFreeze(float time)
    {
        /*
        if(IsFrozen && _timeLeft == null)
        {
            Debug.Log("Tried to freeze when already indefinatly frozen.");

            return;
        }
        */
        _timeLeft = time;

        _isFrozen = true;
    }
}