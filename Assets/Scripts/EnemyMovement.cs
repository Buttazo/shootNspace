using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour
{

    public float moveSpeed;
    public Rigidbody rb;
    public float deadZone = -10;
    public ScoreCounter scoreCounter;

    // Start is called before the first frame update
    void Start()
    {
        rb = this.GetComponent<Rigidbody>();

        transform.rotation = Random.rotation;

        scoreCounter = GameObject.FindGameObjectWithTag("Player").GetComponent<ScoreCounter>();

        Destroy(gameObject, 20.0f);


    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.z < deadZone)
        {
            Debug.Log("Center deleted");
            Destroy(gameObject);
        }
    }

    private void FixedUpdate()
    {
        rb.AddForce(Random.Range(-0.1f, 0.1f), Random.Range(-0.1f, 0.1f), moveSpeed);

    }

    private void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "Projectile")
        {
            Destroy(gameObject);

            Debug.Log("Triggered by Projectile");

            ScoreCounter.scoreValue += 1;

        }

    }
}


