#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu(){
		printf("&-------------------------&\n");
		printf("|          1.Play         |\n");
		printf("|-------------------------|\n");
		printf("|          0.Exit         |\n");
		printf("&-------------------------&\n");
}


void Initboard(char Ray[ROWS][COLS], int rows, int cols,char set) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Ray[i][j] = set;
		}
	}
}


void Displayboard(char Ray[ROWS][COLS], int row, int col) {
	int i = 0,k = 0,h=0;
	for ( i = 1; i <= col; i++)
	{
		printf("   %d ", i);
	}
	printf("\n");
	printf("\n");
	for ( k = 1; k <= row; k++)
	{
		printf("%d", k);
		for ( h = 1; h <= col; h++)
		{
			printf("  %c  ", Ray[k][h]);
		}
		printf("\n");
		printf("\n");
	}
	//想打印格子的话如下
	/*for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j<=col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<=row-1)
		{
			for (k = 1; k <= col; k++)
			{
				printf("----");
			}
		}
		printf("\n");
	}*/
}


void SetMine(char Ray[ROWS][COLS], int row, int col) {
	int ray_sz = RAY_SZ;
	int i = 1;
	while (ray_sz)
	{
		int x = 1 + rand() % row;
		int y = 1 + rand() % col;
		if (Ray[x][y]=='0')
		{
			Ray[x][y] = '1';
			ray_sz--;
		}
	}
}


int Get_Ray_Count(char Ray[ROWS][COLS], int x, int y) {
	return Ray[x - 1][y] +
		Ray[x - 1][y - 1] +
		Ray[x][y - 1] +
		Ray[x + 1][y - 1] +
		Ray[x + 1][y] +
		Ray[x + 1][y + 1] +
		Ray[x][y + 1] +
		Ray[x - 1][y + 1] - 8 * '0';
}


int Expand(char Ray[ROWS][COLS], char ShowRay[ROWS][COLS], int x,int y,int ret) {
	int count = Get_Ray_Count(Ray, x, y);
	if (x >= 1 && y >= 1 && x <= 9 && y<= 9 && Ray[x][y] =='0' && ShowRay[x][y] == '*')
	{
		if (count != 0)
		{
			ShowRay[x][y] = count + '0';
			ret++;
		}
		else
		{
			ShowRay[x][y] = ' ';
			ret++;
			for (int i = -1; i < 1; i++)
			{
				for (int j = -1; j < 1; j++)
				{
					Expand(Ray, ShowRay, x+i, y+j, ret);
				}
			}
		}
		return ret;
	}
}



void FindRay(char Ray[ROWS][COLS], char ShowRay[ROWS][COLS], int row, int col) {
	int x = 0, y = 0;
	int ret = 1,ray_sz = 0,count = 0;
	do
	{
		
		printf("请输入坐标->\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Ray[x][y] == '1')
			{
				printf("很遗憾，你被炸死了->\n");
				Displayboard(Ray, row, col);
				ret = 0;
				break;
			}
			else
			{
				count = Expand(Ray, ShowRay, x, y,count);
				Displayboard(ShowRay, row, col);
			}
		}
		else
			printf("输入坐标非法，请重新输入->\n");
		if (count == row*col-RAY_SZ)
		{
			ret = 0;
			printf("恭喜你完成游戏->\n");
			Displayboard(Ray, row, col);
		}
	} while (ret);
	
}
