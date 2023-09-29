using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public bool fixRotation = true;
    public float moveSpeed = 10.0f;
    public Vector2 movement;
    public float amount = 50f;
    public Rigidbody rb;
    public Transform target;
    public bool follow;
    public int scoreValue;
 
    
    // Start is called before the first frame update
    void Start()
    {
        rb = this.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        movement = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));

        if (follow == true)
        {
            transform.LookAt(target);
        }
        
    }

    private void FixedUpdate()
    {
        

        if (fixRotation == true)
        {
            rb.constraints = RigidbodyConstraints.FreezeRotation;
        }

        else
        {
            rb.constraints = RigidbodyConstraints.FreezePositionZ;
        }
    
        moveChraracter(movement);

    }

    void moveChraracter(Vector2 direction)
    {
        rb.AddForce(direction * moveSpeed);
        rb.AddTorque(direction * moveSpeed);


    }

  

}
