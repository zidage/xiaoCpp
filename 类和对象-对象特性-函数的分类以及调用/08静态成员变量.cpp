#include <iostream>

using namespace std;

// static member variable 
class Person
{
public:

	// All objects share the same piece of data.
	// The memory for static variable is allocated during the compiling time.
	// Should be declared within a class and defined outside.
	static int m_A;

	// The 'private' keyword can also be applied to the static members.
private:
	static int m_B;
};

int Person::m_A = 100; // Definition
int Person::m_B = 200;


void test01()
{
	Person p;
	// The result is 100.
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;

	// The result is 200.
	cout << p.m_A << endl;

}

void test02()
{
	// The static member variable is not associated with any certain object. All objects share the same piece of data.
	// Hence, there are two ways to get access to the static member variables.
	// 1. Access through the object
	Person p;
	cout << p.m_A << endl;
	// 2. Access through the class
	cout << Person::m_A << endl;

	//cout << Person::m_b << endl; is not permitted.
}

int main()
{
	test01();
	test02();
	return 0;
}