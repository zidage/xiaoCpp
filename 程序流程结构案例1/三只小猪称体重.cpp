#include <iostream>
using namespace std;

int main()
{
	int pig_A = 0;
	int pig_B = 0;
	int pig_C = 0;
	cout << "������С��A������" << endl;
	cin >> pig_A;
	cout << "������С��B������" << endl;
	cin >> pig_B; 
	cout << "������С��C������" << endl;
	cin >> pig_C;
	cout << "���ص�С���ǣ�" << endl;
	if (pig_A > pig_B)
	{
		if (pig_A > pig_C)
		{
			cout << "С��A����" << endl;
		}
		else
		{
			cout << "С��C����" << endl;
		}
	}
	else
	{
		if (pig_B > pig_C)
		{
			cout << "С��B����" << endl;
		}
		else
		{
			cout << "С��C����" << endl;
		}
	}



	system("pause");

	return 0;	
}