#define _CRT_SECURE_NO_WARNINGS 1
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19

#include<stdio.h>

int DigitSum(int n)
{
	
	if (n >= 9)
	{
		return DigitSum(n / 10) + n%10;
	}
	return n;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d",DigitSum(num));
	return 0;
}