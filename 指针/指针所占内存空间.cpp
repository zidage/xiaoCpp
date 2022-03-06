#include <iostream>
using namespace std;

int main() {

	//指针所占内存空间
	int* a = (int*)0x2343;
	//int* p;
	//p = &a;
	int* p = &*a;
	cout << p << endl;

	//在32位操作系统下,指针占4个字节空间大小,无论数据空间类型如何
	//在64位操作系统下,指针占8个字节空间大小,不管是什么数据类型;
	cout << "size of int* = " << sizeof(int*) << endl;
	cout << "size of float* = " << sizeof(float*) << endl;
	cout << "size of double* = " << sizeof(double*) << endl;
	cout << "size of char* = " << sizeof(char*) << endl;

	system("pause");
	return 0;
}