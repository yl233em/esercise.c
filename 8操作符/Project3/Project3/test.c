#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������ز����������� 1 �ĸ�����
//
//���磺 15    0000 1111    4 �� 1
//

#include<stdio.h>
int printcount(int a)
{
	int count = 0;
	int i = 0;
	while ((a >> i) != 0)
	{
		if (((a >> i) & 1) == 1)
		{
			count++;
		}
		i++;

	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", printcount(a));
	return 0;
}