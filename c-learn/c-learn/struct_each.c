#define _CRT_SECURE_NO_WARNINGS 1
/**
* desc:
* 1. 结构体使用结构体
*/
struct Score {
	int math;
	int english;
	int chinese;
};
typedef struct Score Score;

struct Student {
	char name[20];
	Score score;
};
typedef struct Student Student;


//
int struct_use_other() {
	Score sc = { 95, 90, 93 };
	Student stu1 = { "Eve", {90, 85, 88} };
	Student stu2 = { "Eve", sc };
	// 
	sc.chinese = 100;
	// 调试 监视stu2的score.chinese的值没有变化
	int aaa;
}
