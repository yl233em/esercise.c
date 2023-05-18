#define _CRT_SECURE_NO_WARNINGS 1

//输入两个整数，求两个整数二进制格式有多少个位不同
#include<stdio.h>


int fun(int a, int b)
{

    int tmp = 0;
    int num = 0;

    tmp = a ^ b;
    while (tmp)
    {
        tmp = tmp & (tmp - 1);
        num++;
    }
    return num;
}

int main()
{
    int a;
    int b;
    while(2 == scanf("%d %d", &a, &b))
    {
        printf("%d\n", fun(a, b));
    }
    return 0;
}