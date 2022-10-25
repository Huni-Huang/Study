#include <stdio.h>
//递归练习
//用递归函数算出1*2*3*4*..........*n的值
int test1(int n) {
	if (n == 0)
	{
		return 1;
	}
	else
		return n * test1(n - 1);
}

//求第n个斐波那契数列   1 1 2 3 5 8 13...从第二个数开始，每个数都等于前两个数之和
int test2(int n) {
	if (n <= 2)
	{
		return 1;
	}
	else {
		return test2(n - 1) + test2(n - 2);
	}
}

//输入一个数，得到这个数的每个位数的数之和。例如1234，得到1+2+3+4，为10
int test3(int n) {
	if (n<10)
	{
		return n;
	}
	else {
		return n % 10 + test3(n / 10);
	}
}

//编写一个函数实现n的k次方，使用递归实现

double test4(int n, int k) {
	if (k > 0)
	{
		return n * test4(n, k - 1);
	}
	else if (k == 0)
	{
		return 1.0;
	}
	else
		return 1.0 / test4(n, -k);

}



int main() {
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;
	double result4 = 0;
	//test 1
	result1 = test1(10);
	printf("result1 = %d\n", result1);
	//test 2 
	result2 = test2(5);
	printf("result2 = %d\n", result2);
	//test 3 
	result3 = test3(1234);
	printf("result3 = %d\n", result3);
	//test 4 
	result4 = test4(2,-3);
	printf("result4 = %.3lf\n", result4);
}