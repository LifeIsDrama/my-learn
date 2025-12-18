#include <stdio.h>

/*
	指针的基本使用
*/
void point_use() {

	int a = 10;
	// 指向地址
	int* pa = &a;

	// 指针解引用
	printf("%d", *pa);
}

/*
	指针类型 - 指针类型不同，指针步幅不同
*/
void point_type1() {
	char arr1[] = "hah";
	int arr2[] = { 1,2,3 };
	char* pc = arr1;
	int* pi = arr2;

	for (int i = 0; i < 3; i++)
	{
		printf("(int - %d,%p) || (char - %c,%p) \n", *(pi + i), pi + i, *(pc + i), pc + i);
	}
}

/*
	指针类型 - 指针类型不同，指针解引用操作字节不同。
*/
void point_type2() {
	// pi和pc指向同一地址
	int a = 0x11223344;
	int* pi = &a;
	char* pc = (char*)pi;

	// 打印输出pc、pi指向的地址
	printf("%p \n", pc);
	printf("%p \n", pi);

	// 通过pc解引用，char*指针修改int
	*pc = 5;
}

/*
	指针类型 - 不同指针类型解引用，类型不同，数据存储方式不一样
*/
void point_type3() {
	int a = 0;
	int* pi = &a;
	float* pf = (float*)&a;
	// 通过解引用方式赋值，按照指针类型转换成二进制，放入变量中
	// 调试的时候，按照int类型显示，所以值不一样
	*pf = 100;
	*pi = 100;
}


/*
	野指针 - 就是指针越界, 初始化成NULL
*/
void point_out() {
	// 指针没有初始化，直接使用，可能导致错误
	// 这可能被黑客利用，来修改内存，这时候如果程序不出错，会导致很大的问题
	int* p = NULL;
	*p = 10;

	// 会直接报错，可以使用错误处理机制
	int* pa = NULL;
	if (pa != NULL) {
		// 使用
		*p = 3;
	}
}

/*
	指针运算 - 包括3种，指针加常数(表示移动到下一位)
*/
void point_sub_add() {

	int arr[5] = { 1,2,3,4,5 };
	// 分别指向首尾
	int* pstart = arr;
	int* pend = (int*)(&arr + 1);
	// 计算长度
	int size = pend - pstart;

	int* pi = arr;
	// 指针比较，表示是否到了最后
	while (pi < pend) {
		printf("%d", *pi);
		pi++; // 指针加常数，表示指向下一个
	}
}




