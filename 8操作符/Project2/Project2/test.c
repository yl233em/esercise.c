#define _CRT_SECURE_NO_WARNINGS 1
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	scanf("%d", &a);

	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -=2)
	{
		printf("%d", (a >> i) & 1);
	}


	return 0;

}