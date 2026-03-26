using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Remoting.Metadata.W3cXsd2001;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter6
{
	internal class IfClass
	{

		public static void if1() {

			int num = Convert.ToInt32(Console.ReadLine());
			if(num %2 == 0) {
				Console.WriteLine("偶数");
			}
		}

		public static void if2(){
			Console.Write("请输入一个月份:");
			int month = int.Parse(Console.ReadLine());

			string seasonStr = "";
			switch (month)
			{
				case 12:
				case 1:
				case 2:
					seasonStr = "冬季";
					break;
				case 3:
				case 4:
				case 5:
					seasonStr = "春季";
					break;
				case 6:
				case 7:
				case 8:
					seasonStr = "夏季";
					break;
				case 9:
				case 10:
				case 11:
					seasonStr = "秋季";
					break;
				default:
					seasonStr = "月份输入错误";
					break;
			}


			Console.WriteLine(seasonStr);
		}
	}
}
