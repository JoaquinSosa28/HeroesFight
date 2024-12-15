using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

public class AttackState : StateMachineBehaviour {

    [SerializeField] float stateTreshold = 0f;
    [SerializeField] int combo;

    private int stateTimeParam = Animator.StringToHash("stateTime");
    private int hasAttackParam = Animator.StringToHash("hasAttack");
    private int attackComboParam = Animator.StringToHash("attackCombo");

    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
        if (animator.GetFloat(stateTimeParam) < stateTreshold) {
            animator.ResetTrigger(hasAttackParam);
        }
    }

    public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
        animator.SetInteger(attackComboParam, combo);
    }

    public override void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
        animator.SetInteger(attackComboParam, 0);
        //This procudes some sort of error and some attacks are not recognized
        // animator.gameObject.SendMessage("MeleeAttackEnded");
    }
}
