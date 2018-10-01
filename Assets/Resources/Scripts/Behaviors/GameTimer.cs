using System.Collections;
using System.Linq;

using UnityEngine;

/// <summary>
/// 
/// </summary>
public class GameTimer : WinningConditions
{
    [SerializeField]
    private float _timeLeft;

    private bool _stop;
    private float _minutes;
    private float _seconds;

    private bool _initilized = false;
    
    protected void Awake()
    {
        StartCoroutine(this.WaitForCondition(
            waitUntilTrue: gameTimer => FindObjectsOfType<GameObject>()
                .Where(obj => obj.tag == "Player")
                .All(player => player.GetComponent<PlayerStats>() != null),
            whenConditionTrue: () =>
            {
                SetPlayersAndStats();
                StartCoroutine(UpdateCoroutine());

                _stop = false;
                _initilized = true;
            }));
    }

    public void Update()
    {
        if(_initilized)
        {
            if (OnePlayerLeft())
            {
                _stop = true;
            }
            if (!_stop)
            {
                SetTime();

                if (_minutes <= 0 && _seconds <= 0)
                {
                    _stop = true;
                    _minutes = 0;
                    _seconds = 0;
                }
            }
            if (_stop)
            {
                var winners = GetTopPlayers();

                WinConditionMet(winners);
            }
        }
    }
    
    private void SetTime()
    {
        _timeLeft -= Time.deltaTime;
        _minutes = Mathf.Floor(_timeLeft / 60);
        _seconds = _timeLeft % 60;
        if (_seconds > 59)
            _seconds = 59;
    }
    
    private IEnumerator UpdateCoroutine()
    {
        while(!_stop)
        {
            foreach(var overlay in _overlays)
            {
                overlay.MatchTimeLeft = string.Format("{0:0}:{1:00}", _minutes, _seconds);
            }
            
            yield return new WaitForSeconds(0.2f);
        }
    }
}