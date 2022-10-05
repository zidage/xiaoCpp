#include <iostream>
#include <string>
using namespace std;

#define Day 7

int main()
{
	//使用反斜杠\进行转义，如\t为对齐
	cout << "一周总共有:\t" << Day << "天" << endl;
	const int month = 12;
	cout << "一年总共有:\t" << month << "个月份" << endl;
	cout << "int占用空间为：\t" << sizeof(int) << "字节" << endl;
	float f1 = 3.14f;
	//字符型变量
	char ch1 = 'f';
	char str1[] = "fuck";
	cout << "我现在想说:\t" << str1 << endl;
	//在使用字符串型变量string时要在头部声明
	string str2 = "fuck me";
	cout << "我现在用C++还想说:\t" << str2 << endl;
	//布尔类型
	bool flag = true;
	cout << flag << endl; //为真，返回值为1
	flag = false;
	cout << flag << endl; //为假，返回值为0
	//数据的输入
	int a = 0;
	cout << "请输入a的值：" << endl;
	cin >> a;                       
	cout << "a的值为：" << endl;    //1.整型的输入,其他大同小异
	//布尔类型的输入
	bool flag1 = false;
	cout << "请给布尔类型flag1赋值" << endl;
	cin >> flag1;
	cout << "布尔类型flag1=" << flag1 << endl;


	system("pause");

	return 0;

}