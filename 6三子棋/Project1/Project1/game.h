#include<stdio.h>
#define ROW 3
#define COL 3
void cleanboard(char board[ROW][COL], int row, int col);//初始化棋盘
void printboard(char board[ROW][COL], int row, int col);//打印棋盘
void playermove(char board[ROW][COL], int row, int col);//玩家行动
void computermove(char board[ROW][COL], int row, int col);//电脑行动
char judge(char board[ROW][COL], int row, int col);//判断输赢