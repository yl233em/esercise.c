#define _CRT_SECURE_NO_WARNINGS 1

//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
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