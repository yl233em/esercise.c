#define _CRT_SECURE_NO_WARNINGS 1
//打印杨辉三角
#include<stdio.h>
void triangle()
{
	int i = 0;
	int j = 0;
	int row = 0;
	int a[100][100] = { 0 };
	printf("输入行列大小：");
	scanf("%d", &row);
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j == 0)
			{
				a[i][j] = 1;
				printf("%d\t", a[i][j]);
			}
			else if (i == j)
			{
				a[i][j] = 1;
				printf("%d\t", a[i][j]);
			}
			else
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
				printf("%d\t", a[i][j]);
			}
		}
		printf("\n");
	}
}
int main()
{
	triangle();
	return 0;
}