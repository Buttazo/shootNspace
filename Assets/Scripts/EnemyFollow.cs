using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFollow : MonoBehaviour
{

    public GameObject target;
    public GameObject from;
    public float speed;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void FixedUpdate()
    {
        from.transform.position = Vector3.MoveTowards(from.transform.position, target.transform.position, speed);
    }

    // Update is called once per frame
    void Update()
    {
       
    }
}
