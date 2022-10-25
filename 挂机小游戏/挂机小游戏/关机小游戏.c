#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
	char arr[30] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("你的电脑将在一分钟之内关机，请输入: 我是一头大笨猪！！！\n");
		printf("一分钟内不输入，电脑即将关机！！！\n");
		scanf("%s", arr);
		if (strcmp(arr, "我是一头大笨猪！！！") == 0)
		{
			system("shutdown -a");
			printf("取消关机成功！！！\n");
			break;
		}
	}
}