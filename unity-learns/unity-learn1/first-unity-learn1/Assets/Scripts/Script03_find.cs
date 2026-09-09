using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Script03_find: MonoBehaviour
{
    // 脚本Enable后，被调用一次
    // 初始化操作，例如查找组件
    // Start is called before the first frame update
    void Start()
    {
        // 
        GameObject ball1 = GameObject.Find("ball1");

        if (ball1 == null)
        {
            print("找不到ball1");
        } else
        {
            print(ball1.transform.position);
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
