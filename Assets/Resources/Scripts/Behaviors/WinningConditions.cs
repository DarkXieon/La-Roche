using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.Linq;

public class WinningConditions : NetworkBehaviour
{
    public PlayerStats[] stats;
    public PlayerConditionState[] playerConditions;
    public GameObject[] players;
    private List<int> winnerIndexList; // the list of everyone with the highest score (only more than one item if a tie)
    //private bool tie;
    protected GameOverlay[] overlays;
    
    public void GetBestPlayer()
    {
        if (players.Length != 0)
        {
            int highEliminations = 0;  // Highest Elimination value
            int lowOuts = 0; // Highest Out value
            winnerIndexList = new List<int>();

            foreach (var stat in this.stats)
            {
                //if (stat.Eliminations >= tempStat.Eliminations) // if the the current stat is greater than the temp, make a new high eliminations
                if(stat.Eliminations > highEliminations || (stat.Eliminations == highEliminations && stat.Outs < lowOuts))
                {
                    highEliminations = stat.Eliminations;
                    lowOuts = stat.Outs;
                    Debug.Log("new high elimination");
                }
                //if (stat.Outs <= tempStat.Outs) // check if the current stat has a lower outs number
            }

            for(int i = 0; i < stats.Length; i++) // Check for ties
            {
                var stat = stats[i];

                if (stat.Eliminations == highEliminations && stat.Outs == lowOuts)
                {
                    winnerIndexList.Add(i); // add to list of players who tied
                }
            }
            /*
            if (winnerIndexList.Count == 1)
            {
                tie = false;
            }
            else
                tie = true;
            */
            Debug.Log(lowOuts + " low outs  and " + highEliminations + " best eliminations"); // just a test of how many the best player got

            var winningPlayers = winnerIndexList
                .Select(index => players[index])
                .ToArray();

            WinConditionMet(winningPlayers);
        }
    }

    protected void SetPlayersAndStats()
    {
        players = FindObjectsOfType<GameObject>()
            .Where(obj => obj.tag == "Player")
            .ToArray();

        players.ToList().ForEach(player => Debug.Log(player.GetComponent<PlayerStats>().PlayerName));
        
        stats = new PlayerStats[players.Length];
        playerConditions = new PlayerConditionState[players.Length];
        overlays = new GameOverlay[players.Length];

        for (int i = 0; i < stats.Length; i++)
        {
            stats[i] = players[i].GetComponent<PlayerStats>(); // get each players stats
            playerConditions[i] = players[i].GetComponent<PlayerConditionState>(); // get each players stats
            overlays[i] = players[i].GetComponent<GameOverlay>();
        }
    }
    
    protected bool OnePlayerLeft()
    {
        int playersLeft = playerConditions
            .Where(player => !player.IsOut)
            .Count();

        return playersLeft == 1;
    }

    protected void WinConditionMet(params GameObject[] winners)
    {
        winners
            .Select(winner => winner.GetComponent<PlayerStats>())
            .ToList()
            .ForEach(winner =>
            {
                Debug.Log(string.Format("Winner got {0} eliminations", winner.Eliminations));
                Debug.Log(string.Format("Winner got out {0} times", winner.Outs));
            });

        if(winners.Length == 1)
        {
            string overlayMessage = string.Format("{0} won the game!", winners[0].GetComponent<PlayerStats>().PlayerName);

            foreach(GameOverlay overlay in overlays)
            {
                overlay.CurrentMessage = overlayMessage;
            }
        }
        else
        {
            string nameString = "";

            for(int i = 0; i < overlays.Length; i++)
            {
                string playerName = winners[i].GetComponent<PlayerStats>().PlayerName;

                if (i == overlays.Length - 2)
                {
                    playerName += ", and ";
                }
                if(i < overlays.Length - 2)
                {
                    playerName += ", ";
                }

                nameString += playerName;
            }
            
            string overlayMessage = string.Format("{0} won the game!", nameString);

            foreach (GameOverlay overlay in overlays)
            {
                overlay.CurrentMessage = overlayMessage;
            }
        }
    }
}