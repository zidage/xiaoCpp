#include <iostream>
#include <string>

using namespace std;

//����ѧ���ṹ��
struct student
{
	string name;  //����
	int age;  //����
	int score;  //���Է���
};

//������ʦ�ṹ��
struct teacher
{
	int id;  //��ʦ���
	string name;  //��ʦ����
	int age;  //����
	struct student stu;  //������ѧ��
};

int main()
{
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	struct teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ����: " << t.name << " ��ʦ���:" << t.id << " ��ʦ����:" << t.age << " ��ʦ������ѧ��:" << t.stu.name
		 << " ѧ������:" << t.stu.age << " ѧ������:" << t.stu.score << endl;

	system("pause");
	return 0;
}