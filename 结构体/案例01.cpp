#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//学生的结构体
struct student
{
	string sName;
	int score;
};

//老师的结构体
struct teacher
{
	string tName;
	struct student stu[5];
};

//给老师和学生赋值的函数
void allocateSpace(struct teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].stu[j].sName = "Student_";
			tArray[i].stu[j].sName += nameSeed[j];

			int random = rand() % 61+40; //40-100
			tArray[i].stu[j].score = random;
		}

	}
}

//打印所有信息
void printInfo(teacher tArray[], int len)
{

	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名:" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名:" << tArray[i].stu[j].sName << " 学生分数:" << tArray[i].stu[j].score << endl;
		}
	}
}

int main() {

	//随机数种子
	srand((unsigned int)time(NULL));
	
	//创建三名老师的数组
	struct teacher tArray[3];

	//通过函数给三名老师的信息赋值,并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//打印所有老师及所带学生类型
	printInfo(tArray, len);


	system("pause");
	return 0;
}