using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter5
{
	internal class StrBuilder
	{
		
		public static void str1() {
			int num = 1000;
			StringBuilder sb = new StringBuilder("华为荣耀");

			sb.Append("VS 小米红米");
			sb.AppendFormat("{0:C}", num);
			Console.WriteLine(sb);

			sb.Insert(0, "APK:");
			Console.WriteLine(sb);

			sb.Remove(0, 1);
			Console.WriteLine(sb);

			sb.Replace("PK", "对比");
			Console.WriteLine(sb);
		}


		public static void str2() {

			long startTime, endTime;

			startTime = DateTime.Now.Millisecond;
			String str = "";
			for (int i = 0; i < 10000; i++)
			{
				str = str + i;
			}
			endTime = DateTime.Now.Millisecond;
			Console.WriteLine("String消耗时间: " + (endTime - startTime));

			startTime = DateTime.Now.Millisecond;
			StringBuilder sb = new StringBuilder("");
			for (int i = 0; i < 10000; i++)
			{
				sb.Append(i);
			}
			endTime = DateTime.Now.Millisecond;
			Console.WriteLine("String消耗时间: " + (endTime - startTime));

			Console.WriteLine(startTime);
			Console.WriteLine(endTime);
		}
	}
}
