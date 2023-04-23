#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int MAX(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);
	printf("%d", MAX(a, b));
	return 0;
}