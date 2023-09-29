using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveGameArea : MonoBehaviour
{

    private Vector3 fixed_position;
    private Vector3 velocity;

    void FixedUpdate()
    {
        // apply previous velocity
        fixed_position += velocity * Time.fixedDeltaTime;

        // calculate new velocity
        velocity = new Vector3(0.0f, 0.0f, 10.0f);
    }

    void Update()
    {
        // recalculate smoothed position of object
        transform.position = fixed_position + velocity * (Time.time - Time.fixedTime);
    }

}
