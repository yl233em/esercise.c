#define _CRT_SECURE_NO_WARNINGS 1
//ʵ�ֺ����ж�year�ǲ������ꡣ

#include<stdio.h>

void ryear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("%d��������\n", year);
	}
	if (year % 400 == 0)
	{
		printf("%d��������\n", year);
	}
}

int main()
{
	int year = 0;
	printf("���������:\n");
	scanf("%d", &year);

	ryear(year);

	return 0;
}