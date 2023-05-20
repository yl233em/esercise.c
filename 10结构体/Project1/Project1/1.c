#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水
//，给20元，可以多少汽水（编程实现）。

#include<stdio.h>

struct coc
{
	int bottle;
	int prince;

};

int drink(struct coc a, int money, int num)
{

	a.bottle = money / a.prince;
	num = a.bottle;
	if (0 < (money = a.bottle / 2))
	{
			num += drink(a, money, num);
	}
	return num;
}

int main()
{
	struct coc a = { 1, 1 };
	int money = 0;
	scanf("%d", &money);
	int num = drink(a, money, 0);

	printf("%d", num);
	return 0;
}