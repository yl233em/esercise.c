#define _CRT_SECURE_NO_WARNINGS 1
//µ¹ÖÃ×Ö·û´®
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0, j = 0;
	char temp = 0;
	char c[100] = { 0 };
	gets(c);
	int len = strlen(c);

	char* left = c;
	char* right = &c[len];
	/*for (i = 0, j = len-1; i < len; i++, j--)
	{
		temp = c[i];
		c[i] = c[j];
		c[j] = temp;
	}
	printf("%s", c);*/
	return 0;
}