#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

#include<stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d", ret);

	return 0;
}