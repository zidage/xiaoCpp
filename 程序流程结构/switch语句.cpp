#include <iostream>
using namespace std;

int main()
{
	//switch���
	//����Ӱ���
	//10-9 ����
	//8-7 �ǳ���
	//6-5 һ��
	//5���� ��Ƭ

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ���д�֣�" << endl;
	//2���û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ:" << score << endl;
	//3�������û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break; //�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default :
		cout << "����Ϊ����Ƭ" << endl;
	}
	//if��switch����
	//switch ȱ��:�ж�ֻ�������ͺ��ַ���,��������һ������
	//switch �ŵ�:�ṹ����,ִ��Ч�ʸ�
	system("pause");
	return 0;
}