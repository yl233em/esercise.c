#define _CRT_SECURE_NO_WARNINGS 1
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

#include<stdio.h>
#define N 10
void print(int arr[])
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[N] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[N] = { 11,22,33,44,55,66,77,88,99,100 };
	int tem = 0;
	int i = 0;
	printf("arr1:");
	print(arr1);
	printf("arr2:");
	print(arr2);

	for (i = 0; i < N; i++)
	{
		tem = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tem;
	}
	printf("������\narr1:");
	print(arr1);
	printf("arr2:");
	print(arr2);
	
	return 0;
}