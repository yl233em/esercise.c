#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void guess()
{
	int tem = 0;
	int num = 0;
	tem = (rand()) % 100 + 1;
	printf("����������");
	while (1)
	{
		scanf("%d", &num);
		if (num > tem)
		{
			printf("�´���\n");
		}
		else if (num < tem)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}

}
void start()
{
	printf("***************\n");
	printf("*    ����     *\n");
	printf("*    1.��     *\n");
	printf("*    0.����   *\n");
	printf("***************\n");
}
int main()
{
	int input = 0;

	srand(time(NULL));
	do 
	{
		start();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			guess();
			break;
		case 0:
			break;
		default:
			printf("�����ʲô���⣬�������룡\n");
			break;
		}
	} while (input);

	return 0;
}