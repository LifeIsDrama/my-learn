#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>


/*
*	strlen(str) - 返回字符串长度 
*   1. 字符串必须是标准格式，也就是以'\0'字符结尾
*   2. 如果不是标准格式, 那么就随便返回一个值
*   
*   strnlen_s(str, size)
*   1. 可以用这个函数, 如果是不标准格式，就返回size的大小
*   2. 对于标准格式，返回字符串长度，大于size，就返回size之内
*/
void strlen_test1() {

	char str1[] = {'h', 'e','l','l','0'};
	int len = strlen(str1);

	printf("%d",len);


	
}


void strlen_test2() {
	// 3补 - 6补 = -3补 按照unsigned类型规则  和 0 比较
	// >
	if (strlen("abc") - strlen("abcdef") > 0) {
		printf(">");
	}
	else {
		printf("<");
	}
}

size_t my_strlen(char str[]) {
	int len = 0;
	int idx = 0;
	while (str[idx] != '\0') {
		idx++;
		len++;
	}
	return len;

}

/*
*	常量字符串无法修改
*/
void strcpy_test1() {
	char* p = "abcdef";
	char arr[] = "ok";
	// 无法修改，因为p指向的是常量字符串
	strcpy(p, arr);
}

void my_strcpy(char dest[], char str[]) {
	int idx = 0;
	while (str[idx] != '\0') {
		dest[idx] = str[idx];
		idx++;
	}
	dest[idx] = str[idx];
}

void strcpy_test() {
	char str[] = "zhangsan";
	char dest[3] = {0};
	int size = sizeof(dest)/ sizeof(dest[0]);

	strcpy(dest, str);

	printf("%s \n", dest);
	printf("%d \n", strlen(dest));
	printf("%d \n", sizeof(dest) / sizeof(dest[0]));
}

void strncpy_test() {
	char str[] = "zhangsan66666666666";
	char dest[3] = { 0 };
	int size = sizeof(dest) / sizeof(dest[0]);

	strncpy(dest,str,5);

	printf("%s \n", dest);
	printf("%d \n", strlen(dest));
	printf("%d \n", sizeof(dest) / sizeof(dest[0]));

	
}

/**
*	strcat()、strcat_s()测试
*/
void strcat_test() {

	char str1[8] = "abcdef";
	char* str2 = "abcdef";

	strcat_s(str1, 8,str2);

	

	printf("%s", str1);
}

void strncat_test() {

	char str1[9] = "abcdef";
	char* str2 = "abcdef";
	// 溢出
	//strncat(str1,str2,4);
	strncat_s(str1, 9, str2, 4);


	printf("%s", str1);
}

void my_strcat(char dest[], char src[]) {
	int len = strlen(dest);
	int idx = 0;
	for (int i = 0; i <= strlen(src); i++)
	{
		dest[len+i] = src[i];
	}
}

/**
*	strcmp()
*/
void strcmp_test() {

	char str1[] = "zhangsan";
	char str2[] = "zhangsan";
	char str3[] = "zhangtan";
	char str4[] = "zhangsanfeng";
	char str5[] = "lishi";


	printf("%d \n", strcmp(str1,str2));
	printf("%d \n", strcmp(str1,str3));
	printf("%d \n", strcmp(str1,str4));
	printf("%d \n", strcmp(str1,str5));
}

int my_strcmp(char str1[], char str2[]) {
	// 
	int idx = 0;
	while (str1[idx] == str2[idx] && str1[idx] != '\0' && str1[idx] != '\0') {
		idx++;
	} 
	// 
	int ret = 0;
	if (str1[idx] == '\0' && str2[idx] == '\0') {
		ret = 0;
	}
	else if(str1[idx] == '\0') {
		ret = -1;
	}
	else {
	 ret = 1;
	}
	return ret;
	
}


void strchr_test() {
	char str[] = "hlello";

	char* ret = strchr(str, 'l');

	if (ret == NULL) {
		printf("找不到");
	}
	else {
		printf("找到了");
		
	}

	// 计算idx
	int idx = ret - str;
	printf("\n idx是: %d",idx);

}


void strstr_test() {
	
	char str1[] = "heaallowoaarld";
	char str2[] = "aa";

	char* ret = strstr(str1, str2);

	if (ret == NULL) {
		printf("找不到 \n");
	}
	else {
		printf("idx is %d \n", ret - str1);
	}

}

int main() {
	strstr_test();
}