using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter5
{
	internal class Str
	{

		public static void str() {
			string str = "C#编程词典";

			// 字符串连接
			String s1 = "hello ";
			string s2 = "world";
			string s = s1 + s2;
			Console.WriteLine(s);
		}

		public static void str2() {

			string s1 = "aaaaa";
			string s2 = new String('a',5);

			Console.WriteLine("s1 == s2: {0}", s1 == s2);
			Console.WriteLine("s1.compareTo(s2): {0}", s1.CompareTo(s2));
			Console.WriteLine("Compare: {0}", string.Compare(s1, s2));
		}


		public static void str3() {

			Console.WriteLine(string.Format("Π取两位小数:{0:F2}", Math.PI));
			Console.WriteLine(string.Format("科学计数法:{0:E2}", 12000.1));
			Console.WriteLine(string.Format("十六进制:{0:D7}", 33));
			Console.WriteLine(string.Format("十六进制:{0:X7}", 33));
			Console.WriteLine(string.Format("金额:{0:C2}", 1251 + 3950));
			Console.WriteLine(string.Format("分隔符显示:{0:N2}", 12800.55));
			Console.WriteLine(string.Format("哈哈哈{0:p0},哈哈哈{1:p0}", 0.01, 0.99));
		}


		public static void str4() {

			DateTime date = DateTime.Now;
			string dateStr = String.Format("{0:D}", date);
			Console.WriteLine(dateStr);

			int money = 222;
			Console.WriteLine(money.ToString("C"));

			DateTime now = DateTime.Now;
			Console.WriteLine(now.ToString("D"));
		}

		public static void str5() {
			string str = "你今天消耗了多少卡路里";
			string sub = str.Substring(2, 2);
			Console.WriteLine(sub);
		}

		public static void str6() {
			string str = "AI时代已经;到来,你还在等什么。";

			char[] separatorArr = { ',', ';' };
			string[] strArr = str.Split(separatorArr);
			for (int i = 0; i < strArr.Length; i++)
			{
				Console.WriteLine(strArr[i]);
			}
		}
	}
}
