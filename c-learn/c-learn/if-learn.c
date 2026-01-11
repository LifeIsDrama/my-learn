#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "if-learn.h"

/*
*	1-100之间的奇数
*/
void test2()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
}

/**
*	奇数、偶数 判度
*/
void test1()
{
	int num;
	scanf("%d", &num);

	if (num % 2 != 0) {
		printf("奇数");
	}
	else {
		printf("偶数");
	}
}