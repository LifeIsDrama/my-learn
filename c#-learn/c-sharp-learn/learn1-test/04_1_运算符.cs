using System;
using System.Collections.Generic;
using System.Text;

namespace learn1
{
    [TestClass]
    internal class _04_1_运算符
    {

        [TestMethod]
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
            Console.WriteLine(d1 + d2 + d3);
        }
		

	}
}
