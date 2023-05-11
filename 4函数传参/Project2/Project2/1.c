#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

#include<stdio.h>
int mmul(n)
{
	if (n > 1)
	{
		return mmul(n - 1) * n;
	}
	return 1;
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	printf("%d", mmul(i));

	return 0;
}