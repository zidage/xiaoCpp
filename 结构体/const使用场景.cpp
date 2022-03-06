#include <iostream>
#include <string>

using namespace std;

//const的使用场景



struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针,可以减少内存空间,而且不会复制新的副本出来
void printStudents(const student* s)
{
	//s->age=150;//加入const之后,一旦有修改的操作就会报错,防止我们的误操作
	cout << "姓名:" << s->name << " 年龄:" << s->age << " 分数:" << s->score << endl;
}

int main() {

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	
	printStudents(&s);


	system("pause");
	return 0;
}