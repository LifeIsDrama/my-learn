using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter3
{
    class 变量常量
    {
        public static void define() {
            // 定义1个变量
            int i1;
            // 定义3个变量
            string str1, str2, str3;

            // 定义+ 初始化
            int a = 928;
            string x = "支付宝", y = "微信", z = "银联";

            // 为多个同类型变量赋值，代码可行，不建议使用
            int aa, b, c, d, e;
            aa = b = c = d = e = 0;



            Console.WriteLine("定义完了");

			// 循环输出
			for (int i = 0; i < 10; i++)
			{
                Console.WriteLine(i.ToString());
			}
                
            // 创建程序 输出
            int ls = 927;
            byte shj = 244;
            Console.WriteLine("ls = {0}", ls);
            Console.WriteLine("shj = {0}", shj);


            // bool类型
            bool bb = false;
          
		}

    }
}
