#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void prime(int num)
{
	int j = 0;

		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
			{
				break;
			}

		}
		if (j == num)
		{
			printf("%dÊÇËØÊý\n",num);
		}
}

int main()
{
	int num = 0;
	int j = 0;
	int i = 0;

	for (i = 100; i <200; i++)
	{
		prime(i);
	}

	return 0;
}