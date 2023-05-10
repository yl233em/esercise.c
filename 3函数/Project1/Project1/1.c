#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void prime(int num, int j)
{

	for (num = 100; num < 200; num++)
	{
		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
			{
				break;
			}

		}
		if (j == num)
		{
			printf("%d\n", num);
		}
	}

}

int main()
{
	int num = 0;
	int j = 0;
	prime(num, j);

	return 0;
}