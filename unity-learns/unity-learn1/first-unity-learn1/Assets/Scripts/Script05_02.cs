using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Script05_02 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        // 获取立方体的Transform组件
        Transform transform = (Transform)gameObject.GetComponent(typeof(Component));
        Transform transform1 = this.gameObject.GetComponent<Transform>();

        // 打印获取到的Component
        print(transform == transform1);
        print(transform1.position);
        print(transform1.rotation);
        print(transform1.localScale);
        

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
