<font color="red">Char</font>

Char类型用于存储字符，占2个字节。
- char只能定义一个Unicode字符。

Char类提供了很多方法：
- isXX() 判度Unicode字符是否是某个类型
- toXX() 转换为其他Unicode字符

|方法| 说明|
|-|-|
|isControl()|是否是控制字符|
|isDigit()|是否是十进制数|
|isHighSurrogate()|Char对象是否是高代理项|
|isLetter()|是否是字母|
|isLetterOrDigit()|是否是字母、十进制数|
|isLower()|是否是小写字母|
|isLowSurrogare()|Char对象是否是低代理项|
|isNumber()|是否是数字|
|isPunctuation()|是否是标点|
|isSeparator()|是否是分隔符|
|isSurrogate()|是否是代理项字符|
|isSurrogarePair()|Char对象是否形成代理项对|
|isSymbol()|是否是符号字符|
|isUpper()|是否是大写字母|
|isWhiteSpace()|是否是空白字符|
|parse()|转换成等效的Unicode字符|
|toLower()|转换成小写|
|toLowerInvariant()| 使用固定区域性规则，转换成小写|
|toString()|转换成字符串|
|toUpper()|转换成大写|
|toUpperInvariant()|按照区域性规则，转换成大写|
|tryParse()|把字符串转换成Unicode|


<font color="red">转义字符</font>

转义字符、字符、字符Unicode码，是三种不同的写法，有时可以对应同一个字符。

|方法| 说明|
|-|-|
|\n|换行符|
|\r|回车符|
|\t|制表符|
|\f|换页|
|\"|双引号|
|\'|单引号|
|\\|反斜线|
|\b|退格|

---
<font color="red">字符串</font>

- 字符串必须初始化后，才能使用。

<font color="blue">字符串连接</font>

- 一个字符串不能写在两行中。字符串过长，写成`"" + ""`的形式。

```C#
String s1 = "hello ";
string s2 = "world";
string s = s1 + s2;
```

<font color="blue">字符串比较</font>

- ==在C#中比较字符串内容，和Java不同

|方法| 说明|
|-|-|
|==| 比较字符串内容 |
|compare(str1, str2)| 静态方法 |
|compare(str1, str2,ignoreCase)||
|str1.compareTo(str2)|实例方法|
|str1.equals(str2)|静态、实例|
|equals(str1,str2)||

<font color="blue">字符串格式化</font>


|方法| 说明|
|-|-|
|String.Format("format", ...param) | 格式化 |
- 占位符格式为`{索引[,对齐方式][:格式化字符串]}` 

**数值格式化**

实际开发中，数值有多种显示方式：货币、百分比等。

|格式| 名称 |  示例|
|-|-|-|
|`D` `d` | 十进制数字 | {0:D7}，指定7位宽度 |
|`X` `x` | 十六进制 | {0:X7}，指定7位宽度 |
|`F` `f` | 小数 | {0:F2}取两位小数：3.14 |
|`E` `e` | 科学计数法 | {0:E2}取两位 1.20E+004|
|`C` `c` | 货币 | {0:C2}，显示2位小数，￥5,201.00 |
|`N` `n` | 分隔符 |{0:N2},显示2位小数,12,800.55 |
|`P` `p` | 百分比格式 | {0:p}|

```C#
Console.WriteLine(string.Format("金额:{0:C}", 1251+3950));
Console.WriteLine(string.Format("科学计数法:{0:E}", 12000.1));
Console.WriteLine(string.Format("分隔符显示:{0:N}", 12800));
Console.WriteLine(string.Format("Π取两位小数:{0:F2}", Math.PI));
Console.WriteLine(string.Format("十六进制:{0:X4}", 33));
Console.WriteLine(string.Format("哈哈哈{0:p2},哈哈哈{1:P2}",0.000001, 0.99));
```
**日期格式化**

|格式| 名称|
|-|-|-|
|d|简短日期(YYYY-MM-dd)|
|D|完整日期(YYYY年MM月dd日)|
|t|简短时间(hh:mm)|
|T|完整时间(hh:mm:ss)|
|f|简短日期时间(YYYY-MM-dd hh:mm)|
|F|完整日期时间(YYYY年MM月dd日 hh:mm:ss)|
|g|简短可排序日期时间(YYYY-MM-dd hh:mm)|
|G|完整可排序日期时间(YYYY-MM-dd hh:mm:ss)|
|M、m|月日(MM月dd日)|
|Y、y|年月(YYY年MM月)|

