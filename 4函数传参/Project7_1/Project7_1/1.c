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

int fibon(n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
		return fibon(n - 1) + fibon(n - 2);

}

int main()
{
	int num = 7;
	num = fibon(num);
	printf("%d", num);
	return 0;
}