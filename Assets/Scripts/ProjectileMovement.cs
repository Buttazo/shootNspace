using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileMovement : MonoBehaviour
{

    public float moveSpeed;
    public Rigidbody rb;
    public float deadZone;
    

    // Start is called before the first frame update
    void Start()
    {
        rb = this.GetComponent<Rigidbody>();
        gameObject.tag = "Projectile";
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.z < deadZone)
        {
            Debug.Log("Projectile deleted");
            Destroy(gameObject);
        }


    }

    private void FixedUpdate()
    {
        rb.AddForce(0, 0, moveSpeed);
    }

    private void OnCollisionEnter(Collision collision)
    {
        Destroy(gameObject);
    }

}