也可以通过对应类型.toString()格式化。
```code
int money = 222;
Console.WriteLine(money.ToString("C"));

DateTime now = DateTime.Now;
Console.WriteLine(now.ToString("D"));
```
<font color="blue">字符串截取</font>

|格式| 名称|
|-|-|-|
|str.subString(idx, length)| 从idx开始,截取length位|
- 如果length>字符串长度，直接截取idx到最后

<font color="blue">字符串分割</font>

|格式| 名称|
|-|-|-|
|str.split(char[] sepArr)| 分割|
- 参数sepArr是字符数组char[]
- 返回字符串数组string[]
```code
string str = "AI时代已经;到来,你还在等什么。";

char[] separatorArr = { ',', ';' };
string[] strArr = str.Split(separatorArr);
for (int i = 0; i < strArr.Length; i++)
{
	Console.WriteLine(strArr[i]);
}
```
<font color="blue">插入和填充</font>

|格式| 名称|
|-|-|-|
|str.Insert(idx, str1)|插入|
|str.padLeft(toLen, ch)|填充ch到toLen宽度|
|str.padRight(toLen, ch)|填充ch到toLen宽度|

- 如果想在最后插入，可以用`str.insert(str.Length,...)`
```C#
// insert()插入
string str = "梦想还是要有的，万一实现了呢?";
string str2 = str.Insert(0, "马云说:");
string str3 = str2.Insert(str2.Length, "你信吗？");
// 填充
string s = "*^__^*";
string s1 = s.PadLeft(s.Length+1, '(');
string s2 = s1.PadRight(s1.Length+1, ')');
Console.WriteLine(s2);
```

<font color="blue">字符串删除</font>

|方法| 含义|
|-|-|
|str.remove(idx, con)| 从idx位置上，删除con，包含idx|
|str.remove(idx)|删除idx到最后|
- con不能为0、负数。负数，报错。0，没有意义。

```c#
string str = ".NET也开源了！";
string str2 = str.Remove(4, 2);
```

<font color="blue">字符串复制</font>

|方法|含义|
|-|-|
|String.copy(str1)|复制字符串，返回str2|
|str.copyTo(sourceIdx, char[] dest, int destIdx, int count)||
- count的长度要小于sourceIdx到len，destIdx到destLen的长度，否则，会抛异常

```C#
string str1 = "hello world";
// reference equals:  true
string str2;
str2 = str1;
Console.WriteLine(object.ReferenceEquals(str1, str2));

// reference equals: false
string str3 = String.Copy(str1);
Console.WriteLine(object.ReferenceEquals(str1, str3));


string str = "机器学习和深度学习";
char[] dest = new char[str.Length];
str.CopyTo(0, dest, 0, 4);

Console.Write(dest);
```

<font color="blue">字符串替换</font>

|方法|含义|
|-|-|
|str.replace(oldChar, newChar)|替换,返回新str|
|str.replace(oldStr, newStr)||

```c#
string str = "one world,one dream";
string str2 = str.Replace(',', '-');
string str3 = str2.Replace("one world", "One World");
```

---

<font color="red">StringBuilder</font>

使用+生成新的字符串，内存开辟新空间，生成新的String对象。增加内存开销。

用StringBuilder来解决这个问题。


|构造| |
|-|-|
|StringBuilder(str, cap)||
- 根据str的内容创建StringBuilder
- cap表示StringBuilder的初始容量

StringBuilder位于System.Text命名空间，使用时，需要引入命名空间。

|方法||
|-|-|
|append()| 追加|
|appendFormat()|格式化，然后追加|
|insert()| 插入|
|remove()| 移除|
|replace()| 替换|

```C#
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
```
---

<font color="red">正则表达式</font>

进行字符串操作，需要按照某种规则，操作字符串。正则表达式用于表示这些规则。

<font color="blue">行定位符</font>

`^`表示行以xx开始,`$`表示行以xx结束。
```code
^tm // 匹配以tm开头、结尾
tm$
tm // 匹配包含tm的字符串
```
<font color="blue">元字符</font>

|元字符| 描述|
|-|-|
|||
























