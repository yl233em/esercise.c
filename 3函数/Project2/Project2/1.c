#define _CRT_SECURE_NO_WARNINGS 1
//实现函数判断year是不是润年。

#include<stdio.h>

void ryear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("%d年是闰年\n", year);
	}
	if (year % 400 == 0)
	{
		printf("%d年是闰年\n", year);
	}
}

int main()
{
	int year = 0;
	printf("请输入年份:\n");
	scanf("%d", &year);

	ryear(year);

	return 0;
}