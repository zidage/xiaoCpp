#include <iostream>
using namespace std;

int main()
{
	//һά��������������;
	//1,����ͳ�������������ڴ��еĳ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õ��ڴ�ռ�Ϊ:" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ:" << sizeof(arr[1]) << endl;
	cout << "�����е�Ԫ�ظ���Ϊ:" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2,���Ի�ȡ�������ڴ��е��׵�ַ
	cout << "�����׵�ַΪ:" << (long long)arr << endl; 
	cout << "�����е�һ��Ԫ�ص�ַΪ:" << (long long)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ:" << (long long)&arr[1] << endl;
	//��������һ������,�����Խ��и�ֵ����

	system("pause");
	return 0;
}