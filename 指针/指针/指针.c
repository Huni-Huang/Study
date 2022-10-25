#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 
//int main() {
//	int a = 0x11223344;
//
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//向后偏移1*4个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//向后偏移1*1个字节
//	return 0;
//}


//int main() {
//	int a = 20;
//	int* pa = &a;
//	*pa = 22;
//	printf("%d\n", *pa);
//	printf("%d\n", a);
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa = arr;
//	for ( i = 0; i < sz; i++)
//	{
//		/*printf("%d ",*pa++);*/
//		printf("%d ", *pa);
//		pa++;
//	}
//	return 0;
//}


//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa = &arr[9];
//	for ( i = 0; i < sz; i++)
//	{
//		/*printf("%d ",*pa++);*/
//		printf("%d ", *pa);
//		pa--;
//	}
//	return 0;
//}


//指针 - 指针，就是地址减地址

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int* pa1 = &arr[9];
//	int ret = 0;
//	ret = pa1 - pa;
//	printf("%d", ret);
//	return 0;
//}

//递归实现strlen函数
//int strlen_1(char* string) {
//	if (*string == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + strlen_1(string + 1);
//}
//
//int main() {
//	int ret = 0;
//	char arr[] = "aaaabbbbcccc";
//	ret = strlen_1(arr);
//	printf("%d \n", ret);
//	return 0;
//}

//指针 - 指针实现strlen函数
//int my_strlen(char* arr) {
//	char* start = arr;
//	char* end = arr;
//	int ret = 0;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	ret = end - start;
//	return ret;
//}
//int main() {
//	char arr[] = { "aaaabbbbcccc" };
//	int ret = 0;
//	ret = my_strlen(arr);
//	printf("%d \n", ret);
//	return 0;
//}

//指针+-运算

//int main() {
//	int arr[5] = { 0 };
//	int* pa = NULL;
//	for ( pa = arr; pa < &arr[5];)
//	{
//		*pa++ = 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//指针关系运算，指针比较大小，也就是地址比较大小

//int main() {
//	int arr[5] = { 0 };
//	int* pa = NULL;
//	for ( pa = &arr[5]; pa > &arr[0];)
//	{
//		*--pa = 3;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//二级指针
//int main() {
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d %d %d \n", a, *pa, **ppa);
//	printf("%p %p %p ", &a, &pa, &ppa);
//	return 0;
//}

//指针数组---存放指针-赋值
//int main() {
//	int* arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = &i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}



//编程：利用指针数组处理一个二维数组，要求求出二维数组所有元素的和

//int main() {
//	int arr[4][5] = { 1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10 };
//	int i = 0, j = 0;
//	int ret = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		for ( j = 0; j < 5; j++)
//		{
//			printf("arr[%d][%d] = %d \n", i,j,arr[i][j]);
//		}
//	}
//	int* pa[4] = { 0 };
//	pa[0] = arr[0];
//	pa[1] = arr[1];
//	pa[2] = arr[2];
//	pa[3] = arr[3];
//	for (int k = 0; k < 4; k++)
//	{
//		for (int h = 0; h < 5; h++)
//		{
//			ret = *(pa[k] + h) + ret;
//			puts("");
//		}
//		
//	}
//	printf("ret = %d ", ret);
//	return 0;
//}

//冒泡排序

//void sort(int *arr,int sz) {
//	int i = 0, j = 0,tmp = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//
//int main() {
//	int arr[] = { 12,2,33,44,5,62,4,84,9,140 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//对数组进行操作
//初始化为0
//void init(int* arr, int sz) {
//	arr = malloc(sizeof(arr)+1);
//	memset(arr, 0, sizeof(arr));
//}
//
////打印数组
//void my_printf(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
////让数组元素反过来
//void reverse(int* arr, int sz) {
//	int tmp;
//	int start = 0;
//	int end = sz - 1;
//	while (start<=end)
//	{
//		tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	//my_printf(arr, sz);
//	reverse(arr, sz);
//	my_printf(arr, sz);
//	return 0;
//} 

//将数组A中的内容和数组B中的内容进行交换，数组一样大

/*void Exchange(int* a,int* b,int sz) {
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		int tmp = 0;
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
}

void my_printf(int* arr, int sz) {
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9};
	int b[] = { 11,22,33,44,55,66,77,88,99};
	int sz = sizeof(a) / sizeof(b[0]);
	Exchange(a, b, sz);
	my_printf(a, sz);
	printf("\n");
	my_printf(b, sz);
	return 0;
}*/ 


//统计一个整数的二进制中 1 的个数

//int count(int number) {
//	int ret = 0; 
//	while (number)
//	{
//		number = number & (number - 1);
//		ret++;
//	}
//	return ret;
//}
//
//
//int main() {
//	int ret = 0, number = 13;
//	ret = count(number);
//	printf("%d ", ret);
//	int a = 3 & 2;
//	printf("%d ", a);
//	return 0;
//}


//统计两个整数n,m的二进制中有多少个不一样的值

