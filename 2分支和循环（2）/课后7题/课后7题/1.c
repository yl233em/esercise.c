#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int a[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int i = 0;
	int j = (sizeof(a)/sizeof(a[0])) -1;
	int t = 0;

	printf("������ҵ���\n");
	scanf("%d", &t);

	while (i <= j)
	{
		if (a[i + ((j - i) / 2)] > t)
		{
			j = i + ((j - i) / 2) - 1;
		}
		else if (a[i + ((j - i) / 2)] < t)
		{
			i = i + ((j - i) / 2) + 1;
		}
		else if(a[i + ((j - i) / 2)] == t)
		{
			printf("�������%d��", i + ((j - i) / 2));
			break;
		}
	}
	
	if (i > j)
	{
		printf("û���������");
	}

	return 0;
}