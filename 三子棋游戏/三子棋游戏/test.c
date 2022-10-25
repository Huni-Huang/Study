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
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,LINE,COLUMM);
		//判断玩家是否赢
		ret = iswin(board, LINE, COLUMM);
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, LINE, COLUMM);
		//判断输赢
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
		printf("请选择->\n");
		while ((scanf("%d", &input) != 1)){
			while (getchar() != '\n') {
			}
			printf("请重新输入->\n");
		}
		switch (input){
		case 1:
			printf("开始三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	
}