#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
//����20Ԫ�����Զ�����ˮ�����ʵ�֣���

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