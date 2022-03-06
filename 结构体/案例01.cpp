#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//ѧ���Ľṹ��
struct student
{
	string sName;
	int score;
};

//��ʦ�Ľṹ��
struct teacher
{
	string tName;
	struct student stu[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].stu[j].sName = "Student_";
			tArray[i].stu[j].sName += nameSeed[j];

			int random = rand() % 61+40; //40-100
			tArray[i].stu[j].score = random;
		}

	}
}

//��ӡ������Ϣ
void printInfo(teacher tArray[], int len)
{

	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����:" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ������:" << tArray[i].stu[j].sName << " ѧ������:" << tArray[i].stu[j].score << endl;
		}
	}
}

int main() {

	//���������
	srand((unsigned int)time(NULL));
	
	//����������ʦ������
	struct teacher tArray[3];

	//ͨ��������������ʦ����Ϣ��ֵ,������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//��ӡ������ʦ������ѧ������
	printInfo(tArray, len);


	system("pause");
	return 0;
}