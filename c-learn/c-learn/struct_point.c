#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


typedef struct StuctNode {
	int data;
	// 这里只能用原本名字
	struct StructNode* next;

	// 不能用别名
	//Node* next;
}Node;


int struct_pointer() {

	Node n1 = { 10};
	Node n2 = { 20 };
	
	n1.next = &n2;
	printf("n1 data = %d\n", n1.data);
}