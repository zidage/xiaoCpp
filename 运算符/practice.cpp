#include <iostream>
using namespace std;


int main()
{
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //������������������Ȼ����������С������ȥ��
	double c1 = 0.5;
	double d1 = 0.22;
	cout << c1 / d1 << endl; //С��Ҳ���Գ�С��
	//ȡģ����
	int a2 = 10;
	int b2 = 3;
	cout << a2 % b2 << endl;//����С��������ȡģ
	//�����ݼ������
	//1��ǰ�õ���
	int a3 = 10;
	++a3; //�ñ���+1
	cout << "a3=" << a3 << endl;
	//2�����õ���
	int b3 = 10;
	b3++;//�ñ���+1
	cout << "b3=" << b3 << endl;
	//ǰ�ú��õ�����
	//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ����
	//���õ��� �Ƚ��б��ʽ���㣬���ñ���+1
	int a4 = 10;
	int b4 = ++a2 * 10;
	cout << "a4=" << a4 << endl;
	cout << "b4=" << b4 << endl;
	int b5 = a4++ * 10;
	cout << "b5=" << b5 << endl;
	cout << "����a4=" << a4 << endl;
	//�ݼ�ͬ��
	//��ֵ�����
	//=
	//ѧ����
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

	//�Ƚ������
	// ���==
	// ���ȣ�=
	// ����>
	// С��<
	// ���ڵ���>=
	// С�ڵ���<=
	//����python����һ��

	//�߼������
	//�ǣ�
	a = 10;
	cout << !a << endl; //��c++�У�����0��Ϊ��
	cout << !!a << endl;
	//��&&
	a = 10;
	int b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 10;
	cout << (a && b) << endl;
	//��||
	a = 10;
	b = 10;
	cout << (a || b) << endl;
	a = 0;
	b = 10;
	cout << (a || b) << endl;
	system("pause");

	return 0;
}


