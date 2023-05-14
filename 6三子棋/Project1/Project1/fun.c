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
	printf("��һغϣ�\n");
	printf("����������(�ÿո����)��\n");
	
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
				printf("���λ�ò����Էţ�\n");
			}
		}
		else
		{
			printf("���λ���ܳ������ˣ�\n");
		}

	} while (1);
}

void computermove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("���Իغ�:\n");
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

char judge(char board[ROW][COL], int row, int col)//����'&'���Ӯ;����'#'����Ӯ;
{												  //����'p',ƽ��;����'c'������;
	int i = 0;
	int j = 0;
	int count = 0;
	int flag = 0;
	for (i = 0; i < row; i++)//�ж����Ӯ(��)
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
	for (j = 0; j < col; j++)//�ж����Ӯ������
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
	for (j = 0; j < col; j++)//�ж����Ӯ���Խǣ�
	{
		for (i = 0; i < row; i++)
		{
			if (board[0][0] == '&' && board[1][1] == '&' && board[2][2] == '&')                  //����������
			{
				return '&';
			}
		}
	}
	for (j = 0; j < col; j++)//�ж����Ӯ���Խ�2��
	{
		for (i = 0; i < row; i++)
		{
			if (board[0][2] == '&' && board[1][1] == '&' && board[2][0] == '&')                  //����������
			{
				return '&';
			}
		}
	}
	for (i = 0; i < row; i++)//�жϵ���Ӯ(��)
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
	for (j = 0; j < col; j++)//�жϵ���Ӯ������
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
	for (j = 0; j < col; j++)//�жϵ���Ӯ���Խǣ�
	{
		for (i = 0; i < row; i++)
		{
			if (board[0][0] == '#' && board[1][1] == '#' && board[2][2] == '#')                  //����������
			{
				return '#';
			}
		}
	}
	for (j = 0; j < col; j++)//�жϵ���Ӯ���Խ�2��
	{
		for (i = 0; i < row; i++)
		{
			if (board[0][2] == '#' && board[1][1] == '#' && board[2][0] == '#')                  //����������
			{
				return '#';
			}
		}
	}
	for (i = 0; i < row; i++)//�ж�ƽ��
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
	return 'c';//�����Ծ�
}