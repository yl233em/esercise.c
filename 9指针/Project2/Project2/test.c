#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，可以逆序一个字符串的内容。
#include<stdio.h>

void reverse(char arr[], int n)
{
	char temp = 0;
	char* left = &arr[0];
	char* right = &arr[0 + n];
	for (;left < right; left++, right--)
	{
		temp = *left;
		*left = *right;
		*right = temp;
	}
}

int main()
{
	char a[] = "abcdef";
	int n = sizeof(a) / sizeof(a[0]) - 2;
	reverse(a, n);
	;
	;

	printf("%s", a);
	return 0;
}