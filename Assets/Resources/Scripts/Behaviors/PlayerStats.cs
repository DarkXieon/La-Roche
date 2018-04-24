using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PlayerStats : NetworkBehaviour
{
    private static int _indexOfNext = 0;
    
    public int Eliminations { get { return _eliminations; } }
    
    public int Outs { get { return _outs; } }
    
    public int PlayerNumber { get { return _playerNumber; } } // This is to identify each player seperately

    //[SyncVar]
    private int _eliminations;

    //[SyncVar]
    private int _outs;

    [SyncVar]
    private int _playerNumber;

    private void Awake()
    {
        if(isServer)
        {
            _eliminations = 0;
            _outs = 0;
            _playerNumber = _indexOfNext;

            _indexOfNext++;
        }
    }

    public void AddElimination()
    {
        _eliminations++;

        //CmdAddElimination();
    }

    [Command]
    private void CmdAddElimination()
    {
        _eliminations++;
    }

    public void AddOut()
    {
        _outs++;

        //CmdAddOut();
    }

    [Command]
    private void CmdAddOut()
    {
        _outs++;
    }
}
