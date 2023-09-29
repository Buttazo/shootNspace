using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotorRotate : MonoBehaviour
{
    public Vector3 rotateAmount;
   

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
       
    }

    private void FixedUpdate()
    {
        transform.Rotate(rotateAmount * Time.deltaTime);
    }
}
