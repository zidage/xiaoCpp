#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
	string FartLanguage[] =
	{
		"�߶�������˵������һ���´��Ŀ�⣬һ�����ԵĻ����ʹ������������������ĥ�ѡ���",
		"��������ԣ���������ǵİ�ο����ë����İ�ο���׼�����ɭ�ֵİ�ο��������Ů�˵İ�ο����������ѧ�ҵİ�ο����",
		"ɯʿ����˵������ˡ�˼Ҳ��ܿ�ˡ�ģ���һ�ָ߹����Ϊ����","��ɯʿ����˵�ģ����������˰�����к�ҹһ�������Լ���ʵ���Ų���Ա�����թ����",
		"̩���˵����������һ��������Ŀ�ĺͼ��������ֵ�ĸ��ݣ�������ֻ���˵�Ŀ�ĺ���Ը����",
		"̩�����ʫ������д���������ҵİ������Գ�ʱ������ˡ���",
		"����������˵��������������˼������һ�в��ҵĺ��ġ���",
		"�Ҹ�˹���µģ���һƬ��Ŭ�����������Ƥ��һ���̳����ľ�ϯ�óԵöࡣ��",
		"�Ҹ�˹˵�����𽾰����𻳺ޣ��𲻿�ԭ���ˡ���","�ж�˹̩��̸������ϰ����һ����ذ����ǵ�������ĳ�ֶ��͵Ļ�ʯ�����ǵ���������ʧȥ���ɣ���Ϊƽ����û�м����ʱ��֮����ū������",
		"����˵:����ʹ��ҹ������һ�У�̫�����������»�������",
		"��������˵��������������������һ���ߣ�һ�߼�ɢ����·�ԵĻ��䡣��ô���һ���������������ҷ�����",
		"��˹�����˹������仰:���˵��������ƺ�ˮ�����������������밵�������Լ����������˻�����",
		"Ӣ��ʫ������Լ��ѷ����˵:��ʫ���������ڴ��£��������ʹ�����벻���ģ���̾���Ѻ�������Ŀ�Ķ�������",
		"�׻�˵��������ɽǰ����·��������ͷ��Ȼֱ����",
		"����������:����ǰ��ˮ���������ݽ��׷����Ƽ�����",
		"��ѫ���ڡ�Ʒζ�Ľ����������:�����޳��������ˡ���"
	};


	string Conjunction[] = { "��","��","��","Ȼ��","��Ȼ","��" };

	string AssociateFormer[] = { "˵��","�ص�","��˵","���ڿ�" };

	string AssociateLater[] = { "������⣬","�������������ǰ�����⣬","����˵��ʮ����Ҫ��","����" };

	cout << "���������±���" << endl;
	string title;
	cin >> title;

	cout << "������������" << endl;
	int amount;
	cin >> amount;
	int sentence = amount / 30;

	Sleep(1000);

	cout << "��������" << amount << "������" << endl;

	Sleep(1000);

	cout << "�����С�" << endl;

	Sleep(5000);

	srand((unsigned)time(NULL));

	for (int i = 0; i < sentence; i++)
	{

		int F_langA;
		F_langA = rand() % 15 + 0; //�����������Ե������
		int F_langB = rand() % 15 + 0;
		int F_langC = rand() % 15 + 0;
		int F_langD = rand() % 15 + 0;  //�ڲ��������ʹ���������Ա����ظ�

		int rand_conj = rand() % 6 + 0; //��ʺ�ǰ���������ȡ��ƽ����
		int rand_assf = rand() % 4 + 0;
		int rand_assl = rand() % 4 + 0;

		int rand_passagestruct = rand() % 3 + 1;

		if (i == 0)
		{
			cout << "    " << "������̸�۵Ļ�����" << title << "��";
		}

		//�������Ľṹ
		switch (rand_passagestruct)
		{
		case 1:
			cout << AssociateFormer[rand_assf] << title << AssociateLater[rand_assl] << Conjunction[rand_conj] << FartLanguage[F_langC];
			//ƨ����ʼ
		case 2:
			cout << Conjunction[rand_conj] << FartLanguage[F_langA];
			//��������
		case 3:
			cout << Conjunction[rand_conj] << title << AssociateLater[rand_assl] << FartLanguage[F_langA];
		}


		//������ɢ���
		int paragraph = i % 10;
		if (paragraph == 5)
			cout << "����" << FartLanguage[F_langA] << "����" << FartLanguage[F_langB] << "Ҳ����" << FartLanguage[F_langC] << "������" << FartLanguage[F_langD];

		//�ֶ�
		if (paragraph == 7)
		{
			cout << endl << "" << endl << "    ";
		}

		//��β,��������
		if (i == sentence)
		{
			cout << endl << " " << "���ص�" << title << "�������,����˵" << title << "����" << FartLanguage[F_langA] << "����,Ը��λ������������,��Զ" << title;
		}

	}

	cout << endl << " " << endl << "�����������" << endl;

	system("pause");
	return 0;
}