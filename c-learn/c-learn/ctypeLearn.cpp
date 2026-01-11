#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


void mainaaa() {
	int n = 1024;
	// 转string 
	char str[20] = { 0 };
	sprintf(str, "%d", n);
	// 打印
	for (int i = 0; i < strlen(str); i++)
	{
		printf("%c ", str[i]);
	}


}

/**
	atoi() 和 strtol()的区别
*/
void strtol_learn() {
	char str[] = "123abc";
	char str1[] = "abc123";

	// atoi的缺点 
	// 对于abc不知道是否成功，不知到转换到了哪里
	// 对于非数字打头、0打头的，不知道是否转换成功还是失败
	int num1 = atoi(str);
	int num2 = atoi(str1);
	printf("%d \n", num1);
	printf("%d \n", num2);

	// 使用strtol
	char* end = str;
	int num3 = strtol(str1, &end, 0);
	// end判度是否转换了
	if (end == str) {
		printf("转换失败");
	}
	else {
		printf("转换成功,数字是%d,剩余是%s", num3, end);
	}
}


/*
	sprintf() - 转换成字符串
*/
void sprintf_test() {
	float num = 3.124;
	char buffer[50];

	// snprintf() - 按format转换,输出到buffer中
	sprintf(buffer, "%.2f", num);

	printf("%s", buffer);
}

/*
	sprintf()和snprinf()区别
	- snprintf()会截断，然后写入，不会报错。
	- sprintf()会报错，导致程序崩溃。
*/

void snprintf_test() {
	char small_buffer[8];
	const char* input = "This is a long string";

	// 安全写法：指定最大写入长度
	snprintf(small_buffer, sizeof(small_buffer), "Inp %s", input);

	printf("Result: %s\n", small_buffer);

	// 检查是否溢出
	if (strlen(input) >= sizeof(small_buffer) - 1) {
		printf("警告：字符串被截断了！\n");
	}

}

/**
	strcpy() - 字符串拷贝
*/
void strcpssy_test() {
	// strcpy字符串拷贝，str1操作str会导致程序崩溃
	char str[] = "helloworld";
	char str1[5];

	strcpy(str1, str);

	printf("%s", str1);

}

/*
	strcpy_s()
*/
void strcpy_s_test() {
	char dest[10];
	char long_string[] = "This is a very long string";

	// 安全做法：检查返回值
	errno_t err = strcpy_s(dest, sizeof(dest), long_string);

	if (err != 0) {
		printf("Error: Destination buffer too small!\n");
		// 这里可以做截断处理
		strncpy_s(dest, sizeof(dest), long_string, sizeof(dest) - 1);
		dest[sizeof(dest) - 1] = '\0'; // 确保终止符
	}

	printf("Buffer: %s\n", dest);

	
}

int main11() {

	char* arr[5];

	char* (* p)[5] = &arr;
	return 1;
		
}
	
