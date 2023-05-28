#define _CRT_SECURE_NO_WARNINGS 1
//µ¹ÖÃ×Ö·û´®
#include<stdio.h>
#include<string.h>
void re(char* l, char* r)
{
	char tem = 0;
	while (l < r)
	{
		tem = *l;
		*l = *r;
		*r = tem;
		l++;
		r--;
	}
}
int main()
{
	int i = 0, j = 0;
	char c[100] = { 0 };
	gets(c);
	int len = strlen(c);
	char* left = c;
	char* right = c + len - 1;
	char* cut = c;
	re(left, right);  
	while (*cut != '\0')
	{
		while (*cut != ' ' && *cut != '\0')
		{
			cut++;
		}
		right = cut - 1;
		re(left, right);
		left = cut + 1;
		cut++;
 	}
	printf("%s", c);

	return 0;
}