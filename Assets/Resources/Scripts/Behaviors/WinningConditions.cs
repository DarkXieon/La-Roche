using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinningConditions : MonoBehaviour
{
  private int currentPlayers;
  private PlayerStats[] stats;
  private List<int> tieIndexList = new List<int>();
  private int winnerIndex;
  private bool tie;


  private void GetBestPlayer()
  {
    if(currentPlayers == 0)
    {
      PlayerStats tempStat;
      int highEliminations = 0;  // Highest Elimination value
      int lowOuts = 0; // Highest Out value
      tempStat = stats[0]; // Start at the first stat

      foreach(var stat in this.stats)
      {
        if(stat.eliminations >= tempStat.eliminations) highEliminations = stat.eliminations;
        if(stat.outs <= tempStat.outs) lowOuts = stat.outs;
      }

      PlayerStats tempStat2;
      foreach(var stat in this.stats) // Check for ties
      {
        if (stat.eliminations == highEliminations && stat.outs == lowOuts)
        {
          tieIndexList.Add(stat.playerNumber);
        }
      }

      if(tieIndexList.Count == 1)
      {
        tie = false;
        winnerIndex = tieIndexList[0];
      }
      else
        tie = true;
   }
}
