using System.Collections.Generic;
using System.Linq;

using UnityEngine;
using UnityEngine.Networking;

public class WinningConditions : NetworkBehaviour
{
    protected GameObject[] _players;
    protected PlayerConditionState[] _playerConditions;
    protected PlayerStats[] _stats;
    protected GameOverlay[] _overlays;

    protected bool matchOver;
    
    protected virtual void Awake()
    {
        SetPlayersAndStats();

        matchOver = false;
    }

    protected virtual void Update()
    {
        GameObject winner;

        if(!matchOver && OnePlayerLeft(out winner))
        {
            DisplayWinners(winner);
        }
    }

    protected GameObject[] GetTopPlayers()
    {
        var comparer = new PlayerStatsComparer();

        var topPlayer = _stats
            .OrderByDescending(stat => stat, comparer)
            .First();

        var winningPlayers = _stats
            .Where(stat => comparer.Compare(topPlayer, stat) == 0)
            .Select(stat => stat.gameObject)
            .ToArray();

        return winningPlayers;
    }

    protected void DisplayWinners(params GameObject[] winners)
    {
        winners
            .Select(winner => winner.GetComponent<PlayerStats>())
            .ToList()
            .ForEach(winner =>
            {
                Debug.Log(string.Format("Winner got {0} eliminations", winner.Eliminations));
                Debug.Log(string.Format("Winner got out {0} times", winner.Outs));
            });

        string winnerNames = GetWinnerNames(winners);

        string overlayMessage = string.Format("{0} won the game!", winnerNames);

        foreach (GameOverlay overlay in _overlays)
        {
            overlay.CurrentMessage = overlayMessage;
        }
    }

    private void SetPlayersAndStats()
    {
        _players = FindObjectsOfType<GameObject>()
            .Where(obj => obj.tag == "Player")
            .ToArray();
        
        _stats = new PlayerStats[_players.Length];
        _playerConditions = new PlayerConditionState[_players.Length];
        _overlays = new GameOverlay[_players.Length];

        for (int i = 0; i < _stats.Length; i++)
        {
            _stats[i] = _players[i].GetComponent<PlayerStats>(); // get each players stats
            _playerConditions[i] = _players[i].GetComponent<PlayerConditionState>(); // get each players stats
            _overlays[i] = _players[i].GetComponent<GameOverlay>();
        }
    }
    
    private bool OnePlayerLeft(out GameObject winner)
    {
        var playersLeft = _playerConditions
            .Where(player => !player.IsOut);

        bool onePlayerLeft = playersLeft.Count() == 1;

        winner = onePlayerLeft
            ? playersLeft.First().gameObject
            : null;

        return onePlayerLeft;
    }

    private string GetWinnerNames(GameObject[] winners)
    {
        string nameString = "";

        for (int i = 0; i < winners.Length; i++)
        {
            string playerName = winners[i].GetComponent<PlayerStats>().PlayerName;

            if (i == _overlays.Length - 2)
            {
                playerName += ", and ";
            }
            if (i < _overlays.Length - 2)
            {
                playerName += ", ";
            }

            nameString += playerName;
        }

        return nameString;
    }

    protected class PlayerStatsComparer : IComparer<PlayerStats>
    {
        public int Compare(PlayerStats x, PlayerStats y)
        {
            if(x.Eliminations.CompareTo(y.Eliminations) != 0)
            {
                return x.Eliminations.CompareTo(y.Eliminations);
            }
            else
            {
                return x.Outs.CompareTo(y.Outs);
            }
        }
    }
}