#include <iostream>
//time ϵͳʱ��ͷ�ļ�����
#include <ctime>
using namespace std;

int main()
{
	//1,ϵͳ���������
	//������������ �������õ�ǰϵͳʱ�������ɵ������,��ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;  //����һ��0-100�������
	//2,��ҽ��в²�
	int value = 0;  //������������
	int fault_count = 0; //�������ͳ��
	while (fault_count<6) //��������ڵ���Ϸ
	{
		cin >> value;
		//3,�ж���ҵĲ²�
		if (value > num)
		{
			cout << "����ֵ����" << endl;
			fault_count++;
		}
		else if (value < num)
		{
			cout << "����ֵ��С" << endl;
			fault_count++;
		}
		else if(value==num)
		{
			cout << "��ϲ���¶���" << endl;
			//�¶� �˳���Ϸ
			break;
		}
	}
	cout << "�Ѵ�������,��Ϸ����" << endl;

	system("pause");
	return 0;
}