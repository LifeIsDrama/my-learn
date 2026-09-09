using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Script03_find_tagnames : MonoBehaviour
{
    // 脚本Enable后，被调用一次
    // 初始化操作，例如查找组件
    // Start is called before the first frame update
    void Start()
    {
        GameObject[] arr = GameObject.FindGameObjectsWithTag("ball");

        if(arr.Length == 0)
        {
            print("找不到");
        } else
        {
            foreach (GameObject item in arr)
            {
                print(item.name);
                print(item.transform.position);
            }
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
