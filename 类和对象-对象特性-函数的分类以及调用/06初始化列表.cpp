#include <iostream>

using namespace std;

// Initialization List
class Person
{
public:
	// Traditional way of initializing
	/*Person(int a, int b, int c)
	{
		p_a = a;
		p_b = b;
		p_c = c;
	}*/
	Person(int a, int b, int c) :p_a(a), p_b(b), p_c(c)
	{

	}

	int p_a;
	int p_b;
	int p_c;
};

void test01()
{
	Person p(10, 20, 30);
	cout << "p_a = " << p.p_a << endl;
	cout << "p_b = " << p.p_b << endl;
	cout << "p_c = " << p.p_c << endl;
}

int main()
{
	test01();
	return 0;
}