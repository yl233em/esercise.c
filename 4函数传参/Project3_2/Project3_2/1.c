#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

#include<stdio.h>

int sstrlen(char* c)
{
	int len = 0;
	while (*c != '\0')
	{
		return 1 + sstrlen(c + 1);
	}
	return 0;
}

int main()
{
	char crr[] = "I'm spider man";

	int len = 0;

	len = sstrlen(crr);

	printf("������%d", len);

	return 0;
}