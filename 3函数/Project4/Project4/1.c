#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

#include<stdio.h>

void mul(int row)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d  ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int line = 0;

	printf("������������");
	scanf("%d", &line);

	mul(line);

	return 0;

}