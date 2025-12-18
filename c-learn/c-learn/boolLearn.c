#include <stdbool.h>
#include <stdio.h>

/*
	bool类型使用
*/
bool is_odd(int num) {

	bool isOdd = false;

	if (num % 2 == 1) {
		isOdd = true;
	}

	return isOdd;
}


int bool_main() {

	// #_bool 和bool一样 bool是_Bool的宏，类似别名
	bool b1 = true;
	bool b2 = false;

	printf("b1 = %d, b2 = %d", b1, b2);

	printf("7 is odd: %b", is_odd(7));
	
}

/*
	逻辑与 - 调试查看，逻辑与两个数的值，为 0 或者 1
*/
int symbol_logic() {
	
	// 逻辑与后，值为0或者1
	int a = 3 && 4;

	int b;
}