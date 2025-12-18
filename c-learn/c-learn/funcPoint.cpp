int add();
int add();

int add() {
	return 1;	
}


int main1() {
	
	// 函数指针数组
	int (*farr[5])(int, int) = {0,0,0,0,0};
	
	// 函数指针数组的数组指针
	int (*(*pf)[5])(int, int) = &farr;

	return 1;
}