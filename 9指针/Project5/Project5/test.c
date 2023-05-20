#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print()
{
	int i = 0;
	int j = 0;
	int num = 0;
	int line = 0;
	scanf("%d", &line);

	for (i = 0; i < line; i++)
	{
		for (num = 0; num < line - 1 - i; num++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		for (num = 0; num < i + 1; num++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}
int main()
{
	print();
	return 0;
}