#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int num = 0;
	int j = 0;

	for (num = 100; num<200; num++)
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

	return 0;
}