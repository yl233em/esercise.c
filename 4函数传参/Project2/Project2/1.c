#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

#include<stdio.h>
int mmul(n)
{
	if (n > 1)
	{
		return mmul(n - 1) * n;
	}
	return 1;
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	printf("%d", mmul(i));

	return 0;
}