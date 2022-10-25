#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS 1

//for循环计算1*2*3*4....n的值
//int test(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		result = result * i;
//	}
//	printf("result = %d\n", result);
//}
//
//int main() {
//	//声明结构体
//	struct stu
//	{
//		char name[10];
//		char sex[10];
//		int age;
//		double high;
//		char number[5];
//	};
//	//struct stu s1 = {.name="huni",.sex="man",.age=11,.high=2.01};//初始化
//	struct stu s1 = { "huni","man",11,2.01,12345 };//初始化
//
//	//赋值方法
//	strcpy(s1.name, "jame");//字符串数组赋值
//	//strcpy_s(s1.name,sizeof(s1.name), "kobe"); //字符串数组赋值
//	strcpy_s(s1.sex, sizeof(s1.sex),"women"); //字符串数组赋值
//	memset(s1.number, '2', sizeof(s1.number));//char数组可以设置其他值，int数组只能设置0或者-1
//	s1.age = 16;
//	s1.high = 1.76;
//	//打印方法
//	printf("name = %s\n", s1.name);
//	printf("sex = %s\n", s1.sex);
//	printf("age = %d\n", s1.age);
//	printf("high = %.2f\n", s1.high);
//	printf("number = %s\n", s1.number);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("number = %c\n", s1.number[i]);
//	}
//	
//	
//	//使用typedef重命名结构体名称
//	typedef struct Ball
//	{
//		char ballname[10];
//		char ballsex[5];
//		int ballmoney;
//	}ball;
//	ball baller = {"huni","man",233};
//	baller.ballmoney = 12;
//	printf("ballname = %s\n", baller.ballname);
//
//	test(10);
//
//	return 0;
//}

/*罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1 。
12 写做 XII ，即为 X + II 。
27 写做  XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。
但也存在特例，例如 4 不写做 IIII，而是 IV。
数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。
同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个罗马数字，将其转换成整数。
*/

//int getvalue(char s) {
//	int value = 0;
//	switch (s)
//	{
//	case 'I':
//		value = 1;
//		break;
//	case 'V':
//		value = 5;
//		break;
//	case 'X':
//		value = 10;
//		break;
//	case 'L':
//		value = 50;
//		break;
//	case 'C':
//		value = 100;
//		break;
//	case 'D':
//		value = 500;
//		break;
//	case 'M':
//		value = 1000;
//		break;
//	default:
//		break;
//	}
//	return value;
//}
//
//int romanToInt(char* s) {
//	int ret = 0;
//	int count = strlen(s);
//	for (int i = 0; i < count; i++)
//	{
//		int tmp = getvalue(s[i]);
//		if (i <= count - 1 && getvalue(s[i]) >= getvalue(s[i+1]))
//		{
//			ret = ret + tmp;
//		}
//		else
//		{
//			ret = ret - tmp;
//		}
//	}
//	return ret;
//}
//
//int main() {
//	char s[100] = {0};
//	int ret = 0;
//	scanf("%s", s);
//	ret = romanToInt(s);
//	printf("%d ", ret);
//	return 0;
//}

