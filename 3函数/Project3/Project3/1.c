#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数来交换两个整数的内容。

#include<stdio.h>

void abc(int* a, int* b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a = 10;
	int b = 8;

	abc(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}