#define _CRT_SECURE_NO_WARNINGS 1
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//
//arr��һ������һά���顣

#include<stdio.h>
int printarr(int arr[], int n)
{
	int* a = arr;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", *a + i);
	}

}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int n = 0;
	n = sizeof(arr) / sizeof(arr[0]);
	printarr(arr, n);

	return 0;
}