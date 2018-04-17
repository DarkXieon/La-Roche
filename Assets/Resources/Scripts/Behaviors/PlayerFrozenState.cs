using UnityEngine;
using System.Collections;
using UnityEngine.Networking;

public class PlayerFrozenState : NetworkBehaviour
{
    public bool IsFrozen { get { return _isFrozen; } }

    [SerializeField] [SyncVar]
    private bool _isFrozen = false;
    
    //[SyncVar]
    private float? _timeLeft;

    private void Update()
    {
        if(_timeLeft != null)
        {
            if(_timeLeft.Value > 0)
            {
                _timeLeft -= Time.deltaTime;
            }
            else
            {
                UnFreeze();
            }
        }
    }

    public void UnFreeze()
    {
        _isFrozen = false;

        _timeLeft = null;
    }

    public void Freeze()
    {
        InternalFreeze(null);
    }

    public void FreezeOnTimer(float time)
    {
        InternalFreeze(time);
    }

    private void InternalFreeze(float? time)
    {
        if(IsFrozen && _timeLeft == null)
        {
            Debug.Log("Tried to freeze when already indefinatly frozen.");

            return;
        }
        
        _timeLeft = time;

        _isFrozen = true;
    }
}