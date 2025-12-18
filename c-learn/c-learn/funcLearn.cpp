#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <cstring>
#include <cmath>
#include "funcLearn.h"

/*
	基本类型 - 使用指针传值
*/
void swap(int* x, int* y) {
	int z = *x;
	*x = *y;
	*y = z;
}

void swap_main() {

	int a,b;
	scanf("%d %d",&a, &b);

	swap(&a,&b);
	printf("a is %d, b is %d", a, b);

	
}



/**
* 对于数组类型，形参int arr[] 是语法糖，本质类型是int* arr, 而不是int arr[]数组类型，长度需要传入
*/
int binary_search_func(int arr[], int size, int num) {
	
	int left = 0, right = size - 1;
	int mid, isFind = -1;
	while (left <= right) {
		mid = (left + right) /2 ;
		if (arr[mid] < num) {
			left += 1;
		}
		else if (arr[mid] > num) {
			right -= 1;
		}
		else {
			isFind = mid;
			break;
		}
	}

	return isFind;
}

/*
	对于字符串类型，形参char str[] 本质是指针，长度可以用strlen()来计算
*/
int string_func(char arr[]) {
	
	int lenth = strlen(arr);

	return 1;
}

int arr_str_main() {

	// 引用类型 数组传递参数
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int index = binary_search_func(arr, size, 9);
	printf("idx is %d", index);

	// 引用类型 字符串传参
	char str[] = "helloworld";
	string_func(str);

	return 0;

	
}

/*
	递归调用
*/
void bitFunc(int num) {
	
	if (num == 0) {
		return ;
	}
	else {
		bitFunc(num / 10);
		printf("%d", num % 10);
	}
}

void main_recursion() {

	int n;
	scanf("%d", &n);

	bitFunc(n);
	
}


// 计算斐波那契数列
int fib(int n) {
	
	int f;
	int f1=1,f2 = 1;
	for (int i = 3; i <= n ; i++)
	{
		f = f1 + f2;
		f2 = f1;
		f1 = f;
	}
	return f;
}







int my_strlen(char str[])
{
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}

	return i;
}

int my_strlen1(char str[]) {
	
	if (str[0] == '\0') {
		return 0;
	}
	else {
		str++;
		return 1 + my_strlen1(str);
	}
}

void main__aa() {


	char str[] = "helloworld";

	int len = my_strlen1(str);
	printf("%d", len);

}