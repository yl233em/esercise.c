#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//
//char arr[] = "abcdef";
//
//
//����֮����������ݱ�ɣ�fedcba

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