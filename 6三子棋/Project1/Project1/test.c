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
			printf("玩家赢！\n");
			break;
		}
		if (status == '#')
		{
			printf("电脑赢！\n");
			break;
		}
		if (status == 'p')
		{
			printf("平局！\n");
			break;
		}
		computermove(board, ROW, COL);
		printboard(board, ROW, COL);
		status = judge(board, ROW, COL);
		if (status =='&')
		{
			printf("玩家赢！\n");
			break;
		}
		if (status == '#')
		{
			printf("电脑赢！\n");
			break;
		}		
		if (status == 'p')
		{
			printf("平局！\n");
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
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("游戏开始\n");
				star();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:
				printf("输入有误！\n");
				
		}
	} while (input);
}

int main()
{
	choic();
	return 0;
}