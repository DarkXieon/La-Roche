using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WinningConditions : MonoBehaviour
{
    public PlayerStats[] stats;
    public GameObject[] players;
    private List<int> winnerIndexList = new List<int>(); // the list of everyone with the highest score (only more than one item if a tie)
    private bool tie;

    public void Awake() {
      stats = GetComponents<PlayerStats> ();
    }
    public void GetBestPlayer()
    {
        players = GameObject.FindGameObjectsWithTag("Player");
        stats = new PlayerStats[players.Length];

        for(int i = 0; i < stats.Length; i++) {
          stats[i] = players[i].GetComponent<PlayerStats>(); // get each players stats
        }


        if (players.Length != 0)
        {
            PlayerStats tempStat;
            int highEliminations = 0;  // Highest Elimination value
            int lowOuts = 0; // Highest Out value
            int playerNumber = 0; // index of the player we are looking at
            tempStat = stats[0]; // Start at the first stat

            foreach (var stat in this.stats)
            {
                if (stat.Eliminations >= tempStat.Eliminations) // if the the current stat is greater than the temp, make a new high eliminations
                    highEliminations = stat.Eliminations;
                    Debug.Log("new high elimination");
                if (stat.Outs <= tempStat.Outs) // check if the current stat has a lower outs number
                    lowOuts = stat.Outs;
            }

            foreach (var stat in this.stats) // Check for ties
            {
                if (stat.Eliminations == highEliminations && stat.Outs == lowOuts)
                {
                    winnerIndexList.Add(stat.PlayerNumber); // add to list of players who tied
                }
            }

            if (winnerIndexList.Count == 1)
            {
                tie = false;
            }
            else
                tie = true;

          Debug.Log(lowOuts + " low outs  and " + highEliminations + " best eliminations"); // just a test of how many the best player got
          foreach (var number in this.winnerIndexList)
          {
          // Test to see winning player
          Debug.Log("Player #" + number + "Won the game");
          Text timerText = GetComponent<GameTimer> ().timerText;
          timerText.text = "Player " + number + " Won the game!";
          }

        }
    }
}
