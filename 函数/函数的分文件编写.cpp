#include <iostream>
#include "swap.h"
using namespace std;


//�����ķ��ļ���д
//ʵ���������ֽ��н����ĺ���
//void swap(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//}

//1,����.h��׺����ͷ�ļ�
//2,����.cpp��׺����Դ�ļ�
//3,��ͷ�ļ���д����������
//4,��Դ�ļ��������������Ķ���

int main() {
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}