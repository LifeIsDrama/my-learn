using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter3
{
	internal class 枚举
	{

		public static void today() {

			// 返回DaOfWeek，
			DayOfWeek today = DateTime.Now.DayOfWeek;
			MyDate day =  (MyDate)DateTime.Now.DayOfWeek;
			MyDate day2 = (MyDate)10;

			Console.WriteLine(today);
			Console.WriteLine(day);
			Console.WriteLine(day2);
		}
	}

	enum MyDate {

		Sun = 0,
		Mon = 1,
		Tue = 3,
		Wed,
		Thu,
		Fri = 8,
		Sat
	}
}
