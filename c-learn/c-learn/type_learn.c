#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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



void int_sign_unsign_test() {
	int a = -1;
	// 直接转译成补码，存入unsigend int中
	unsigned int b = -1;
	float f = -1.0;
	// int和unsigned比较 -> int提升为unsigned 啥也不做 -> -1补 -1补 比较
	bool isstrue = a == b;
	// int转换成float -> 比较
	bool isstrue1 = a == f;
	printf("%d", isstrue);
}


void int_sign_unsign_test1() {

	int a = 1;
	// -5直接转译成补码  -> 变量提升  ->存入unsigend int中
	unsigned int b = -5;
	
	// int提升  -> 补码运算  -> 然后放入int中
	int sum = a + b;
	printf("%d", sum);

	// 这种方式，是直接给定补码的方式
	int c = 0xfffffffb;
}


void char_unchar_printf() {
	int a = 0xf0000001;
	unsigned char* upc = &a;
	char* pc = &a;
	// 解引用后，chu和ch都是f0
	unsigned char chu = *(pc + 3);
	char ch = *(pc + 3);


	int i = chu;
	// 由此课件，chu和ch打印结果不同，是这里的原因。
	// 
	// 打印的时候，把ch/chu转化成int(根据符号位进行0填充，char和unchar在这里填充不同)，译码的结果就不同
	// 打印的时候，如果长度不一样，会先扩容，然后按格式打印
	printf("%d", *(pc + 3));
}


void char_unchar_mix_printf() {
	// 1 00000001 放入内存
	char c1 = 1;
	// -5译补码，11111011
	unsigned char c2 = -5;
	// 先提升为int, char补符号位 unchar 补0  ->  补码运算 补的零 + 1111 1100 -> 截断
	char c3 = c2 + c1;

	// 打印,填充符号位1， 打印 -4
	printf("%d", c3);
}

void char_jieduan() {
	int a = 0x0000ffff;

	// 截断后是ff, 译码的结果是-1
	char c1 = a;
	// 截断后是ff，译码的结果是2^8 = 256
	unsigned char c2 = a;

	// 调试观察一下截断后的内存
	int aa;
}

void char_tianchong() {
	char c = -128;

	printf("%u", c);
}

/**
	int和 unsigned 的比较过程
*/
void int_unsigend_compare() {
	// 通过内存观察，i1 i2 都是 0xffffffff 
	unsigned int i1 = 0 - 1;
	int i2 = 0 - 1;

	// 比较他们是否> 0  true/false
	// 其实不是，比较的时候，会自动把int转换成unsigned int
	// 大于小于 译码后比较
	// 先把0转换成unsigned,其实等于啥也没做  -> 按照unsigend int规则补码111 > 补码000
	bool b1 = i1 > 0;
	// 按照int规则 比较补码1111 < 0000
	bool b2 = i2 > 0;
	// i2转换成unsigned, 其实补码啥也不该  -> 按照unsigned规则比较 1111 = 1111
	// == 比较 直接比较补码
	bool b3 = i1 == i2;
}


void printf_test_int() {
	int a = 9;

	printf("%f", a);
}



