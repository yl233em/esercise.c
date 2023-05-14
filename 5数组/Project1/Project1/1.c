#define _CRT_SECURE_NO_WARNINGS 1

//实现一个对整形数组的冒泡排序
#include<stdio.h>
int main()
{
	int arr[10] = { 2,64,7,46,8,24,57,8,3,6 };
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}