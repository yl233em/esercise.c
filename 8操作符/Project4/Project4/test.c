#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d , b = %d", a, b);

	return 0;
}