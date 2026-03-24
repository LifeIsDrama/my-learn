using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter4
{
	internal class 表达式
	{
		public static void calc() {
			int i = 927;
			int j = 112;
			Console.WriteLine(Math.Sin(i * i + j * j));
		}


		public static void calc1() {
			Console.Title = "计算器";
			Console.Write("第一个数字:");
			double d1 = double.Parse(Console.ReadLine());
			Console.Write("第二个数字:");
			double d2 = double.Parse(Console.ReadLine());
			Console.Write("第三个数字:");
			double d3 = double.Parse(Console.ReadLine());
			Console.WriteLine("加法结果为: {0} + {1} +{2} = {3}", d1, d2, d3, d1 + d2 + d3);

		}

		public static void calc2() {
			
			// is 判度是否是某种类型
			int i = 12;
			bool res = i is long;
			Console.WriteLine(res); // false

			// typeof() 返回对应类型的原型对象
			Type stringType = typeof(string);
			Console.WriteLine("类型: {0}", stringType);
		}
	}
}
