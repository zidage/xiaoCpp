#include <iostream>
#include <string>

using namespace std;

//1,����ѧ������������:ѧ������(����,����,����)
//�Զ�����������,һЩ���͵ļ�����ϵ�һ������
//�﷨ struct �������� {��Ա�б�}
struct Student
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//���Է���
	int score;

}s3; //˳�㴴���ṹ�����

//2,ͨ��ѧ�����ʹ�������ѧ��



int main() {
//2.1 struct Student s1
	//struct�ؼ��ֿ���ʡ��
	Student s1;
	//��s1���Ը�ֵ,ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "����:" << s1.name << " ����:" << s1.age << " ����:" << s1.score << endl;
//2.2 struct Student s2 = {...}
	struct Student s2 = { "����",19,80 };
	cout << "����:" << s2.name << " ����:" << s2.age << " ����:" << s2.score << endl;
//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

	s3.name = "����";
	s3.age = 20;
	s3.score = 100;


	system("pause");
	return 0;
}

//2,ͨ��ѧ�����ʹ��������ѧ��
