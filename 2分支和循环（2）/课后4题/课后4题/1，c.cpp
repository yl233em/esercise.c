#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() 
{
	int i = 0;
	int num = 0;
	int sum = 0;

	for (i = 0; i <= 100; i++)
	{
		num = i;
		do
		{
			if (num % 10 == 9)
			{
				sum++;
			}
			num /= 10;
		}while (num / 10 != 0 );
		if (num == 9)
		{
			sum++;
		}
	}
	printf("%d", sum);

	return 0;
}