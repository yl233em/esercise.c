#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数返回参数二进制中 1 的个数。
//
//比如： 15    0000 1111    4 个 1
//

#include<stdio.h>
int printcount(int a)
{
	int count = 0;
	int i = 0;
	while ((a >> i) != 0)
	{
		if (((a >> i) & 1) == 1)
		{
			count++;
		}
		i++;

	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", printcount(a));
	return 0;
}