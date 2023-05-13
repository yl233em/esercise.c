#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//比如 :
//
//char arr[] = "abcdef";
//
//
//逆序之后数组的内容变成：fedcba

#include<stdio.h>

char reflex(char* star, char* end)
{
	char temp = 0;

	if (star >= end)
	{
		return;
	}
	temp = *star;
	*star = *end;
	*end = temp;
	reflex(star + 1, end - 1);
 
}
int main()
{
	char crr[] = "abcdef";
	int end = 0;
	end = sizeof(crr) / sizeof(crr[0]) - 2;

	reflex(crr,&crr[end]);
	printf("%s", crr);
	return 0;
}