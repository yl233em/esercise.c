#define _CRT_SECURE_NO_WARNINGS 1
//��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿�֡�
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