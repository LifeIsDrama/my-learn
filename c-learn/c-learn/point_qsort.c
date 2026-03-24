#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


void swap_item(char* el1, char* el2, int width) {
	
	char tmp;
	for (int i = 0; i < width; i++)
	{
		tmp = *(el1 + i);
		*(el1 + i) = *(el2 + i);
		*(el2 + i) = tmp;
	}
	int a;
}

void my_qsort(void* arr_p, size_t size, size_t width, int(*cmp)(void* el1, void* el2)) {
	

	// 1 2 3 4 5  size = 5
	// 3  5 - 1 -3

	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if(cmp((char*)arr_p+ width *j, (char*)arr_p+width*(j+1)) > 0) {
				swap_item((char*)arr_p + width * j, (char*)arr_p + width * (j + 1), width);
			}
		}
	}

}

int cmp(void* el1, void* el2) {
	return *(int*) el1 - *(int*) el2;
}




