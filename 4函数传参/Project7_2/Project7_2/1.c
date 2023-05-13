#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
#include<stdio.h>

int fibon(int n)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int sum = 0;
	for (i = 3; i <= n; i++)
	{ 
		sum = a + b;
		a = b;
		b = sum;
	}
	return b;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	num = fibon(num);
	printf("%d", num);
	return 0;
}