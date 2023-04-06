#include <iostream>	

using namespace std;

// static member functions
// All objects share the same function.
// static member function can only access the static member variables

class Person
{
public:
	static void func()
	{
		m_A = 100; // is permitted. static member function can access the static member variables.
		//m_B = 200; // is not permitted, static member function cannot access the non-static member variables. The compiler cannot tell the variable affiliates with which object.
		cout << "the call of 'static void func'\n";
	}

	static int m_A; // static member variable
	int m_B;
private:
	static void func2()
	{
		cout << "the call of the 'static void func2'\n";
	}
};

int m_A = 0;

void test01()
{
	// 1. access through the object.
	Person p;
	p.func();
	// 2. access through the class.
	Person::func();
	//Person::func2() // is not permitted.
}

int main()
{

}