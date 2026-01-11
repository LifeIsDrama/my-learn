#include <stdio.h>

// 一维数组传参
void test1(int* arr) {
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test2(int arr[]) {
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test3(int* arr[]) {
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test4(int** arr) {
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/*
	一维数组传参。
*/
void arr_one_param() {
	int arr[] = { 1,2,3,4,5 };
	test1(arr);
	test2(arr);

	int* arr1[] = { arr, arr + 1 };
	test3(arr1);
	test4(arr1);
}


void test5(int(*arr)[5], int row, int col) {
	printf("==============\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	
}
// 

void test6(int arr[3][5], int row, int col) {
	printf("==============\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}


void test7(int* arr, int row, int col) {
	printf("==============\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i * col + j]);
		}
		printf("\n");
	}
}


void main333() {
	
	int arr[2][5] = {1,2,3,4,5,6,7,8,9,10};
		
	test5(arr, 2, 5);
	test6(arr, 2, 5);
	test7(arr[0], 2, 5);
}