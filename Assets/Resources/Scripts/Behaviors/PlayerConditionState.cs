using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Networking;

public class PlayerConditionState : NetworkBehaviour
{
    public GameObject[] PlayersEliminated { get { return _playersGottenOut.ToArray(); } }

    public bool IsOut { get { return _isOut; } }

    private List<GameObject> _playersGottenOut;

    private PlayerStats _playerStats;
    private AnimationSwitcher _animationSwitcher;

    [SyncVar]
    private bool _isOut = false;
    
    private void Start()
    {
        _playersGottenOut = new List<GameObject>();

        _animationSwitcher = GetComponent<AnimationSwitcher>();
        _playerStats = GetComponent<PlayerStats>();
    }

    public void GetOut()
    {
        _isOut = true;

        _playerStats.AddOut();
        
        _playersGottenOut.Clear();
        
        _animationSwitcher.GetOut();
    }
    
    public void GetIn()
    {
        _isOut = false;
        
        _animationSwitcher.GetIn();
    }

    public void GetPlayerOut(GameObject player)
    {
        _playersGottenOut.Add(player);

        _playerStats.AddElimination();
    }
}