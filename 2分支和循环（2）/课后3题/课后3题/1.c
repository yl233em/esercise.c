#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int m, n, i;
    scanf("%d", &m);
    scanf("%d", &n);
    for (i = m; i >= 1; i--)
        if (m % i == 0 && n % i == 0)
            break;
    printf("%d\n", i);
    return 0;
}