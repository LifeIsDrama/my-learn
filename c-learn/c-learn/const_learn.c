#include <stdio.h>

void zimian_test() {

	//
	"okok";
	char* p1 = "okok";
	char* p2 = "okok";

	int aaa;

	p1 = NULL;
	p2 = NULL;

	char* p3 = "okok";
}


void const_test() {
	// 基本类型无法修改
	const int a = 1;
	//a = 20;

	// const引用变量
	const char str[] = "hello";
	//str[1] = 'a';
	

	// const指针 - 可以修改指向，不能通过解引用修改内容
	const char* str1 = "hello";
	// *(str1 + 1) = 'a';  // error
	str1 = "ok";

}


void str_pos_test() {
	char str[] = "hello";
	char* str1 = "hello";

	printf("str: %p - %p \n", str, &str);
	printf("str: %p - %p \n", str1, &str1);
	
}


