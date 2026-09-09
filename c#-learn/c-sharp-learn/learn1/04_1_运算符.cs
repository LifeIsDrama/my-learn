using System;
using System.Collections.Generic;
using System.Text;

namespace learn1
{
    internal class _04_1_运算符
    {
        static void calc()
        {
            // 定义变量
            double d1, d2, d3;

            // 设置标题
            Console.Title = "简单的计算器";
            // 获取输入
            Console.Write("请输入第一个数");
            d1 = Double.Parse(Console.ReadLine());
			Console.Write("请输入第二个数");
			d2 = Double.Parse(Console.ReadLine());
			Console.Write("请输入第三个数");
			d3 = Double.Parse(Console.ReadLine());
            // 运算输出
            Console.WriteLine("{0} + {1} + {2}= {3}",d1,d2,d3,d1 + d2 + d3);
        }


        static void cmpSymbol()
        {
            int num1 = 4, num2 = 7;
            Console.WriteLine("num1和num2比较:" + (num1 > num2));
        }

        static void bitSymbol()
        {
            int n = 4;
            Console.WriteLine(n << 2);
        }

        static void isSymbol()
        {
            int n = 2;
            Console.WriteLine(n is bool);
        }

       static void Main(string[] args)
       {
			isSymbol();
	   }

	}
}
