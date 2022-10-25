#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <math.h>
#include <stdbool.h>

//int main()
//{
//	int max = 0;
//	int arr[5] = {0};
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4-i; j++)
//		{
//			if (arr[j] < arr[j + 1]) {
//				max = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = max;
//			}
//		}
//	}
//	
//	
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main() {
//	int input = 24 ,input2 = 18,r =0;
//	scanf("%d%d", &input,&input2);
//	while (input%input2)
//	{
//		r = input % input2;
//		input = input2;
//		input2 = r;
//
//		printf("zhen\n");
//	}
//
//	printf("%d",input2);
//}

//int main() {
//	int i = 0,j = 0;
//	for (int i = 1; i <=9 ; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",j,i,i * j);
//		}
//		printf("\n");
//	}
//}

//int main() {
//	int a = 0;
//	while ((scanf("%d", &a)) != EOF)
//	{
//		printf("1111\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0, n = 0,ret = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <=n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//}


//int main() {
//	int i = 1, ret = 1,sum  = 0;
//	for (i = 1; i <= 10; i++)
//		{
//			ret = ret * i;
//			sum = sum + ret;
//		}
//	
//	printf("%d\n", sum);
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7,i=0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k) {
//			printf("%d %d\n",i, arr[i]);
//			break;
//		}
//	}
//	if (i==sz)
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}

//二分法写成函数;

//void test1(int *arr,int sz,int n) {
//	int left = 0, right = sz - 1, mid = 0, count = 0;
//	while (left<=right)
//	{
//		count++;
//		mid = (left + right) / 2;
//		if (arr[mid]<n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else {
//			printf("找到了，下标为：%d\n", mid);
//			printf("一共找到了 %d 次\n", count);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("没有找到！\n");
//		printf("一共找了 %d 次\n", count);
//	}
//}
//
//
//int main() {
//	int n = 0,sz = 0;
//	int arr[101] = { 0 };
//	
//	for (int i = 0; i < 101; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (int i = 0; i < 101; i++)
//	{
//		printf("arr[%d]=%-2d ", i, arr[i]);
//	}
//
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	while (1)
//	{
//		scanf("%d", &n);
//		test1(arr, sz, n);
//	}
//	
//	return 0;
//}

//int main() {
//	char arr1[] = { "我是科比布莱恩特你有事谁呀我不知" };
//	char arr2[] = { "********************************" };
//	int left = 0;
//	int sz = strlen(arr1);
//	int right = sz - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	
//	printf("%s", arr2);
//	return 0;
//}

//int main() {
//	int i = 0;
//	char passWord[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码登录->\n");
//		scanf("%s", passWord);
//		if (strcmp(passWord, "123456") == 0)
//		{
//			printf("登录成功->\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误->\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误->\n");
//	}
//	return 0;
//}


//猜数字游戏

//void jindutiao() {
//	char arr[23] = {0};
//	int a = 0;
//	while (a<21)
//	{
//		printf("[%-20s] [%0.f%%]\r", arr, a * 4.99);
//		fflush(stdout);
//		arr[a] = '#';
//		a++;
//		Sleep(100);
//	}
//	printf("\n");
//	return 0;
//}
//int main() {
//	int input = 0, a = 0,number =0;
//	srand((unsigned int)time(0));
//	do
//	{
//		printf("**********************\n");
//		printf("**----1.开始游戏----**\n");
//		printf("**------------------**\n");
//		printf("**----0.退出游戏----**\n");
//		printf("**------------------**\n");
//		printf("请选择是否开始游戏->\n");
//		while (scanf("%d", &input) != 1) {
//			while (getchar() != '\n')
//			{
//			}
//			printf("输入错误，请重新输入->\n");
//		}
//		jindutiao();
//		switch (input)
//		{
//		case 1:
//			a = rand() % 10;
//			while (1){
//				printf("rang = % d\n", a);
//				printf("请输入数字->\n");
//				scanf("%d", &number);
//				if (number == a){
//					printf("猜对了->\n");
//					Sleep(1000);
//					system("cls");
//					break;
//				}
//				else if (number < a) {
//					printf("猜小了->\n");
//				}
//				else {
//					printf("猜大了->\n");
//				}
//			}
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，重新开始->\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		}
//	} while (input);
//}


//字符串拷贝

//int main() {
//	char arr[5] = { "huni" };
//	char arr1[20] = { "*************" };
//	strcpy(arr1, arr);
//	printf("%s\n", arr1);
//	arr1[4] = '#';
//	printf("%s\n", arr1);
//
//	memset(arr1, '#', 19);
//	printf("%s\n", arr1);
//	return 0;
//}


//判断一个数是不是素数，素数指的是什么 素数也被称为质数。
//一个大于1的正整数,如果除了1和它本身以外,不能被其他正整数整除,就叫素数

//int is_Prime(int n) {
//	int i = 0;
//	for ( i = 2; i < sqrt(n); i++){
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int a = 0,b= 0;
//	for ( a = 100; a <= 200; a++){
//		if (is_Prime(a) ==1){
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}

//二分查找写成函数，找到了返回数字下标，没找到返回-1。


