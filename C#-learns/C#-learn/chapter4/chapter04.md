|  表头   | 表头  |
|  ----  | ----  |
| 算数运算符  | `+` `-` `*` `/` `%`|
| 自运算符 | `++` `--` |
| 赋值运算符  | `=` `+=` `*=` `/=` `%=` `&=` `|=` `>>=` `<<=` `^=`|
| 关系运算符  |  返回bool类型 |
| 逻辑运算符  |  返回bool类型， `&&` `&` `||` `|` `!`|
| 位运算符  ||
| 其他运算符  |`is` `typeof`|

逻辑运算符
- `&&`是短路运算，前面为true，后面不运算

位运算符
- `&` - 按位与
- `|` - 按位或
- `~` - 按位取反
- `^` - 按位异或
- `X<<N` - 左移N位
- `X>>N` - 右移N位，补符号
- `&` - 按位与

```q
X<<N ⇄ X* 2的n次方
X>>N ⇄ X/ 2的n次方
```
<font color='red'>其他运算符</font>

**is**检查变量是否是特定类型，是返回true，不是返回false

```code
int i = 12;
bool res = i is long;
Console.WriteLine(res); // false
```
**typeof**用于获取类型原型对象，也就是Type对象。
- typeof用于获取类型(值类型、引用类型)对应类型的Type对象。
- 每种类型都有对应的Type对象(原型对象)，Type对象保存了对应类型的信息。
```code
Type stringType = typeof(string);
Console.WriteLine("类型:{0}", stringType);
```