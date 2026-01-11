#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <string.h>
#include "while-learn.h"
#include <math.h>








/*
*	goto”Ôæ‰¡∑œ∞
*/
void goto_test() {

haha:
	printf("hello hhh\n");
	printf("hello hhh\n");
	printf("hello hhh\n");
	
	goto haha;
}


/*
*	¡∑œ∞:º∆À„Ω◊≥À
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
*	¡∑œ∞:º∆À„Ω◊≥À∫Õ
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


/**
* for—≠ª∑µ˜ ‘
*/
void for_debug()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	}
	printf("sum is %d", sum);
}
