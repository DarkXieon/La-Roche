using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using System.Collections.Generic;
using System.Linq;

public class PlayerConditionState : NetworkBehaviour
{
    public bool IsOut { get { return _isOut; } }

    private List<PlayerConditionState> _playersGottenOut;

    private PlayerStats _playerStats;

    [SyncVar]
    private bool _isOut = false;

    private void Start()
    {
        _playersGottenOut = new List<PlayerConditionState>();

        _playerStats = GetComponent<PlayerStats>();
    }

    public void GetOut()
    {
        _isOut = true;

        _playerStats.AddOut();

        _playersGottenOut.ForEach(player => player.GetIn());

        _playersGottenOut.Clear();
    }
    
    public void GetIn()
    {
        _isOut = false;
    }

    public void GetPlayerOut(PlayerConditionState playerConditionState)
    {
        playerConditionState.GetOut();

        _playersGottenOut.Add(playerConditionState);

        _playerStats.AddElimination();
    }
}