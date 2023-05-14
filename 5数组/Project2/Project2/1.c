#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

#include<stdio.h>

void init(int arr[], int len)//��ʼ������Ϊ0
{
	int i = 0;
	for (i = 0; i <= len; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int len)//��ӡ����
{
	int i = 0;
	
	for (i = 0; i <= len; i++) 
	{
		printf("%d %t", arr[i]);
	}
}
void reverse(int arr[], int len)//����Ԫ������
{
	int temp = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i <= len; i++)
	{
		j = len - i;
		if (i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}

	}
}

int main()
{
	int arr[] = { 1,25,235,123,52435,234 };
	int len = (sizeof(arr) / sizeof(arr[0])) - 1;
	print(arr, len);
	printf("\n");
	reverse(arr, len);
	print(arr, len);
	printf("\n");
	init(arr, len);
	print(arr, len);
	printf("\n");
	return 0;
}