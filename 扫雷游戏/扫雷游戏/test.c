#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void game() {
	
	//1.���ú��׵���Ϣ
	char Ray[ROWS][COLS] = { 0 };
	//�Ų����������Ϣ
	char ShowRay[ROWS][COLS] = { 0 };
	//��ʼ����������
	Initboard(Ray,ROWS,COLS,'0');
	Initboard(ShowRay, ROWS, COLS,'*');
	//��ӡ������
	Displayboard(ShowRay, ROW, COL);
	//������
	SetMine(Ray,ROW,COL);
	Displayboard(Ray, ROW, COL);
	//ɨ��
	FindRay(Ray, ShowRay, ROW, COL);
}


void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��->\n");
		while (scanf("%d",&input)!=1)
		{
			while (getchar()!='\n')
			{
			}
			printf("������������������->\n");
		}
		switch (input)
		{
		case 1:
			printf("ɨ����Ϸ��ʼ->\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ->\n");
			break;
		default:
			printf("ѡ�����������ѡ��->\n");
			break;
		}
	} while (input);
}


int main() {
	test();
	return 0;
}