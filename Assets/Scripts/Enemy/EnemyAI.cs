using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine.Utility;
using UnityEngine;
using UnityEngine.AI;
using Mirror;
using Random = UnityEngine.Random;

public class EnemyAI : NetworkBehaviour
{
    private NavMeshAgent _agent;
    [Header("Setup")] public LayerMask whatIsGround, whatIsPlayer;

    public GameObject testingProjectile;

    [Header("Patrolling")]
    //--- Patrolling
    public Vector3 walkPoint;

    private bool _walkPointSet;
    private Vector3 _walkPointOrigin;
    private bool _isReturning;
    public float walkPointRange;

    [Header("Attack")]
    //--- Attack
    public float timeBetweenAttacks;

    private bool _alreadyAttacked;

    [Header("States")]
    //--- States
    public float sightRange, attackRange;

    public bool playerInSightRange, playerInAttackRange;

    private ThirdPersonCharacter _character;

    private Animator _animator;
    private int _attackHash = Animator.StringToHash("Attack");

    void Awake()
    {
        _agent = this.GetComponent<NavMeshAgent>();
        _agent.updateRotation = false;
        _walkPointOrigin = transform.position;
        _character = this.GetComponent<ThirdPersonCharacter>();
        _animator = this.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 enemyPosition = transform.position;
        //Check for sight and attack range
        RaycastHit hit;
        Ray ray = new Ray(enemyPosition, Vector3.zero);
        Collider[] nearbyPlayers = Physics.OverlapSphere(enemyPosition, sightRange, whatIsPlayer);
        playerInSightRange = nearbyPlayers.Length != 0;
        playerInAttackRange = Physics.CheckSphere(enemyPosition, attackRange, whatIsPlayer);
        bool isTooFarAwayFromOrigin = Vector3.Distance(_walkPointOrigin, enemyPosition) > (walkPointRange * 2);

        if (playerInSightRange && !isTooFarAwayFromOrigin && !_isReturning)
        {
            Transform target = ClosestToThis(nearbyPlayers);
            if (playerInAttackRange) AttackPlayer(target);
            else ChasePlayer(target);
        }
        else
            Patrolling();
    }

    void Patrolling()
    {
        if (!_walkPointSet) SearchWalkPoint();
        if (_walkPointSet)
        {
            _agent.SetDestination(walkPoint);
            Vector3 amountToMove = _agent.remainingDistance > _agent.stoppingDistance
                ? _agent.desiredVelocity
                : Vector3.zero;
            _character.Move(amountToMove, false, false);
        }

        float distanceToOrigin = Vector3.Distance(transform.position, _walkPointOrigin);
        _isReturning = distanceToOrigin > walkPointRange;

        Vector3 distanceToWalkPoint = transform.position - walkPoint;
        Debug.Log(_agent.desiredVelocity.magnitude);
        //Walkpoint reached
        if (distanceToWalkPoint.magnitude < 1f || _agent.desiredVelocity.magnitude == 0)
            _walkPointSet = false;
    }

    void SearchWalkPoint()
    {
        //Calculate random point in range
        float randomZ = Random.Range(-walkPointRange, walkPointRange);
        float randomX = Random.Range(-walkPointRange, walkPointRange);

        walkPoint = new Vector3(_walkPointOrigin.x + randomX, transform.position.y, _walkPointOrigin.z + randomZ);

        if (Physics.Raycast(walkPoint, -transform.up, 2f, whatIsGround))
            _walkPointSet = true;
    }

    void ChasePlayer(Transform target)
    {
        _agent.SetDestination(target.position);
        Vector3 amountToMove = _agent.remainingDistance > _agent.stoppingDistance
            ? _agent.desiredVelocity
            : Vector3.zero;
        _character.Move(amountToMove, false, false);
    }

    void AttackPlayer(Transform target)
    {
        _agent.SetDestination(transform.position);
        Vector3 amountToMove = _agent.remainingDistance > _agent.stoppingDistance
            ? _agent.desiredVelocity
            : Vector3.zero;
        _character.Move(amountToMove, false, false);
        // transform.LookAt(target);

        if (!_alreadyAttacked)
        {
            //Attack logic
            // Rigidbody rb =
            //     Instantiate(testingProjectile, transform.position + (transform.forward * 1f), Quaternion.identity)
            //         .GetComponent<Rigidbody>();
            // rb.AddForce(transform.forward * 32f, ForceMode.Impulse);
            // rb.AddForce(transform.up * 8f, ForceMode.Impulse);
            transform.LookAt(target);
            _animator.SetTrigger(_attackHash);

            _alreadyAttacked = true;
            Invoke(nameof(ResetAttack), timeBetweenAttacks);
        }
    }

    void ResetAttack()
    {
        _alreadyAttacked = false;
    }

    Transform ClosestToThis(Collider[] objs)
    {
        Transform closest = null;
        float closestDistance = Mathf.Infinity;
        foreach (Collider obj in objs)
        {
            float distance = Vector3.Distance(obj.transform.position, transform.position);
            if (distance < closestDistance)
                closest = obj.transform;
        }

        return closest;
    }

    private void OnDrawGizmos()
    {
        Gizmos.DrawCube(_walkPointOrigin, new Vector3(1f, 1f, 1f));
        Gizmos.DrawWireSphere(_walkPointOrigin, walkPointRange);
    }
}