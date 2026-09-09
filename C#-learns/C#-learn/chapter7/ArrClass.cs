using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C__learn.chapter7
{
	internal class ArrClass
	{
		public static void arr1() {
			// 创建数组类型的引用变量变量 不创建数组对象(不初始化)
			string[] arr;

			// 创建引用变量，指向数组对象。
			string[] arr1 = new string[5];

			// 数组初始化
			int[] intArr = new int[] { 1, 2, 3, 4, 5 };
			int[] intArr2 = { 1, 2, 3, 4 };
			Console.WriteLine(intArr);
			Console.WriteLine(intArr2);
		}

		public static void arr2() {
			// 创建二维数组对象
			int[,] arr1 = new int[2,4];

			// 创建二维数组对象(麻烦的方式)
			int[][] arr2 = new int[3][];
			arr2[0] = new int[2];
			arr2[1] = new int[4];
			arr2[2] = new int[3];


			// 初始化二维数组
			int[,] arr3 = new int[,] { { 1, 2, 3 }, { 4, 5, 6 } };
			int[,] arr4 = { { 1, 2, 3 }, { 4, 5, 6 } };

			// 麻烦的方式
			int[][] arr5 = new int[2][];
			arr5[0] = new int[] { 1,2,3};
			arr5[1] = new int[] { 4,5,6};

			// 二维数组访问
			Console.WriteLine(arr3[1,1]);
			Console.WriteLine(arr5[1][1]);

			// 数组遍历
			for (int i = 0; i < arr3.GetLength(0); i++){
				for (int j = 0; j < arr3.GetLength(1); j++)
				{
					Console.Write("{0:C}\t", arr3[i, j]);
				}
				Console.WriteLine();
			}
			// 
			for (int i = 0; i < arr5.Length; i++)
			{
				for (int j = 0; j < arr5[i].Length; j++)
				{
					Console.Write("{0:C}\t", arr5[i][j]);
				}
				Console.WriteLine();
			}
		}

		public static void arr3(){
			
			int[] arr = new int[] {1,2,3,4,5 };
			foreach (var item in arr)
			{
				Console.WriteLine(item);
			}
		}
	}
}
