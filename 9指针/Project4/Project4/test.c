#define _CRT_SECURE_NO_WARNINGS 1
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int n = 1;
	int num = 0;
	int count = 0;
	for (i = 1; i < 100000; i++)
	{
		int n = 1;
		num = i;
		while (num / 10 > 0)
		{
			num /= 10;
			n++;
		}
		num = i;
		for (count = 0; num > 0; num /= 10)
		{
			count += pow((num % 10), n);
		}
		if (count == i)
		{
			printf("%d\n", count);
		}
	}

	return 0;
}