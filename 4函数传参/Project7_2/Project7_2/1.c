#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//
//���磺
//
//���룺5  �����5
//
//���룺10�� �����55
//
//���룺2�� �����1
#include<stdio.h>

int fibon(int n)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int sum = 0;
	for (i = 3; i <= n; i++)
	{ 
		sum = a + b;
		a = b;
		b = sum;
	}
	return b;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	num = fibon(num);
	printf("%d", num);
	return 0;
}