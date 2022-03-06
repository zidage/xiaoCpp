#include <iostream>
using namespace std;

int main()
{
	for (int row = 1; row < 10; row++)
	{
		for (int column = 1; column <= row; column++) //列数
		{
			cout << column << "X" << row << "=" << column * row<<" "; //乘法口诀表
		}
		cout << endl;
	}

	system("pause");

	return 0;
}