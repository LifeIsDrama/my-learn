#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <cstring>
#include <cmath>


/*
	sqrt() - 数学函数,开方作用，需要引入cmath
*/

void sqrtlearn() {

	int num;
	int isPrime = 1;
	scanf("%d", &num);

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) {
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1) {
		printf("是");
	}
	else {
		printf("不是");
	}
}