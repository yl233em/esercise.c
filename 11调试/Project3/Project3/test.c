#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现库函数strcpy
#include<stdio.h>
char* srtcppy(char* dest, char* src)
{
	int i = 0;
	char temp = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
int main()
{
	char arr[20] = "abcdef";
	char brr[20] = "012345";
	srtcppy(brr, arr);
	printf("%s", brr);
	return 0;
}