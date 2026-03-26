<font color="red">switch</font>

switch语句中，条件表达式的类型必须是：sbyte、byte、short、ushort、int、uint、long、ulong、char、string、枚举。

最多只能有一个default语句块。

```c#
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
```


--- 

<font color="red">goto语句</font>

goto语句可以跳转到对应标签、所在switch的case标签、所在switch的default标签。

```c#
goto [标签]
goto case [参数表达式]
goto default
```

```c#
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
```