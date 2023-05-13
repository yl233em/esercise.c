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

int fibon(n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
		return fibon(n - 1) + fibon(n - 2);

}

int main()
{
	int num = 7;
	num = fibon(num);
	printf("%d", num);
	return 0;
}