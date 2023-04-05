#include <iostream>

using namespace std;
// The rule of calling the constructor functions.
// 1, The C++ compiler will give at least 3 functions to the new object
// The default constructor (vacuous implementation)
// The default destructor (vacuous implementation)
// The default copy constructor (COPY BY VALUE)

class Person
{
public:
	//¹¹Ôìº¯Êý
	/*Person()
	{
		cout << "The function call of the default constructor of the class 'person'." << endl;
	}*/
	~Person()
	{
		cout << "The function call of the destructor of the class 'person'." << endl;
	}
	// If there exists a parameterized constructor, the complier will no longer provide the default constructor.
	Person(int a)
	{
		age = a;
		cout << "The function call of constructor for class 'person'." << endl;
	}
	//Copy Constructor
	Person(const Person& p)
	{
		// Initialize an object by copying the member value from an object of the same type.
		// If there exists a user-defined copy constructor, the compiler will no longer provide other default constructors.
		age = p.age;
		cout << "The function call of the copy constructor of the class 'person'." << endl;
	}

	int age;
};

//void test01()
//{
//	Person p;
//	p.age = 18;
//
//	Person p2(p);
//
//	cout << "The age of p2 is: " << p2.age << endl;
//}

void test02()
{
	Person p(18);
	Person p2(p);
}

int main()
{
	//test01();
	test02();
	return 0;
}