#include <iostream>
using namespace std;

//����������
//�ȽϺ���,ʵ�������������ֽ��бȽ�,���ؽϴ��ֵ

//��ǰ���߱����������Ĵ���,�������ú���������

//����������

//��������д���,���Ƕ���ֻ����һ��
int max(int a, int b);
//�����Ķ���
int max(int a, int b)
{
	return a > b ? a : b;
}

int main() {

	int a = 10;
	int b = 20;
	
	cout << max(a, b) << endl;

	system("pause");
	return 0;
}