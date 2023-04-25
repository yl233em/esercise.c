#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int rat = 1;
	int n = 0;
	int sum = 0;
	int i = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) 
	{
		rat *= i;
		sum += rat;
	}
	printf("%d", sum);

	return 0;
}