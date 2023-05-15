#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*********************\n");
	printf("*****  扫雷   *******\n");
	printf("***** 1.star  *******\n");
	printf("***** 0.exit  *******\n");
	printf("*********************\n");

}

void game()
{
	char bang[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	int count = 0;
	//初始化雷盘
	loadboard(bang, ROWS, COLS, '0');
	//初始化玩家棋盘
	loadboard(show, ROWS, COLS, '*');
	//雷盘放雷
	set_bang(bang, ROW, COL);
	//打印棋盘
	showboard(bang, ROW, COL);
	//玩家行动
	play(bang, show, ROW, COL);
}
void choice()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏->\n");
			game();
			break;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
			printf("你输入的是什么？\n");
		}
	} while (input);
}




int main()
{
	srand((unsigned)time(NULL));
	choice();//玩家选择游戏
	game();//开始游戏
	return 0;
}