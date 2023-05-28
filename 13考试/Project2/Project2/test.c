#define _CRT_SECURE_NO_WARNINGS 1
//求最小公倍数
#include<stdio.h>
int fmul()
{
	int a, b, mid, i;

	scanf("%d%d", &a, &b);
	mid = a > b ? a : b;
	for (i = 1; mid * i <= a * b; i++)
	{
		if ((mid * i) % a == 0 && (mid * i) % b == 0)
		{
			return mid * i;
		}
	}
}
int main()
{
	int num = 0;
	num = fmul();
	printf("%d", num);
	return 0;
}