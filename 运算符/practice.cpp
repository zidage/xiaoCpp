#include <iostream>
using namespace std;


int main()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //两个整数相除，结果依然是整数，将小数部分去除
	double c1 = 0.5;
	double d1 = 0.22;
	cout << c1 / d1 << endl; //小数也可以除小数
	//取模运算
	int a2 = 10;
	int b2 = 3;
	cout << a2 % b2 << endl;//两个小数不可以取模
	//递增递减运算符
	//1，前置递增
	int a3 = 10;
	++a3; //让变量+1
	cout << "a3=" << a3 << endl;
	//2，后置递增
	int b3 = 10;
	b3++;//让变量+1
	cout << "b3=" << b3 << endl;
	//前置后置的区别
	//前置递增 先让变量+1 然后进行表达式运算
	//后置递增 先进行表达式运算，后让变量+1
	int a4 = 10;
	int b4 = ++a2 * 10;
	cout << "a4=" << a4 << endl;
	cout << "b4=" << b4 << endl;
	int b5 = a4++ * 10;
	cout << "b5=" << b5 << endl;
	cout << "现在a4=" << a4 << endl;
	//递减同理
	//赋值运算符
	//=
	//学过了
	//+=
	int a = 10;
	a += 2;//a=a+2;
	cout << "a=" << a << endl;
	//-=
	a = 10;
	a -= 2;//a=a-2;
	cout << "a=" << a << endl;
	//*=
	a = 10;
	a *= 2;//a=a*2;
	cout << "a=" << a << endl;
	// /=
	a = 10;
	a /= 2;//a=a/2;
	cout << "a=" << a << endl;
	// %=
	a = 10;
	a %= 2;//a=a%2;
	cout << "a=" << a << endl;

	//比较运算符
	// 相等==
	// 不等！=
	// 大于>
	// 小于<
	// 大于等于>=
	// 小于等于<=
	//跟在python里面一样

	//逻辑运算符
	//非！
	a = 10;
	cout << !a << endl; //在c++中，除了0都为真
	cout << !!a << endl;
	//与&&
	a = 10;
	int b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 10;
	cout << (a && b) << endl;
	//或||
	a = 10;
	b = 10;
	cout << (a || b) << endl;
	a = 0;
	b = 10;
	cout << (a || b) << endl;
	system("pause");

	return 0;
}


