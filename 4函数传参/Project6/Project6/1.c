#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数实现n的k次方，使用递归实现。
#include<stdio.h>


int n_k(int n, int k)
{
	if (k > 0)
	{
		return  n_k(n, k - 1) * n;
	}
	return 1;
}
int main()
{
	int mul1 = 0;
	int mul2 = 0;
	int pro = 0;
	scanf("%d %d", &mul1, &mul2);
	
	printf("%d", n_k(mul1, mul2));
	return 0;
}