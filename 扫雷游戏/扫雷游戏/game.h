#ifndef __GAME_H__
#define __GAME_H__

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define RAY_SZ 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void menu();
void Initboard(char Ray[ROWS][COLS],int rows, int cols,char set);
void Displayboard(char Ray[ROWS][COLS], int row, int col);
void SetMine(char Ray[ROWS][COLS], int row, int col);
void FindRay(char Ray[ROWS][COLS], char ShowRay[ROWS][COLS], int row, int col);





#endif // !__GAME_H__
