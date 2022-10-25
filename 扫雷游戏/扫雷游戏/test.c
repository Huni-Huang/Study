#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void game() {
	
	//1.布置好雷的信息
	char Ray[ROWS][COLS] = { 0 };
	//排查出来的雷信息
	char ShowRay[ROWS][COLS] = { 0 };
	//初始化两个数组
	Initboard(Ray,ROWS,COLS,'0');
	Initboard(ShowRay, ROWS, COLS,'*');
	//打印雷棋盘
	Displayboard(ShowRay, ROW, COL);
	//布置雷
	SetMine(Ray,ROW,COL);
	Displayboard(Ray, ROW, COL);
	//扫雷
	FindRay(Ray, ShowRay, ROW, COL);
}


void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择->\n");
		while (scanf("%d",&input)!=1)
		{
			while (getchar()!='\n')
			{
			}
			printf("输入有误，请重新输入->\n");
		}
		switch (input)
		{
		case 1:
			printf("扫雷游戏开始->\n");
			game();
			break;
		case 0:
			printf("退出游戏->\n");
			break;
		default:
			printf("选择错误，请重新选择->\n");
			break;
		}
	} while (input);
}


int main() {
	test();
	return 0;
}