struct Person {

	char name[20];
	int age;
	char gende[5];
};

struct House {
	char name[20];
	struct Person person;
};




struct Person p1,p2;

void main1() {
	// 结构体初始化
	struct Person p = {"red2222", 12, "男"};
	// 结构体初始化
	struct House h = {"red222house", p};

	int b;
}