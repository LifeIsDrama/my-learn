#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <cstring>
#include "while-learn.h"
#include <math.h>


/*
	手写计算字符串长度  计算字符串长度
*/
int my_len(char* str) {

	char* idx = str;
	while (*idx != '\0') {
		idx++;
	}

	return (idx - str);
}

/**
* strlen() 获取字符串长度，需要引入cstring
*/
int strLentest() {


	// welcome to bit!!!
	// #################
	char arr1[] = "welcome to bit!!!";
	int size = sizeof(arr1) / sizeof(arr1[0]) - 1;

	int size1 = strlen(arr1);


	int left = 0, right = size - 1;
	while (left <= right) {
		for (int i = 0; i < size; i++)
		{
			if (i< left || i > right || left == right) {
				printf("%c", arr1[i]);
			}
			else {
				printf("#");
			}
		}
		printf("\n");

		left++;
		right--;


	}


	return 0;

}


/**
* 字符串比较 使用 sttcmp(), 需要引入cstring
* 
* 字符串初始化 char pwd[20] = {}; 只能在定义的时候初始化
*/
void strcmp() {

	char pwd[20] = {};
	int num = 3;
	char pwd1[] = "123456";

	/*int arr1[1] = {1};
	int arr2[1] = {1};
	if (arr1 == arr2) {
		printf("相等");
	}
	else {
		printf("不相等");
	}*/


	for (int i = 0; i < num; i++)
	{
		printf("请输入密码:>");
		scanf("%s", &pwd);

		if (!strcmp(pwd, pwd1)) {
			printf("登录成功");
			break;
		}
	}


}


/*
	字符串逆序
*/
void str_reverse(char* str) {
	
	int size = strlen(str);
	int left = 0, right = size - 1;
	char tmp;
	while (left < right) {
		tmp = *(str+ left);
		*(str+left) = *(str+right);
		*(str+right) = tmp;
		left++;
		right--;
	}
}

void main122() {

	//
	int tmp;
	int sum;
	int digits;
	for (int i = 0; i <= 10000; i++)
	{	
		// 计算位数
		int digits = ceil(log10(i));

		// 计算是否是水仙花数
		tmp = i;
		sum = 0;
		while (tmp != 0) {
			sum += pow((tmp % 10), digits);
			tmp = tmp / 10;
		}
		if (sum == i) {
			printf("%d ", i);
		}
	}

	int a = 2.22;
}


