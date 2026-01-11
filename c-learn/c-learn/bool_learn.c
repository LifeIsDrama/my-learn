// 不引入stdbool.h,只能用_Bool,引入后，可以用bool、true、false
#include <stdbool.h>
#include <stdio.h>


// 定义全局变量
//int global_var = 666;

/*
	bool类型使用
*/
bool is_odd(int num) {

	_Bool isOdd = false;

	if (num % 2 == 1) {
		isOdd = true;
	}

	return isOdd;
}


int bool_main() {

	// #_bool 和bool一样 bool是_Bool的宏，类似别名
	_Bool b1 = true;
	_Bool b2 = false;

	printf("b1 = %d, b2 = %d \n", b1, b2);

	printf("7 is odd: %b \n", is_odd(7));

	// 100赋值给bool,会自动转换成1
	bool flag = 100;
	printf("flag = %d \n", flag);
	
}





/*
	逻辑与 - 调试查看，逻辑与两个数的值，为 0 或者 1
*/
int symbol_logic() {
	
	// 逻辑与后，值为0或者1
	int a = 3 && 4;

	int b;
}

