#include <iostream>
using namespace std;

int main()
{
	int pig_A = 0;
	int pig_B = 0;
	int pig_C = 0;
	cout << "请输入小猪A的体重" << endl;
	cin >> pig_A;
	cout << "请输入小猪B的体重" << endl;
	cin >> pig_B; 
	cout << "请输入小猪C的体重" << endl;
	cin >> pig_C;
	cout << "最重的小猪是：" << endl;
	if (pig_A > pig_B)
	{
		if (pig_A > pig_C)
		{
			cout << "小猪A最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	else
	{
		if (pig_B > pig_C)
		{
			cout << "小猪B最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}



	system("pause");

	return 0;	
}