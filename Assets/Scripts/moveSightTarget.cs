using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveSightTarget : MonoBehaviour
{
    public Rigidbody rb;
    public Vector2 movement;
    public float moveSpeed = 10.0f;

    // Start is called before the first frame update
    void Start()
    {
        rb = this.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        movement = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
    }

    private void FixedUpdate()
    {
        moveChraracter(movement);
    }

    void moveChraracter(Vector2 direction)
    {
        rb.AddForce(direction * moveSpeed);
        rb.AddTorque(direction * moveSpeed);


    }

}
