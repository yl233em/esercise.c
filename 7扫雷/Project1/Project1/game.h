#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define BANG 78
#define ROW 9
#define COL 9
#define ROWS ROW+1
#define COLS COL+1
//��ʼ������
void loadboard(char board[ROWS][COLS], int rows, int cols, char c);
//��ӡ����
void showboard(char board[ROWS][COLS], int row, int col);
//���̷���
void set_bang(char bang[ROWS][COLS], int row, int col);
//����ж�
int play(char bang[ROWS][COLS], char show[ROWS][COLS], int row, int col);