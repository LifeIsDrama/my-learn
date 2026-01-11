#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <string.h>
#include "funcLearn.h"
#include <stdlib.h>

/**
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
*	递归调用
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


void showNum() {

}



int my_strlenaa(char str[])
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

void my_strlen1_test() {


	char str[] = "helloworld";

	int len = my_strlen1(str);
	printf("%d", len);

}



