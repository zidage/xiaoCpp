#include <iostream>
using namespace std;

int main()
{
    //ѡ��ṹ ����if���
    //�û��������,�����������600����Ϊ��꣬����Ļ�����
	
	//1���û��������
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;
	//2����ӡ�û�����ķ���
	cout << "������ķ���Ϊ��" << score << endl;
	//3���жϷ����Ƿ����600��������ô����û�������ʹ��һ̨
	//ע�����if�������治Ҫ�ӷֺţ�����if������Ч��
	if (score > 600)
	{
		cout << "ţ��" << endl;
	}
	else //������600��ʱ��ִ������
	{
		cout << "ɵ��" << endl;
	}



	system("pause");

	return 0;
}
