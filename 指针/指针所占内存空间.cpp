#include <iostream>
using namespace std;

int main() {

	//ָ����ռ�ڴ�ռ�
	int* a = (int*)0x2343;
	//int* p;
	//p = &a;
	int* p = &*a;
	cout << p << endl;

	//��32λ����ϵͳ��,ָ��ռ4���ֽڿռ��С,�������ݿռ��������
	//��64λ����ϵͳ��,ָ��ռ8���ֽڿռ��С,������ʲô��������;
	cout << "size of int* = " << sizeof(int*) << endl;
	cout << "size of float* = " << sizeof(float*) << endl;
	cout << "size of double* = " << sizeof(double*) << endl;
	cout << "size of char* = " << sizeof(char*) << endl;

	system("pause");
	return 0;
}