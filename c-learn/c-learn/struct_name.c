#define _CRT_SECURE_NO_WARNINGS 1

/**
* desc:
* 1. 结构体别名
*/

// 定义结构体 + 同时指定别名
typedef struct StructPerson {
	char name[20];
	int age;
}Person, p_ren;

// 指定别名
typedef struct StructPerson Ren;

void srtuct_other_name() {
	
	Person p1 = { "Bob", 25 };
	Ren p2 = { "Charlie", 30 };
	p_ren p3 = { "Diana", 28 };

	int aaa;
}