#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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

int test_struct_symbol() {

	Student stu1 = { "Eve", {90, 85, 88} };
	Student* pstu = &stu1;

	printf("%s %d %d %d \n", stu1.name, stu1.score.chinese, stu1.score.english, stu1.score.math);
	printf("%s %d %d %d \n", pstu->name, pstu->score.chinese, pstu->score.english, pstu->score.math);
	// 等价于上面
	printf("%s %d %d %d \n", (*pstu).name, (*pstu).score.chinese, (*pstu).score.english, (*pstu).score.math);
}

void print_stu1(Student stu1) {
	printf("%s %d %d %d \n", stu1.name, stu1.score.chinese, stu1.score.english, stu1.score.math);
}

void print_stu2(Student* stu1) {
	printf("%s %d %d %d \n", (*stu1).name, stu1->score.chinese, (*stu1).score.english, stu1 ->score.math);
}

void struct_param() {
	Student stu1 = { "Eve", {90, 85, 88} };

	print_stu1(stu1);
	print_stu2(&stu1);
}

