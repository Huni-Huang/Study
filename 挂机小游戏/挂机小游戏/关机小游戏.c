#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
	char arr[30] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ĵ��Խ���һ����֮�ڹػ���������: ����һͷ��������\n");
		printf("һ�����ڲ����룬���Լ����ػ�������\n");
		scanf("%s", arr);
		if (strcmp(arr, "����һͷ��������") == 0)
		{
			system("shutdown -a");
			printf("ȡ���ػ��ɹ�������\n");
			break;
		}
	}
}