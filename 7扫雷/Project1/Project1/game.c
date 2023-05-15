#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void loadboard(char board[ROWS][COLS], int rows, int cols, char c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j <COLS; j++)
		{
			board[i][j] = c;
		}
	}
}

void showboard(char board[ROWS][COLS], int row, int col)
{
	int i = row;
	int j = col;
	for (i = 0; i < row+1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row+1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < col+1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_bang(char bang[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while(count < BANG)
	{
		x = rand() % row;
		y = rand() % col;
		if (bang[x+1][y+1] == '0')
		{
			bang[x+1][y+1] = '1';
			count++;
		}
	}
}

int play(char bang[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;
	printf("请输入坐标:\n");
	do
	{
		scanf("%d %d", &x, &y);

		if (x < 1 || x > row || y < 1 || y > col)
		{
			printf("输入非法坐标，重新输入！\n");
		}
		else
		{
			if (bang[x][y] == '1')
			{
				printf("你输了！\n");
				break;
			}
			else
			{
				for (i = x - 1; i <= x + 1; i++)
				{

					for (j = y - 1; j <= y + 1; j++)
					{
						if (bang[i][j] == '1')
						{
							count++;
						}
					}
				}
				show[x][y] = '0' + count;
				win++;
			}
		}

	} while (win < ROW * COL - BANG);
	printf("游戏结束！你赢了！");
}