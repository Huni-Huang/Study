#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "game.h"


void menu() {
	printf("**************************\n");
	printf("**1.Play          0.Exit**\n");
	printf("**************************\n");
}

void init_Board(char board[LINE][COLUMM]) {
	int i = 0, j = 0;
	for (i = 0; i < LINE; i++)
	{
		for (j = 0; j < COLUMM; j++) {
			board[i][j] = ' ';
		}
	}
}

void display_board(char board[LINE][COLUMM],int line,int column) {
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++) {
			printf(" %c ", board[i][j]);
			if (j<column-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<line-1)
		{
			for (int k = 0; k < column; k++)
			{
				printf("---");
				if (k < column - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[LINE][COLUMM], int line, int column) {
	int line1 = 0, column1 = 0;
	printf("请玩家输入棋盘坐标->\n");
	while (1)
	{
		scanf("%d %d", &line1, &column1);
		if (line1 >= 1&&line1<=LINE && column1 >=1&& column1<=COLUMM)
		{
			if (board[line1-1][column1-1] != '*' && board[line1-1][column1-1] != '#')
			{
				board[line1 - 1][column1 - 1] = '*';
				break;
			}
			else
			{
				printf("玩家：当前位置不能落棋，请重新输入->\n");
			}
		}
		else
		{
			printf("输入的坐标过大，请重新输入->\n");
		}
		
	}
	display_board(board, line, column);
}

void ComputerMove(char board[LINE][COLUMM], int line, int column) {
	//产生随机数范围：[m,n]
	//int a = m+rand()%(n-m+1);
	int line2 = 0, column2 = 0;
	printf("电脑开始下棋->\n");
	while (1)
	{
		line2 = 1 + rand() % LINE;
		column2 =1 + rand() % COLUMM;
		if (board[line2-1][column2-1]!='*' && board[line2-1][column2-1] != '#')
		{
			board[line2 - 1][column2 - 1] = '#';
			break;
		}
	}
	display_board(board, line, column);
}

int VerifyBoardFull(char board[LINE][COLUMM], int line, int column) {
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char iswin(char board[LINE][COLUMM], int line, int column) {
	for (int i = 0; i < line; i++)
	{
		if (board[i][0] == board[i][1]&&board[i][1] == board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	for (int j = 0; j < line; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	if (board[0][0] == board[1][1]&&board[1][1] == board[2][2]&&board[1][1]!=' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (1==VerifyBoardFull(board,line,column))
	{
		return 'q';
	}else
		return 'c';
}

void Print_info(char ret) {
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}
}



