#define _CRT_SECURE_NO_WARNINGS 1
//调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。
//

#include<stdio.h>
void movee(int arr[], int num)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i <= num; i++)
	{
		for (j = 0; j < num - i; j++)
		{
			if (arr[j] % 2 == 0)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i <= num; i++)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int num = sizeof(arr) / sizeof(arr[0]) - 1;
	//printf("%d", num);
	movee(arr, num);
	return 0;
}