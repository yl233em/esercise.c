#define _CRT_SECURE_NO_WARNINGS 1
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int n = 1;
	int num = 0;
	int count = 0;
	for (i = 1; i < 100000; i++)
	{
		int n = 1;
		num = i;
		while (num / 10 > 0)
		{
			num /= 10;
			n++;
		}
		num = i;
		for (count = 0; num > 0; num /= 10)
		{
			count += pow((num % 10), n);
		}
		if (count == i)
		{
			printf("%d\n", count);
		}
	}

	return 0;
}