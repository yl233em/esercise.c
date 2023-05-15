#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define BANG 78
#define ROW 9
#define COL 9
#define ROWS ROW+1
#define COLS COL+1
//初始化棋盘
void loadboard(char board[ROWS][COLS], int rows, int cols, char c);
//打印棋盘
void showboard(char board[ROWS][COLS], int row, int col);
//雷盘放雷
void set_bang(char bang[ROWS][COLS], int row, int col);
//玩家行动
int play(char bang[ROWS][COLS], char show[ROWS][COLS], int row, int col);