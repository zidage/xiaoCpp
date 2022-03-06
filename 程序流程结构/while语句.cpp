#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	//注意事项:在写循环时一定要避免写死循环
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}
	

	system("pause");
	return 0;
}