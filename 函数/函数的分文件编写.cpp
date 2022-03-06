#include <iostream>
#include "swap.h"
using namespace std;


//函数的分文件编写
//实现两个数字进行交换的函数
//void swap(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//}

//1,创建.h后缀名的头文件
//2,创建.cpp后缀名的源文件
//3,在头文件中写函数的声明
//4,在源文件中先声明函数的定义

int main() {
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}