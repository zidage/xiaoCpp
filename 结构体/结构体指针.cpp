#include <iostream>
#include <string>

using namespace std;

//�ṹ��ָ��

//����ѧ���Ľṹ��
struct Student
{
	string name; //����
	int age;  //����
	int score;  //����
};

int main() {
	//����ѧ���ṹ�����
	struct Student s = { "����",18,100 };

	//ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s;

	//ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����� ��Ҫ���� "->"
	cout << "����:" << p->name << " ����:" << p->age << " ����:" << p->score << endl;


	system("pause");
	return 0;
}