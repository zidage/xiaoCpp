#include <iostream>
using namespace std;

int main()
{
	for (int row = 1; row < 10; row++)
	{
		for (int column = 1; column <= row; column++) //����
		{
			cout << column << "X" << row << "=" << column * row<<" "; //�˷��ھ���
		}
		cout << endl;
	}

	system("pause");

	return 0;
}