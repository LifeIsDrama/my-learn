#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>

int test_num_num() {

	int num = 66652;
	//scanf("%d", &num);

	int len = floor(log10(num)) + 1;
	int sum = 0;
	int tmp, quo, rem;
	tmp = num;
	for (int i = 0; i < len; i++)
	{
		quo = tmp / 10;
		rem = tmp % 10;
		tmp = quo;

		sum = sum + (rem % 2) * pow(10, i);
	}
	printf("%d \n", sum);
}

int test_num_num2() {

	int num = 652;
	//scanf("%d", &num);

	int tmp = num, quo, rem, dig = 1;
	int sum = 0;

	while (tmp) {
		// 本次操作
		quo = tmp / 10;
		rem = tmp % 10;
		sum += (rem % 2) * dig;
		// 用后修改
		tmp = quo;
		dig *= 10;
	}

	printf("%d \n", sum);
}



void left_turn(char* str, const int k) {
	
	

	int len = strlen(str);
	char c;
	for (int i = 0; i < k; i++)
	{
		c = str[0];
		memmove(str, str + 1, len -1);
		str[len -1] = c;
	}
	

}


int main() {
	
	// 
	char str[] = "ABCDEFGHIJK";
	left_turn(str, 3);

	printf("%s", str);
}
