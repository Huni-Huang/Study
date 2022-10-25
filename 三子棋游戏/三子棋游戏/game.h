#ifndef __GAME_H__
#define __GAME_H_
#define LINE 3
#define COLUMM 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void menu();
void init_Board(char board[LINE][COLUMM]);
void display_board(char board[LINE][COLUMM], int line, int column);
void PlayerMove(char board[LINE][COLUMM], int line, int column);
void ComputerMove(char board[LINE][COLUMM],int line,int column);
int VerifyBoardFull(char board[LINE][COLUMM], int line, int column);
char iswin(char board[LINE][COLUMM],int line,int column);
void Print_info(char ret);
#endif // !__GAME_H__
