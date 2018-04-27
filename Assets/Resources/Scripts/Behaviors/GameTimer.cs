using System.Collections;

using UnityEngine;

public class GameTimer : WinningConditions
{
    public bool gameStarted = false;

    public float timeLeft;
    public bool stop;

    private float minutes;
    private float seconds;
    
    protected void Awake()
    {
        stop = false;
		gameStarted = true;
        
        SetPlayersAndStats();
        StartCoroutine(updateCoroutine());
    }

    public void Update()
    {
        if (OnePlayerLeft())
        {
            stop = true;
        }
        if (!stop)
        {
            SetTime();

            if (minutes <= 0 && seconds <= 0)
            {
                stop = true;
                minutes = 0;
                seconds = 0;
            }
        }
        if (stop)
        {
            GetBestPlayer();
        }
    }
    
    private void SetTime()
    {
        timeLeft -= Time.deltaTime;
        minutes = Mathf.Floor(timeLeft / 60);
        seconds = timeLeft % 60;
        if (seconds > 59)
            seconds = 59;
    }

    private IEnumerator updateCoroutine()
    {
        while(!stop)
        {
            foreach(var overlay in overlays)
            {
                overlay.MatchTimeLeft = string.Format("{0:0}:{1:00}", minutes, seconds);
            }
            
            yield return new WaitForSeconds(0.2f);
        }
    }
}