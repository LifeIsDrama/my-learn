#define _CRT_SECURE_NO_WARNINGS 1


int Add(int x, int y) {
	return x + y;
}

int Sub(int x, int y) {
	return x - y;
}

int Mul(int x, int y) {
	return x * y;
}

int Div(int x, int y) {
	return x / y;
}

void Calc(int(*func)(int, int)) {
	int x, y, ret;
	printf("请输入两个数:>");
	scanf("%d %d", &x, &y);
	ret = func(x, y);
	printf("结果是: %d \n", ret);
}

void menu() {
	printf("-----------------------------------------------\n");
	printf("----------1. Add 2.Sub 3. Mul 4. Div-----------\n");
	printf("----------0.退出 ------------------------------\n");
	printf("-----------------------------------------------\n");
}

void Calc_callback() {
	int input;
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input) {
			case 1:
				Calc(Add);
				break;
			case 2:
				Calc(Sub);
				break;
			case 3:
				Calc(Mul);
				break;
			case 4:
				Calc(Div);
				break;
			case 0:
				printf("程序退出 \n");
				break;
			default:
				printf("输入无效 \n");
				break;
		}
	}while(input);
}

/*
*
*/
void calc_arr() {
	int (*funcArr[])(int, int) = { 0, Add, Sub, Mul, Div };
	int input;
	do {
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		if (input == 0) {
			printf("程序退出 \n");
		}
		else if (input > 0 && input <= 4) {
			int x, y, ret;
			printf("请输入两个数:>");
			scanf("%d %d",&x, &y);
			ret = funcArr[input](x,y);
			printf("结果是: %d \n", ret);
		}
		else {
			printf("输出无效 \n");
		}
	} while(input);
}

/*
* 函数指针的语法
*/
void func_point_test() {
	 // 定义函数指针 
	 // 赋值时候, 可以省略取地址符号
	 int (*pf1)(int, int) = &Add;
	 int (*pf2)(int, int) = Add;

	 // 2. 调用函数指针
	 // 调用时候，可以解引用，也可以不解引用
	 int ret1 = (*pf1)(2,4);
	 int ret2 = (pf2)(2,4);

	 printf("%d %d\n", ret1, ret2);
}


void func_point_two() {
	// 调用指定地址的写法
	// 先定义函数指针,指向0地址处, 然后调用
	(*(void (*)())0)();

	// 分步来写
	void (* pf0)() = 0;
	pf0();

	// 使用typedef给函数指针定义别名 -> 给void ()类型指针定义别名为pt_t
	typedef void(*pt_t)();
	(*(pt_t)0)();
}


void func_point_two2() {
	// 创建函数signal,返回类型为函数指针
	void (*signal(int, void(*)(int)))(int);

	// 不直观,使用typedef给函数指针定义别名
	typedef void(*pt_t)(int);
	pt_t signals(int, pt_t);

}


void func_point_arr() {

	// 函数指针类型 构成的数组
	int (*arr[4])(int, int) = {Add, Sub, Mul, Div};

	// 调用
	for (int i = 0; i < 4; i++)
	{
		int ret = arr[i](3, 4);
		printf("%d ", ret);
	}
}


