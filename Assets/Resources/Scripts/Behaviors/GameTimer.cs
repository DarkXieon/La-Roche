using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameTimer : WinningConditions
 {

	public bool gameStarted = false;
	public Text timerText;

  public float timeLeft = 10.0f;
  public bool stop = true;

  private float minutes;
  private float seconds;

	public void Awake()	{
			timerText = GetComponent<Text>() as Text;
    	stop = false;
			gameStarted = true;
    	Update();
    	StartCoroutine(updateCoroutine());
		}

	public void Update() {
    	if(stop) {
				GetBestPlayer();
				return;
			} else {
				  timeLeft -= Time.deltaTime;
				  minutes = Mathf.Floor(timeLeft / 60);
				  seconds = timeLeft % 60;
				  if(seconds > 59) seconds = 59;
				  if(minutes < 0) {
				      stop = true;
				      minutes = 0;
				      seconds = 0;
					}
			}
		}

    private IEnumerator updateCoroutine(){
        while(!stop){
            timerText.text = string.Format("{0:0}:{1:00}", minutes, seconds);
            yield return new WaitForSeconds(0.2f);
        }
    }
}
