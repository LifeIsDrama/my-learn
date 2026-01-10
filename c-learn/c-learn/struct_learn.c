/**
* desc:
* 1. 结构体声明
* 2. 结构体创建、初始化
*/

/**
* 创建结构体，同时创建结构体变量
*/
struct Person {

	char name[20];
	int age;
	char gender[10];
	char tel[11];
}strut_p_global = {}, strut_p_arr[5] = {}, * strut_p_point;


/*
* 几种结构体初始化方式
*/
void struct_init_learn() {
	
	// 初始化
	struct Person p = {};

	struct Person p1 = { "Alice"};

	struct Person p2;

}
void struct_fuzhi() {
	struct Person p1 = {"tom"};
	//p1 = { "wukong" };

	struct Person p2 = { "Alice" };

	int aaa;
}



