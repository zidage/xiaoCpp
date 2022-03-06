#include <iostream>
//time 系统时间头文件包含
#include <ctime>
using namespace std;

int main()
{
	//1,系统生成随机数
	//添加随机数种子 作用利用当前系统时间来生成的随机数,防止每次随机数都一样
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;  //生成一个0-100的随机数
	//2,玩家进行猜测
	int value = 0;  //玩家输入的数据
	int fault_count = 0; //错误次数统计
	while (fault_count<6) //错误次数内的游戏
	{
		cin >> value;
		//3,判断玩家的猜测
		if (value > num)
		{
			cout << "输入值过大" << endl;
			fault_count++;
		}
		else if (value < num)
		{
			cout << "输入值过小" << endl;
			fault_count++;
		}
		else if(value==num)
		{
			cout << "恭喜您猜对了" << endl;
			//猜对 退出游戏
			break;
		}
	}
	cout << "已达错误次数,游戏结束" << endl;

	system("pause");
	return 0;
}