using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter3
{
	internal class 类型转换
	{

		public static void convert() {

			double x = 19810927.0112;
			int y = Convert.ToInt32(x);
			Console.WriteLine(y);
			
			Console.WriteLine(MainClass.DIV);

			int i = 2048;
			Object obj = i;
			Console.WriteLine("i = {0}, obj = {1}", i, obj); //i = 2048, obj = 2048
			
			i = 927;
			Console.WriteLine("i = {0}, obj = {1}", i, obj); //i = 927, obj = 2048

			Console.WriteLine(MainClass.DIV);

			int j = 112;
			object obj1 = j;
			Console.WriteLine("j = {0}, obj1 = {1}", j, obj1);
			int k = (int)obj1;
			Console.WriteLine("obj1 = {0}, k = {1}", obj1, k);
		}
	}
}
