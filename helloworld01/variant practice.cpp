#include <iostream>
#include <string>
using namespace std;

#define Day 7

int main()
{
	//ʹ�÷�б��\����ת�壬��\tΪ����
	cout << "һ���ܹ���:\t" << Day << "��" << endl;
	const int month = 12;
	cout << "һ���ܹ���:\t" << month << "���·�" << endl;
	cout << "intռ�ÿռ�Ϊ��\t" << sizeof(int) << "�ֽ�" << endl;
	float f1 = 3.14f;
	//�ַ��ͱ���
	char ch1 = 'f';
	char str1[] = "fuck";
	cout << "��������˵:\t" << str1 << endl;
	//��ʹ���ַ����ͱ���stringʱҪ��ͷ������
	string str2 = "fuck me";
	cout << "��������C++����˵:\t" << str2 << endl;
	//��������
	bool flag = true;
	cout << flag << endl; //Ϊ�棬����ֵΪ1
	flag = false;
	cout << flag << endl; //Ϊ�٣�����ֵΪ0
	//���ݵ�����
	int a = 0;
	cout << "������a��ֵ��" << endl;
	cin >> a;                       
	cout << "a��ֵΪ��" << endl;    //1.���͵�����,������ͬС��
	//�������͵�����
	bool flag1 = false;
	cout << "�����������flag1��ֵ" << endl;
	cin >> flag1;
	cout << "��������flag1=" << flag1 << endl;


	system("pause");

	return 0;

}