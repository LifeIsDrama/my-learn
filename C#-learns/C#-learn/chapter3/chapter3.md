```code
// 定义1个变量
int i;
// 定义3个变量
string str1, str2, str3;

// 定义+ 初始化
int a = 928;
string x = "支付宝", y = "微信", z = "银联";

// 为多个同类型变量赋值，代码可行，不建议使用
int aa, b, c, d, e;
aa = b = c = d = e = 0;
```
---
<font color="red">**全局变量、局部变量**</font>

- 定义全局变量时，可以不用初始化。整形、浮点型初始化为0，布尔类型初始化为false

```code
class Test {
    // 实例变量 成员变量
    int x = 45;

    // 静态变量,可以“类名.静态变量”的⽅式在其他类内使⽤
    static int y = 90;
}  
```
---
C#中变量有两种类型：值类型、引用类型。

<font color="red">**值类型**</font>：
- 值类型存在栈中
- 值类型从System.ValueType继承而来。
- 值类型包括整形、浮点型、字符型


**整形**

|  有符号   | 无符号  |  
|  ----  | ----  |
| sbyte  | byte |
| short  | ushort |
| int  | uint |
| long  | ulong |

给整形赋值时，支持多种进制。
- 十进制
- 八进制：以0开头
- 十六进制：以0x开头

**浮点型**

|  类型   | 精度  |  
|  ----  | ----  |
| float  | 6~9位 |
| dobule  | 15~17位 |
| decimal  | 28~29位 |

- 小数数值默认被编译器认为是double类型。数值后加Ff，编译器解释为float类型。
- 1.12m会被当作decimal类型。

**布尔**

- bool类型不能转换为其他类型(转换编译器报错)
- bool类型只能赋值为true、false

<font color="red">**引用类型**</font>：
- 类、接口、数组、委托 都是引用类型。
- 引用存的是地址。用new在堆中创建对象，引用类型指向对象地址。
- 引用类型(引用的对象)由垃圾回收机制管理。
- 引用类型赋值前，值是null。

```q
值类型隐式派生于System.ValueType，System.Value派生于System.Object，
并重写了equals()方法，按照值来比较，而不是地址比较。
```

---
<font color="red">枚举类型</font>

枚举类型是一种独特的类型，用于定义一组常量。
- 定义枚举，如果不赋值，第一个枚举值是0，依次加1
- 其他枚举类型、int类型、枚举类型，可以相互转换

```code
// 定义枚举		名称=xx
//			名称
enum MyDate {
	Sun = 0,
	Mon = 1,
	Tue = 3,
	Wed,
	Thu,
	Fri = 8,
	Sat
}
```

---
<font color="red">类型转换、装箱、拆箱、自动装箱、自动拆箱</font>

类型转换包括：自动转换、显示转换。

- Convert用于类型转换。

装箱：值类型转换为引用类型。
拆箱：引用类型转换为值类型。
- 可以看出，装箱、拆箱得到的变量，他们互不影响。

```q
int i = 2048;
Object obj = i;
Console.WriteLine("i = {0}, obj = {1}", i, obj); //i = 2048, obj = 2048
			
i = 927;
Console.WriteLine("i = {0}, obj = {1}", i, obj); //i = 927, obj = 2048
```
---
<font color="red">常量</font>

常量就是值固定不变（编译时就已确定）的量。
- 创建常量，必须指定值。
- 常量只能赋一次值，只能在创建时候指定值。
```q
const duble PO = 3.1415926;	//正确的声明⽅法
cont int MyInt;			//错误：定义常量时未进⾏初始化
```




