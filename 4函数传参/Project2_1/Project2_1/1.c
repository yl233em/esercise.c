#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

#include<stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d", ret);

	return 0;
}