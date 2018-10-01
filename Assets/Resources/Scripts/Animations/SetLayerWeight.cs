using UnityEngine;

/// <summary>
/// Sets the weight of the animaiton layer when the animation state starts running
/// </summary>
public class SetLayerWeight : StateMachineBehaviour
{
    public bool UseCurrentLayer; //should the layer this state is on dictate the layer to use? or should the layer index dictate it?
    public int LayerIndex; //the layer index to set the layer weight of
    public float LayerWeight; //the weight to set the layer to--a value from 0 to 1

    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        layerIndex = UseCurrentLayer //should we use the current layer? or not?
            ? layerIndex
            : LayerIndex;

        animator.SetLayerWeight(layerIndex, LayerWeight); //set the layer weight
    }
}