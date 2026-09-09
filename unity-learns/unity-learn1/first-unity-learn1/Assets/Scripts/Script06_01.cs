using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.GlobalIllumination;

public class Scenne06_01 : MonoBehaviour
{
    GameObject lightObj = null;

    // Start is called before the first frame update
    void Start()
    {
		lightObj = GameObject.Find("Directional Light");
		if (lightObj == null)
		{
			print("√ª’“µΩ");
		}
		else
		{
			Light lightCmp = lightObj.GetComponent<Light>();
			lightCmp.color = Color.cyan;
			print(lightCmp.color);
		}
	}

   

    // Update is called once per frame
    void Update()
    {
        
    }
}
