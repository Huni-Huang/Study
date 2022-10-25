#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include "game.h"


char board[LINE][COLUMM] = { 0 };

void game() {
	char ret = 0;
	int a = 0;
	srand((unsigned int)time(0));
	init_Board(board);
	display_board(board, LINE, COLUMM);
	//����
	while (1)
	{
		//�������
		PlayerMove(board,LINE,COLUMM);
		//�ж�����Ƿ�Ӯ
		ret = iswin(board, LINE, COLUMM);
		if (ret != 'c')
		{
			break;
		}
		//��������
		ComputerMove(board, LINE, COLUMM);
		//�ж���Ӯ
		ret = iswin(board, LINE, COLUMM);
		if (ret != 'c')
		{
			break;
		}
	}
	Print_info(ret);
}

int main() {
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��->\n");
		while ((scanf("%d", &input) != 1)){
			while (getchar() != '\n') {
			}
			printf("����������->\n");
		}
		switch (input){
		case 1:
			printf("��ʼ��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	
}