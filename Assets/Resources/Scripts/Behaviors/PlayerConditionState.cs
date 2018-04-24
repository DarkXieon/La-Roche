using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using System.Collections.Generic;
using System.Linq;

public class PlayerConditionState : NetworkBehaviour
{
    public GameObject[] PlayersEliminated { get { return _playersGottenOut.ToArray(); } }

    public bool IsOut { get { return _isOut; } }

    private List<GameObject> _playersGottenOut;

    private PlayerStats _playerStats;

    [SyncVar]
    private bool _isOut = false;
    
    private void Start()
    {
        _playersGottenOut = new List<GameObject>();

        _playerStats = GetComponent<PlayerStats>();
    }

    public void GetOut()
    {
        _isOut = true;

        _playerStats.AddOut();

        //_playersGottenOut.ForEach(player => player.GetIn());

        _playersGottenOut.Clear();
    }
    
    public void GetIn()
    {
        _isOut = false;
    }

    public void GetPlayerOut(GameObject player)
    {
        //var playerConditionState = player.GetComponent<PlayerConditionState>();

        //Debug.Log(playerConditionState.name);

        //playerConditionState.GetOut();

        _playersGottenOut.Add(player);

        _playerStats.AddElimination();
    }
}