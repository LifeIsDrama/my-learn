using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Script05_01 : MonoBehaviour
{
    GameObject go;

    // 创建游戏对象 new GameObject()
    // 设置 setActive()设置是否可用
    // Start is called before the first frame update
    void Start()
    {   // 创建新对象，然后设置active
        //print("创建GameObject");
        //go = new GameObject("go");
        //go.SetActive(false);

        // 获取绑定的对象，然后设置active
        gameObject.SetActive(false);
        print(gameObject.name);

        

	}

    // Update is called once per frame
    void Update()
    {
        
    }
}
