#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ�������������������������ݡ�

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