//int get_diff_bit(int m, int n) {
//	int count = 0, tmp = 0;
//	tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main() {
//	int ret = 0,m = 1999,n = 2299 ;
//	ret = get_diff_bit(m, n);
//	printf("%d ", ret);
//	return 0;
//}

//获取一个整数二进制中所有偶数位和奇数位，分别打印出偶数位和奇数位

//void print(int m) {
//	int i = 0;
//	printf("奇数位\n");
//	for ( i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位\n");
//	for ( i = 31;  i >= 1;  i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//
//}
//
//int main() {
//	int m = -1;
//	print(m);
//	return 0;
//}

//交换两个变量的值，不允许创建临时变量

//int main() {
//	int a = 3, b = 5;
//	printf("%d %d \n", a, b);
//	           //0011  a
//	           //1001  b
//	a = a ^ b; //1010
//	b = a ^ b; //0011
//	a = a ^ b; //1001
//	printf("%d %d ", a, b);
//	return 0;
//}

//使用指针打印数组内容，不能使用数组下标，使用指针

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* pa = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}

//实现一个函数，输入9，输出9 * 9口诀表，输入12，输出12 * 12口诀表

//void print_table(int n) {
//	int i = 1, j = 1;
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%-2d * %-2d = %-2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//10.22
//递归的方式实现打印一个整数的每一位
//void print(int m) {
//	if (m > 9)
//	{
//		print(m / 10);
//	}
//	printf("%d\n", m % 10);
//}
//
//int main() {
//	int m = 0;
//	print(1234);
//	return 0;
//}

//递归和非递归分别实现求n得阶乘

//int fac(int n) {
//	int ret = 1;
//	if (n <= 0)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//	}
//	return ret;
//}
//
//int fac1(int n) {
//	int ret = 1;
//	if (n==1)
//	{
//		return 1;
//	}
//	else {
//		return ret = n * fac(n - 1);
//	}
//		
//}
//
//
//int main() {
//	int n = 0, ret = 0, ret1 = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d \n", ret);
//	ret1 = fac1(n);
//	printf("%d ", ret1);
//	return 0;
//}

//递归和非递归实现strlen 函数

//int my_strlen(char* arr) {
//	int count = 0,n = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int my_strlen1(char* arr) {
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen1(arr + 1);
//	}
//	else
//		return 0;
//}
//
//int main() {
//	int count = 0,count1 = 0,ret = 0;
//	char arr[] = { "huni is no.1" };
//	ret = strlen(arr);
//	printf("%d \n", ret);
//
//	count = my_strlen(arr);
//	printf("%d \n", count);
//
//
//	count1 = my_strlen1(arr);
//	printf("%d \n", count1);
//	
//	return 0;
//}


//将一个字符串 逆序，比如内容为 abcdef，变成 fedcba
//不能使用C语言的库函数
//采用递归 和 非递归方法

//int my_strlen(char* arr) {
//	int count = 0;
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
////非递归
//void reverse_arr(char* arr) {
//	char tmp = 0;
//	int left = 0;
//	int right = (my_strlen(arr))-1;
//	while (left<=right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//// 递归
//void reverse_arr1(char* arr,int left,int right) {
//	char tmp = 0;
//	if (left<=right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		reverse_arr1(arr, left + 1, right - 1);
//	}
//}
//
//int main() {
//	char arr[] = "abcdef";
//	char arr1[] = "abcdef";
//	reverse_arr(arr);
//	printf("%s \n", arr);
//
//	int left = 0;
//	int right = (my_strlen(arr1)) - 1;
//	reverse_arr1(arr1,left,right);
//	printf("%s \n", arr1);
//	return 0;
//}

//写一个递归函数DigiSum(n),输入的 n 为一个非负整数，返回 组成它的数字之和
// DiguSum(1729) 应该返回 1+7+2+9，和是19

//int DigiSum(unsigned int n) {
//	unsigned int ret = 0;
//	if (n > 9)
//	{
//		return n % 10 + DigiSum(n / 10);
//	}
//	else
//		return n;
//}
//
//int main() {
//	unsigned int n = 0 , ret = 0;
//	scanf("%d", &n);
//	ret = DigiSum(n);
//	printf("%d ", ret);
//	return 0;
//}


//递归实现 n 的 K 次方
//double Pow(int n, int k) {
//	if (k == 0)
//	{
//		return 1;
//		
//	}
//	else if(k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1 / (Pow(n, -k));
//	}
//}
//
//int main() {
//	int n = 0, k = 0;
//	double ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf ", ret);
//	return 0;
//}

// “水仙花数”是指一个三位数，其每位数字的立方和等于该数本身。
//例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。

//int main() {
//	int i = 0,ge = 0,shi = 0,bai = 0;
//	for ( i = 100; i < 1000; i++)
//	{
//		int ge = 0, shi = 0, bai = 0,ret = 0;
//		ge = i % 10;
//		shi = (i / 10) % 10;
//		bai = i / 100;
//		ret = ge * ge * ge + shi * shi * shi + bai * bai * bai;
//		if (i == ret)
//		{
//			printf("%d ", i);
//		}
//	}
//}

