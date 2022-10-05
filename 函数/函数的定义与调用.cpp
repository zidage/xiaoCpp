#include <iostream>
using namespace std;

//函数的定义
//语法
//返回值类型 函数名 (参数列表) {函数体语句 return表达式}

//加法函数,实现两个整型相加,并且将相加的结果进行返回
//函数定义的时候,num1和num2并没有真实数据,他只是一个形式上的参数,简称形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

//函数的调用

int main() {
	//main函数中调用add函数
	int a = 10;
	int b = 20;

	//函数调用的语法:函数名称(参数)
	//a和b称为实际的参数,简称实参
	//当调用函数的时候,实参的值会传递给形参
	int c = add(a, b);

	cout << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);
	cout << c << endl;

	system("pause");
	return 0;
}