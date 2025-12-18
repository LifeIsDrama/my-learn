#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <cstring>
#include "while-learn.h"
#include <windows.h>
#include <stdlib.h>




#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <cstring>
#include "while-learn.h"


/*
* Sleep() - 需要引入windows.h
* System() - 调用系统命令，需要引入stdlib.h
*/

int sleepand() {


	// welcome to bit!!!
	// #################
	char arr1[] = "welcome to bit!!!";
	int size = sizeof(arr1) / sizeof(arr1[0]) - 1;

	int size1 = strlen(arr1);


	int left = 0, right = size - 1;
	while (left <= right) {
		// 清屏 + 打印
		
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
		Sleep(1000);
		system("cls");

		left++;
		right--;


	}


	return 0;

}
