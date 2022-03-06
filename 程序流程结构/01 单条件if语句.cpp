#include <iostream>
using namespace std;

int main()
{
    //选择结构 单行if语句
    //用户输入分数,如果分数大于600，视为达标，在屏幕上输出
	
	//1、用户输入分数
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	//2、打印用户输入的分数
	cout << "您输入的分数为：" << score << endl;
	//3、判断分数是否大于600，如是那么输出好话，否则就大操一台
	//注意事项，if条件后面不要加分号（否则if条件无效）
	if (score > 600)
	{
		cout << "牛逼" << endl;
	}
	else //不大于600分时的执行内容
	{
		cout << "傻逼" << endl;
	}



	system("pause");

	return 0;
}
