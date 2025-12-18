#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/**
*	数组创建时，一定要指定长度\
*/
void arr_init() {
	// 不初始化,需要指定长度
	int arr[10] = { 0 };
	int arr1[10];
	// 不完全初始化，需指定长度
	int arr2[10] = { 1,2,3 };
	// 完全初始化，长度可以省略
	int arr3[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr4[] = { 1,2,3,4,5,6,7,8,9,10 };
}

/**
*	创建时不指定长度 =>  访问时候数组越界
*/
void arr_init_error() {
	// 我想创建一个10个元素的数组, 但是没有指定长度，导致错误，导致创建了长度为1的，导致后面遍历错误。
	int arr[] = {0};

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

}

/*
*	数组大小 sizeof(arr)/ sizeof(arr[0])
*/
int arr_size() {

	int arr[] = { 73, 32, 97, 99 };

	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	while (i < size) {
		printf("%c", arr[i]);
		i++;
	}


	return 0;
}

/**
*	数组和指针 - 使用int arr[]、int* arr,取值的方式
*/
void arr_point(int arr[], int* arr1) {
	
	// 取出值
	int a1 = arr[0];
	int a2 = *arr1;

	int b1 = arr[2];
	int b2 = *(arr + 2);

	int* c1 = arr;
	int* c2 = &arr[0];
	int* c3 = arr1;

	int* d1 = arr + 2;
	int* d2 = &arr[2];
	int* d3 = arr1+2;

	int ff = 1;
}


/*
*	二分查找
*/ 
int binary_search() {
	int num = 9;
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);


	int left = 0;
	int right = size - 1;
	int mid;
	int isFind = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == num) {
			isFind = 1;
			break;
		}
		else if (arr[mid] < num) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	if (isFind) {
		printf("index is %d, num is %d \n", mid, arr[mid]);
	}
	else
	{
		printf("can not find \n");
	}


	return 1;
}

/*
*	冒泡排序
*/
void bubble_sort(int arr[], int size) {
	
	int tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}


/*
*	数组地址加减
*/
void arr_pos_main() {
	// 一维数组
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("================\n");
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr[1]);
	printf("================\n");
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);

	

	// 二维数组
	int arr1[3][4] = {{1,1,1,1},{2,2,2,3}, {3,3,3,3}};

	printf("%p\n", arr1);
	printf("%p\n", arr1 + 1);
	printf("%p\n", &arr1[0]);
	printf("%p\n", &arr1[0] + 1);
	printf("%p\n", arr1[0]);
	printf("%p\n", arr1[0] + 1);
	printf("%p\n", &arr1);
	printf("%p\n", &arr1 + 1);
	
}


// 数组反转

// 交换两个数组的内容