using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Script03_find_tagname : MonoBehaviour
{
    // 脚本Enable后，被调用一次
    // 初始化操作，例如查找组件
    // Start is called before the first frame update
    void Start()
    {
        GameObject ball = GameObject.FindWithTag("ballno");

        if (ball == null)
        {
            print("null");
        } else
        {   // 打印名字、打印位置
            print(ball.name);
            print(ball.transform.position);
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
