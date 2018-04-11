using UnityEngine;
using System.Collections;

public class PlayerFrozenState : MonoBehaviour
{
    public bool IsFrozen { get { return _isFrozen; } }

    [SerializeField]
    private bool _isFrozen = false;
    
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