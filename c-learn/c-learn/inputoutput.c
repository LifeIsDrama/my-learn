#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include "inputoutput.h"
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

//----------------------------------------------------------------------------------
//-------------------------------- 例题 ---------------------------------------------
//----------------------------------------------------------------------------------



//I like beijing.
// beijing like I

void str_reverse1() {

	char str[] = "I like beijing.";
	char str1[] =  "I like beijing.";

	int idx = strlen(str) -1;
	int pos = idx;
	int str1idx = 0;
	while (idx >= 0) {
		if (isspace(str[idx])) {
			for (int i = idx+1; i <= pos; i++)
			{
				str1[str1idx] = str[i];
				str1idx++;
			}
			str1[str1idx++] = ' ';
			pos = idx - 1;
		}
		idx--;
	}
	for (int i = idx + 1; i <= pos; i++)
	{
		str1[str1idx] = str[i];
		str1idx++;
	}
	
	printf("%s", str1);
}

void str_reverse2() {

	char str[] = "Im like beijing.";
	int len = strlen(str);
	
	int left = 0;
	int right = len - 1;
	// 先逆序整个字符串
	while(left < right) {
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
	// 然后单词逆序
	int idx = 0;
	int idxword = idx;
	while (idx < len) {
		if (str[idx] == ' ' || idx == len - 1) {
			// 单词逆序 
			int left = idxword;
			int right = idx - 1;
			while (left < right) {
				char tmp = str[left];
				str[left] = str[right];
				str[right] = tmp;
				left++;
				right--;
			}
			// 改变idxword的值
			idxword = idx+1;
		}
		idx++;
	}

	printf("%s", str);
}



//----------------------------------------------------------------------------------
//----------------------------   scanf ---------------------------------------------
//----------------------------------------------------------------------------------
/**
* scanf测试 - 先尽可能读取，然后把补码放入指定格式(放不开就截断),然后付给变量。
*
*/
void scanf_format_modifier() {
	// short最大为35574， 我这里输入1234567
	int a;
	scanf("%hd", &a);
	// 看打印结果
	printf("%hd", a);
}

/**
* scanf测试 - 读取指定位宽
*
*/
void scanf_format_witdh() {
	// 这里输入abcdefg
	char str[20] = { 0 };
	scanf("%3s", str);
	// 输出abc
	// 因为读3位后,就不读取了
	printf("%s", str);
}

/**
* scanf测试 - 测试返回值
*
*/
void scanf_return() {
	// 输出0,因为没有占位符，返回的是成功读取的占位符的个数
	int a = scanf(" ");
	printf("%d", a);
}

void scanf_str() {
	char str[] = "abcedf";
	int ret = scanf("%s", str);

	// 查看
	int aaa;
}

void scanf_int_ipt_a() {
	int x = 0,y = 0;
	int ret = scanf("%d %d", &x, &y);

	printf("%d  %d %d", x, y, ret);
}

int main() {
	scanf_str();
}
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
/**
* gets测试 - 测试返回值
*
*/
void gets_return1() {
	// 输入aaaaaaaaaa
	char str[5] = {0};
	gets(str);
	// 调式观察str，发现把str最后的\0覆盖
	printf("%s", str);
}

/**
* gets测试 - 测试返回值
*
*/
void gets_return2() {
	// 输入回车,这时缓冲区是空行
	char str[5] = "abcdef";
	char* ret;
	ret = gets(str);
	// 调式观察str，发现把str覆盖
	printf("%s", str);
}
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------

/**
* getchar()
*
*/
void getchar_test() {
	char ch = 'a';
	
	ch = getchar();

	// 调试观察
	return ;
}



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





