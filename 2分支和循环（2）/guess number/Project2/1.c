#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void guess()
{
	int tem = 0;
	int num = 0;
	tem = (rand()) % 100 + 1;
	printf("请输入数字");
	while (1)
	{
		scanf("%d", &num);
		if (num > tem)
		{
			printf("猜大了\n");
		}
		else if (num < tem)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}

}
void start()
{
	printf("***************\n");
	printf("*    玩吗     *\n");
	printf("*    1.玩     *\n");
	printf("*    0.不玩   *\n");
	printf("***************\n");
}
int main()
{
	int input = 0;

	srand(time(NULL));
	do 
	{
		start();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			guess();
			break;
		case 0:
			break;
		default:
			printf("输入的什么玩意，重新输入！\n");
			break;
		}
	} while (input);

	return 0;
}