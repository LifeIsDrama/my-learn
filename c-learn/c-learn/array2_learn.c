#include <stdio.h>
#include <string.h>

/**
*	二维数组初始化
*/
void arr2_init() {
	// 不初始化
	int arr[3][4];
	// 不完全初始化
	int arr1[3][4] = { 1,2,3,4 };
	int arr2[3][4] = { {1,2,3,4},{},{4,5} };
	// 完全初始化
	int arr3[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int arr4[][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
}


/**
*	二维数组大小
*/
void arr2_size() {
	int arr[3][4];

	// 行长度
	int size1 = sizeof(arr) / sizeof(arr[0]);
	int size2 = sizeof(arr[0]) / sizeof(arr[0][0]);
	int size3 = sizeof(arr) / sizeof(arr[0][0]);
}


void  arr2_pos(int arr[]) {
	
	printf("%d", arr[0] + 1);
	printf("%p", arr[0] + 1);
}
