#define _CRT_SECURE_NO_WARNINGS 1



/**
*	数组指针 - 指向数组的指针
*/
void arr_point_demo() {
	// 定义数组指针 指向数组 并且访问
	int arr[5] = {1,2,3,4,5};

	// 指针指向
	int (*pr)[5] = &arr;

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", pr[0][i]);
	}
}

// 二维数组指针
arr_2_print(int(*arrpf)[4], int row, int col) {
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%-2d  ", arrpf[i][j]);
		}

		printf("\n");
	}
}

// 二维数组指针
arr_2_main() {
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

	arr_2_print(arr, 3, 4);
}

