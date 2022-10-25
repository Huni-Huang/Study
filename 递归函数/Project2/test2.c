#include <stdio.h>
//�ݹ���ϰ
//�õݹ麯�����1*2*3*4*..........*n��ֵ
int test1(int n) {
	if (n == 0)
	{
		return 1;
	}
	else
		return n * test1(n - 1);
}

//���n��쳲���������   1 1 2 3 5 8 13...�ӵڶ�������ʼ��ÿ����������ǰ������֮��
int test2(int n) {
	if (n <= 2)
	{
		return 1;
	}
	else {
		return test2(n - 1) + test2(n - 2);
	}
}

//����һ�������õ��������ÿ��λ������֮�͡�����1234���õ�1+2+3+4��Ϊ10
int test3(int n) {
	if (n<10)
	{
		return n;
	}
	else {
		return n % 10 + test3(n / 10);
	}
}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

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