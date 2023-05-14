#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void cleanboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void printboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("玩家回合：\n");
	printf("请输入坐标(用空格隔开)：\n");
	
	do
	{
		scanf("%d %d", &i, &j);
		if (i - 1 < row && j - 1 < col && i - 1 >= 0 && j - 1 >= 0)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '&';
				break;
			}
			else
			{
				printf("这个位置不可以放！\n");
			}
		}
		else
		{
			printf("这个位置跑出棋盘了！\n");
		}

	} while (1);
}

void computermove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("电脑回合:\n");
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i ][j ] == ' ')
		{
			board[i ][j ] = '#';
			break;
		}
	}
}

char judge(char board[ROW][COL], int row, int col)//返回'&'玩家赢;返回'#'电脑赢;
{												  //返回'p',平局;返回'c'，继续;
	int i = 0;
	int j = 0;
	int count = 0;
	int flag = 0;
	for (i = 0; i < row; i++)//判断玩家赢(横)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '&')
			{
				count++;
			}
		}
		if (count == row)
		{
			return '&';
		}
		count = 0;

	}
	for (j = 0; j < col; j++)//判断玩家赢（竖）
	{
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == '&')
			{
				count++;
			}
		}
		if (count == row)
		{
			return '&';
		}
		count = 0;

	}
	for (j = 0; j < col; j++)//判断玩家赢（对角）
	{
		for (i = 0; i < row; i++)
		{
			if (board[0][0] == '&' && board[1][1] == '&' && board[2][2] == '&')                  //仅限三子棋
			{
				return '&';
			}
		}
	}
	for (j = 0; j < col; j++)//判断玩家赢（对角2）
	{
		for (i = 0; i < row; i++)
		{
			if (board[0][2] == '&' && board[1][1] == '&' && board[2][0] == '&')                  //仅限三子棋
			{
				return '&';
			}
		}
	}
	for (i = 0; i < row; i++)//判断电脑赢(横)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '#')
			{
				count++;
			}
		}
		if (count == row)
		{
			return '#';
		}
		count = 0;

	}
	for (j = 0; j < col; j++)//判断电脑赢（竖）
	{
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == '#')
			{
				count++;
			}
		}
		if (count == row)
		{
			return '#';
		}
		count = 0;

	}
	for (j = 0; j < col; j++)//判断电脑赢（对角）
	{
		for (i = 0; i < row; i++)
		{
			if (board[0][0] == '#' && board[1][1] == '#' && board[2][2] == '#')                  //仅限三子棋
			{
				return '#';
			}
		}
	}
	for (j = 0; j < col; j++)//判断电脑赢（对角2）
	{
		for (i = 0; i < row; i++)
		{
			if (board[0][2] == '#' && board[1][1] == '#' && board[2][0] == '#')                  //仅限三子棋
			{
				return '#';
			}
		}
	}
	for (i = 0; i < row; i++)//判断平局
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	if (flag == 1)
	{
		return 'p';
	}
	return 'c';//继续对局
}