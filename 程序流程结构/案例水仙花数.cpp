#include <iostream>
using namespace std;

int main()
{
	//1,将所有的三位数进行输出(100-999)
	int num = 100;
	do
	{
		int a = 0; //个位
		int b = 0; //十位
		int c = 0; //百位

		a = num % 10;         	//获取个位 对数字取模于10 num%10
		b = num / 10 % 10;      //获取十位 num/10 (num/10)%10 先整除于10,得到两位数,再取模于10,得到十位数
		c = num / 100;          //获取百位 num/100 直接整除于100,获取百位

		if (a*a*a+b*b*b+c*c*c==num)//如果是水仙花数
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	//2,在所有的三位数中找到水仙花数	
	//水仙花数


	system("pause");
	return 0;
}