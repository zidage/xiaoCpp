#include <iostream>

using namespace std;



int func(int x,int y)
{
	cout << x + y << endl;
	return x + y;
}
 


int main()
{
	int (*p)(int, int);
	p = func;

}




