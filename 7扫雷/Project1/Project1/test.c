#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*********************\n");
	printf("*****  ɨ��   *******\n");
	printf("***** 1.star  *******\n");
	printf("***** 0.exit  *******\n");
	printf("*********************\n");

}

void game()
{
	char bang[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	int count = 0;
	//��ʼ������
	loadboard(bang, ROWS, COLS, '0');
	//��ʼ���������
	loadboard(show, ROWS, COLS, '*');
	//���̷���
	set_bang(bang, ROW, COL);
	//��ӡ����
	showboard(bang, ROW, COL);
	//����ж�
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
			printf("��ʼ��Ϸ->\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("���������ʲô��\n");
		}
	} while (input);
}




int main()
{
	srand((unsigned)time(NULL));
	choice();//���ѡ����Ϸ
	game();//��ʼ��Ϸ
	return 0;
}