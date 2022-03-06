#include <iostream>
using namespace std;

int main()
{
	//选择结构 多条件if语句
	//输入一个考试的分数，如果大于600分，视为考上一本，在屏幕输出
	//大于500，视为考上二本大学，屏幕输出
	//大于400，视为考上三本大学，屏幕输出
	//小于等于400分，家里蹲，屏幕输出

	//1，用户输入分数
	int score = 0;
	cout << "请输入考试分数：" << endl;
	cin >> score;
	//2，提示用户输入的分数
	cout << "您输入的分数为：" << score << endl;
	//3，判断
	//如果大于600，考上一本
	//如果大于500，考上二本
	//如果大于400，考上三本
	//前三个都没有满足，未考上本科
	if (score > 600)
	{
		cout << "上一本" << endl;
	}
	else if (score > 500)
	{
		cout << "上二本" << endl;
	}
	else if (score > 400)
	{
		cout << "上三本" << endl;
	}
	else
	{
		cout << "大专人，大专魂" << endl;
	}
	//嵌套if语句
	//再次输入分数
	cout << "请输入分数：" << endl;
	cin >> score;
	//判断
	cout << "您考上的等级为：" << endl;
	if (score > 600)
	{
		cout << "一本" << endl;
		cout << "本程序对您分数的评价：" << endl;
		if (score > 700)
		{
			cout << "哦哟" << endl;
		}
		else if (score > 650)
		{
			cout << "还可以" << endl;
		}
		else
		{
			cout << "马虎" << endl;
		}
	}
	else
	{
		cout << "日脓" << endl;
	}
	//如果大于600 一本
	    //大于700 清华
	    //大于650 北大
	    //其余    人大




	system("pause");
	return 0;
}