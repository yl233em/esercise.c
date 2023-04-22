#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = { 'a','b','c','d','e','f' };
	char arr3[] = { 'a','b','c','d','e','f','\0'};

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);

	printf("%d\n", strlen("c:\test\628\test.c"));

	printf("\a\a\a\a\a\a");
	return 0;
}