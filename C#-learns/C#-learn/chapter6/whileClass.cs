using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter6
{
	internal class whileClass
	{

		public static void for1() {

			string[] strArr = new string[] { "支付宝", "微信支付", "QQ支付", "银联", "京东白条" };

			int i = 0;
			while(i < strArr.Length) {
				Console.WriteLine(strArr[i]);
				i++;
			}
		}

		public static void for2(){

			string[] strArr2 = new string[] { "世界杯", "欧洲杯", "欧冠" };

			int i = 0;
			do
			{
				Console.WriteLine(strArr2[i]);
				i++;
			} while (i < strArr2.Length);
		}

		public static void for3()
		{

			int former = 1;
			int pre = 1;
			int cur = 1;

			for (int i = 3; i <= 30; i++)
			{
				former = pre;
				pre = cur;
				cur = pre + former;
			}

			Console.WriteLine(cur);


			for (int row = 1; row <= 9; row++)
			{
				for (int col = 1; col <= row; col++)
				{
					Console.Write("{0}*{1}={2}\t", row, col, row * col);
				}
				Console.WriteLine();
			}
		}

		public static void for4() {
			string[] arr = new string[] { "支付宝", "微信", "QQ支付", "银联", "京东白条" };

			string search = Console.ReadLine();
			for (int i = 0; i < arr.Length; i++)
			{
				if(arr[i] == search) {
					goto Found;
				}
			}
			Console.WriteLine("找到不到{0}", search);
			goto Finish;

		Found:
			Console.WriteLine("找到到了{0}",search);
		Finish:
			Console.WriteLine("查找完毕");
		}
	}
}
