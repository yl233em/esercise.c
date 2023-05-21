#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现库函数strlen

#include<stdio.h>

int strrlen(char arr[])
{
	int i = 0;
	for (i = 0; arr[i] !='\0'; i++)
	{
		;
	}
	return i;
}

int main()
{
	char arr[] = "abcdef";
	int len = strrlen(arr);
	printf("%d", len);
	return 0;
}