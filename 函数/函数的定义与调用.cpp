#include <iostream>
using namespace std;

//�����Ķ���
//�﷨
//����ֵ���� ������ (�����б�) {��������� return���ʽ}

//�ӷ�����,ʵ�������������,���ҽ���ӵĽ�����з���
//���������ʱ��,num1��num2��û����ʵ����,��ֻ��һ����ʽ�ϵĲ���,����β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

//�����ĵ���

int main() {
	//main�����е���add����
	int a = 10;
	int b = 20;

	//�������õ��﷨:��������(����)
	//a��b��Ϊʵ�ʵĲ���,���ʵ��
	//�����ú�����ʱ��,ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c = add(a, b);

	cout << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);
	cout << c << endl;

	system("pause");
	return 0;
}