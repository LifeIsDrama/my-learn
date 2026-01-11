#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include "inputoutput.h"
#include <string.h>
#include <ctype.h>

//
void test_getchar() {
	
	char ch = '\0';
	while ((ch = getchar()) != EOF) {
		if(isdigit(ch)) {
			putchar(ch);
		}
	}
}




/*
	%d - 消耗空白字符，读取数字，缓冲区为孔就等待
	%c - 不消耗空白字符
	%s - 消耗空白字符，读取字符串
*/
void test_scanf() {
	
	
}




// getchar() 读取一个字符
// 循环使用getchar()会把缓区读取光 有时会遇到\n 、EOF的情况
int testGetchar() {

	int ch;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}


	return 0;

}


/*
	-  scanf("%s") - 从缓冲区读取，遇到非字母、数字(不能显示的字符)结束
		- 如果缓冲区无内容，等待用户输入。
		- 如果缓冲区有内容，开始读取，读到最后没读到，等待缓冲区的输入。
	-  \n被getchar()读取到了 
	- 为了避免错误，需要清空一下缓冲区
*/ 
int testScanfs() {

	char pwd[20] = { 0 };
	

	printf("请输入密码:>");
	scanf("%s", &pwd);

	while (getchar() != EOF) {}

	printf("确认(Y/N):>");
	int ret = getchar();
	if (ret == 'Y') {
		printf("Y");
	}
	else {
		printf("%c", ret);
		printf("N");
	}


	// 如果我这里用scanf("%s")
	/*char pwd1[20] = { 0 };
	scanf("%s", &pwd1);
	printf("%s", pwd1);*/


	return 1;

}


// 输入位置宽度 
// %m格式 方式 scanf会读取指定的位数目

void scanfWidth()
{
	int year, month, day;
	scanf("%4d%2d%2d", &year, &month, &day);

	printf("%0d%02d%02d", year, month, day);
}

void scanfTest2()
{
	int id;
	float c, math, english;

	scanf("%d;%f,%f,%f", &id, &c, &math, &english);

	printf("id is %d, c is %.2f, math is %.2f, english is %.2f \n", id, c, math, english);
}



void scanfRange()
{
	int min = 0;
	int max = 15;
	float r;
	while (true) {
		scanf("%f", &r);
		if (r > min && r < max) {
			break;
		}
	}

	float pi = 3.14;
	float v;
	v = 4 / 3 * pi * r * r;

	printf("the v is : %f", v);
}





