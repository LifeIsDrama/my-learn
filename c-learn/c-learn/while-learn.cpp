#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <cstring>
#include "while-learn.h"






/*
*	Á·Ï°:¼ÆËã½×³Ë
*/
void while_test1()
{
	int n, sum = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}

	printf("sum is %d", sum);
}


/*
*	Á·Ï°:¼ÆËã½×³ËºÍ
*/
void while_test2()
{
	int n, ret = 1, sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}

	printf("sum is %d", sum);
}

