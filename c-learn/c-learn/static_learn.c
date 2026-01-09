#include <stdio.h>
// 尝试引入global_static
// extern int global_static;

// 静态变量
count() {
	static int count = 0;
	count++;
	printf("count被调用了%d次 \n", count);

}

