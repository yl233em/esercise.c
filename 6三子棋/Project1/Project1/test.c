#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void star()
{
	char board[ROW][COL] = { 0 };
	char status = 1;
	cleanboard(board, ROW, COL);
	printboard(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		printboard(board, ROW, COL);
		status = judge(board, ROW, COL);
		if (status == '&')
		{
			printf("���Ӯ��\n");
			break;
		}
		if (status == '#')
		{
			printf("����Ӯ��\n");
			break;
		}
		if (status == 'p')
		{
			printf("ƽ�֣�\n");
			break;
		}
		computermove(board, ROW, COL);
		printboard(board, ROW, COL);
		status = judge(board, ROW, COL);
		if (status =='&')
		{
			printf("���Ӯ��\n");
			break;
		}
		if (status == '#')
		{
			printf("����Ӯ��\n");
			break;
		}		
		if (status == 'p')
		{
			printf("ƽ�֣�\n");
			break;
		}	
	}

}
void menu()
{
	printf("*****************************\n");
	printf("*****1.play       0.exit*****\n");
	printf("*****************************\n");
}

void choic()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("��Ϸ��ʼ\n");
				star();
				break;
			case 0:
				printf("��Ϸ����\n");
				break;
			default:
				printf("��������\n");
				
		}
	} while (input);
}

int main()
{
	choic();
	return 0;
}