#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <locale.h>

//-----------------------------------------------------------------------
//  strlen()测试
//-----------------------------------------------------------------------
void strlen_test() {
	
	char str[20] = "hello";
	// 
	int len = strnlen_s(str, 3);

	printf("%d \n", len);
}


//-----------------------------------------------------------------------
//  strncmp()测试
//-----------------------------------------------------------------------
void strncmp_test() {

	char str1[20] = "helloa";
	char str2[20] = "hellob";
	// 
	int ret = strncmp(str1, str2, 3);

	printf("%d \n", ret);
}

//-----------------------------------------------------------------------
//  strnchr()测试
//-----------------------------------------------------------------------
void strchr_test() {

	char str[] = "hollo world";

	char* pc = strchr(str, 'o');
	printf("%c - %p \n", *pc, pc);

	char* pc1 = strchr(pc + 1, 'o');
	printf("%c - %p \n", *pc1, pc1);
}

//-----------------------------------------------------------------------
//  strstr()测试
//-----------------------------------------------------------------------
void strstr_test() {

	char str[] = "hello worldok hello ok hahaha";
	char* pc = strstr(str, "ok");
	printf("%s \n", pc);
	pc = strstr(pc+1, "ok");
	printf("%s \n", pc);
}


//-----------------------------------------------------------------------
//  strncpy()的安全使用
//-----------------------------------------------------------------------
void strncpy_safe_use() {
	char src[] = "hello world";
	char dest[20] = "hello woraaaaaaa";
	int size = sizeof(dest)/ sizeof(dest[0]);

	strncpy(dest, src, size - 1);
	 int aaa;
}


//-----------------------------------------------------------------------
//  strncat()的安全使用
//-----------------------------------------------------------------------
void strncat_safe_use() {
	
	char dest[10] = "ok";
	char src[] = "hello wotldaaaaa";
	int size = sizeof(dest) / sizeof(dest[0]);
	int len = strlen(dest);

	strncat(dest, src, size - len -1);

	printf("%s", dest);
}



//-----------------------------------------------------------------------
//  strdup()使用  在C23后，strdup()成为ISO C的强制标准
//-----------------------------------------------------------------------
void strdup_test() {

	char str[20] = "hello world";

	char* ret = strdup(str);

	printf("%s", ret);
	
}
