#include <iostream>
#include <string>

using namespace std;

//const��ʹ�ó���



struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ��,���Լ����ڴ�ռ�,���Ҳ��Ḵ���µĸ�������
void printStudents(const student* s)
{
	//s->age=150;//����const֮��,һ�����޸ĵĲ����ͻᱨ��,��ֹ���ǵ������
	cout << "����:" << s->name << " ����:" << s->age << " ����:" << s->score << endl;
}

int main() {

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	
	printStudents(&s);


	system("pause");
	return 0;
}