using System.Collections;
using System.Linq;

using UnityEngine;

/// <summary>
/// 
/// </summary>
public class GameTimer : WinningConditions
{
    private float _timeLeft;
    
    private float _minutes;
    private float _seconds;

    protected override void Awake()
    {
        base.Awake();

        StartCoroutine(UpdateCoroutine());
    }

    protected override void Update()
    {
        base.Update();

        SetTime();

        if(!matchOver && TimeUp())
        {
            matchOver = true;

            var winners = GetTopPlayers();

            DisplayWinners(winners);
        }
    }
    
    private void SetTime()
    {
        _timeLeft = Mathf.Min(0f, _timeLeft - Time.deltaTime);
        _minutes = Mathf.Floor(_timeLeft / 60);
        _seconds = _timeLeft % 60;
        if (_seconds > 59)
            _seconds = 59;
    }
    
    private bool TimeUp()
    {
        return _minutes <= 0 && _seconds <= 0;
    }

    private IEnumerator UpdateCoroutine()
    {
        while(!matchOver)
        {
            foreach(var overlay in _overlays)
            {
                overlay.MatchTimeLeft = string.Format("{0:0}:{1:00}", _minutes, _seconds);
            }
            
            yield return new WaitForSeconds(0.2f);
        }
    }
}