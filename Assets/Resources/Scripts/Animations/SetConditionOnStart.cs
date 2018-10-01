using UnityEngine;

/// <summary>
/// Sets a boolean animator property when the animation starts running
/// </summary>
public class SetConditionOnStart : StateMachineBehaviour
{
    public string OnStartCondition; //name of property that will be set
    public bool OnStartValue; //value of property to be set

    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        animator.SetBool(OnStartCondition, OnStartValue); //set the property with name OnStartCondition with the value of OnStartValue
    }
}