//int binary_search(int arr[], int n,int sz) {
//	int left = 0, right = 0, mid = 0;
//	right = sz - 1;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > n) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < n) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}if (left>right){
//		return -1;
//	}
//	
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret = binary_search(arr, 9, sz);
//	if (ret ==-1){
//		printf("没有找到->\n");
//	}
//	else {
//		printf("找到了，下标为%d\n ", ret);
//	}
//	return 0;
//}


//创建一个函数，每次调用函数  num则加1，

//因为函数里面需要改变num的值，所以要选择使用指针传地址的方式才可以改变num的值，
//函数内使用必须要原型  也就是*p,因为++的优先级高，所以要把*p 括号起来

//void nummber(int *p) {
//	(*p)++;
//}
//int main() {
//	int num = 0;
//	nummber(&num);
//	printf("%d\n", num);
//	nummber(&num);
//	printf("%d\n", num);
//	nummber(&num);
//	printf("%d\n", num);
//}

//递归函数
// 输入一个数，按照顺序打印每一位

//int print(int n) {
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main() {
//	unsigned int num = 237;
//	print(num);
//	return 0;
//}

//递归函数
//编写一个函数，其中不允许创建变量，求字符串长度

//int my_strlen(char *arr) {
//	if (*arr !='\0')
//	{
//		return 1 + my_strlen(arr+1);
//	}
//	else
//		return 0;
//}
//
//int main() {
//	char arr[] = "huni";
//	int len = 0;
//	len = my_strlen(arr);
//	printf("len = %d ", len);
//	return 0;
//}

//递归函数
//求n的阶乘，1*2*3*4....*n;

//int fac1(int n) {
//	if (n>1)
//		return n* fac1(n - 1);
//	else
//		return 1;
//}
//
//int main() {
//	int n = 5;
//	int ret = 0;
//	ret = fac1(n);
//	printf("ret = %d ", ret);
//	return 0;
//}


//冒泡排序并优化减少比较次数练习
//升序

//void bubble_sort(int *arr,int sz) {
//	int i = 0,tmp = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		
//	}
//}
//
//int main() {
//	int arr[] = { 10,22,2,1,3,3,6,7,9,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	printf("\n");
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	return 0;
//}


//选择排序练习
//升序

//void select_sort(int arr[],int sz) {
//	int min = 0,tmp = 0,i=0,j=0;
//	for ( i = 0; i < sz; i++)
//	{
//		min = i;
//		for ( j = i+1; j < sz; j++)
//		{
//			if (arr[min]>arr[j]) {
//				min = j;
//			}
//		}if (min !=i)
//		{
//			tmp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = tmp;
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 10,22,2,1,3,3,6,7,9,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	printf("\n");
//	select_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	return 0;
//}


//右移操作符
//也就是算术运算，将值换算成二进制，值为正数时右边去掉一个，左边加一个0，值为负数，右边去掉0，左边加一个1，

//int main() {
//	int a = 16;//00010000
//	int b = -16;//100010000
//	int a_ret = 0;
//	int b_ret = 0;
//
//	a_ret = a >> 1;
//	b_ret = b >> 1;
//
//	printf("%d\n", a_ret);
//	printf("%d\n", b_ret);
//	return 0;
//}



//左移操作符
//也就是算术运算，将值换算成二进制，值为正数或者时右边加一个0，

//int main() {
//	int a = 16;
//	int b = -16;
//	int a_ret = 0;
//	int b_ret = 0;
//
//	a_ret = a << 1;
//	b_ret = b << 1;
//
//	printf("%d\n", a_ret);
//	printf("%d\n", b_ret);
//	return 0;
//}


//位操作符
//按位与---&
//也就是按照二进制位与
//规律：有0则为0，同时为1则为1


//int main() {
//	int a = 3;      //00000000000000000000000000000011
//	int b = 5;      //00000000000000000000000000000101
//	int c = a & b;  //00000000000000000000000000000001
//	printf("%d", c);
//	return 0;
//}

//位操作符
//按位或---|
//也就是按照二进制位或
//规律：有1则为1，其他为0

//int main() {
//	int a = 3;    //00000000000000000000000000000011
//	int b = 5;    //00000000000000000000000000000101
//	int c = a | b;//00000000000000000000000000000111
//	printf("%d", c);
//	return 0;
//}


//位操作符
//按位异或--- ^
//也就是按照二进制位 异或
//规律：相同为0，不同为1


//int main() {
//	int a = 3;      //00000000000000000000000000000011
//	int b = 5;      //00000000000000000000000000000101
//	int c = a ^ b;  //00000000000000000000000000000110
//	printf("%d", c);
//	return 0;
//}

//求一个整数 二进制中 1 的个数

//int main() {
//	int num = 0,count = 0;
//	printf("请输入一个整数\n");
//	scanf("%d", &num);
//	for (int i = 0; i < 32; i++)// 32 的意思是整数的二进制在内存中为32 个bit
//	{
//		if (1==((num>>i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

int main() {
	int a = 1;
	char b = 'a';
	char* p = &b;
	char arr[10] = { 0 };

	printf("%d\n", (int)sizeof(a));
	printf("%d\n", (int)sizeof(b));
	printf("%d\n", (int)sizeof(p));
	printf("%d\n", (int)sizeof(arr));

	return 0;
}

