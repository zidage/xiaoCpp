#include <iostream>
using namespace std;

int main() {
	//��ά�����������;
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//1,���Բ鿴ռ���ڴ�ռ��С
	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ:" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�Ϊ:" << sizeof(arr[0]) << endl;
	cout << "��λ����ÿ��Ԫ��ռ�õ��ڴ�Ϊ:" << sizeof(arr[0][0]) << endl;
	cout << "��ά����ռ�õ�����Ϊ" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������Ϊ" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2,���Բ鿴��ά������׵�ַ
	cout << "��ά������׵�ַΪ" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַΪ:" << (int)arr[0] << endl;
	cout << "��ά����ڶ��е��׵�ַΪ" << (int)arr[1] << endl;

	cout << "��ά�����һ��Ԫ���׵�ַ:" << (int)&arr[0][0] << endl;

	system("pause");
	return 0;
}