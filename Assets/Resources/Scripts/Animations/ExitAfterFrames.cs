using UnityEngine;

/// <summary>
/// ExitAfterFrames causes the animation to end by setting a boolean value that causes a new animaiton to take over
/// </summary>
public class ExitAfterFrames : StateMachineBehaviour
{
    public int FramesBeforeExit;
    public string OnFramesCondition; //name of property that will be set
    public bool OnFramesValue; //value of property to be set

    private int _count; //number of frames that have currently ran
    
    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        _count = 0;
    }

    // OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
    public override void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        _count++;

        if (_count == FramesBeforeExit)
        {
            animator.SetBool(OnFramesCondition, OnFramesValue);
        }
    }
}
