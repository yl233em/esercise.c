#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

void prin(int a)
{
	if (a > 9)
		prin(a / 10);
	printf("%d\n", a%10);

}

#include<stdio.h>
int main()
{
	int i = 3457;

	prin(i);

	return 0;
}
