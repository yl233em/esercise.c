#include<stdio.h>
#define ROW 3
#define COL 3
void cleanboard(char board[ROW][COL], int row, int col);//��ʼ������
void printboard(char board[ROW][COL], int row, int col);//��ӡ����
void playermove(char board[ROW][COL], int row, int col);//����ж�
void computermove(char board[ROW][COL], int row, int col);//�����ж�
char judge(char board[ROW][COL], int row, int col);//�ж���Ӯ