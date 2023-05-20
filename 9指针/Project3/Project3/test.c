#define _CRT_SECURE_NO_WARNINGS 1
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#define N 5
int Sn(int a)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < N; i++)
	{
		a = a * (i * 10) + a;
		sum += a;
	}
	return sum;
}

int main()
{
	int a = 0;
	int sum = 0;
	scanf("%d", &a);
	sum = Sn(a);
	printf("%d", sum);
	return 0;
}