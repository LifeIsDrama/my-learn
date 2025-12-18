#include <stdio.h>


/*
	计算一个数中，二进制格式中，1的个数
*/
int cal_count_of_1(int num) {

	int count = 0;
	int tmp = num;
	while (tmp > 0) {
		if (tmp % 2 == 1) {
			count ++;
		}
		tmp = tmp /2 ;
	}

	return count;
}

/*
	有符号数和无符号数运算
*/
void count_num() {
	
	int i1 = -3;
	unsigned int i2 = 1;

	int i3 = i1 + i2;
	unsigned i4 = i1 + i2;

	printf("%d \n", i3);
	printf("%u \n", i4);

}


