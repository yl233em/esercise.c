#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现strlen

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

	printf("长度是%d", len);

	return 0;
}