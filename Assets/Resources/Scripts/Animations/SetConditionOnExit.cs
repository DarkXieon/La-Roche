using UnityEngine;

/// <summary>
/// Sets a boolean animator property when the animation stops running
/// </summary>
public class SetConditionOnExit : StateMachineBehaviour
{
    public string OnExitCondition; //name of property that will be set
    public bool OnExitValue; //value of property to be set

    // OnStateExit is called when a transition ends and the state machine finishes evaluating this state
    public override void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        animator.SetBool(OnExitCondition, OnExitValue);
    }
}