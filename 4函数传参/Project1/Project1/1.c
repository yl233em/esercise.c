#define _CRT_SECURE_NO_WARNINGS 1
//递归方式实现打印一个整数的每一位

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
