#include <stdio.h>

/*
*  1. 全局变量
* 
*  2. 类型转换 - float和int比较时 类型转换的过程
*/

// 全局变量
int global_a = 20;

// 使用extern导入全局变量
extern int global_var;

// float和int比较，会先把int补码转换成floatIEEE格式，然后进行比较 
void main_typeLearn() {
	int i  = 1;
	float f = 1.0f;

	printf("%d \n", i == f);

	printf("%d \n", global_a);
}


