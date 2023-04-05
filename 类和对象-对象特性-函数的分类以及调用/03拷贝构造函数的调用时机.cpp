#include <iostream>

using namespace std;

// The timing for calling the copy construct.


class Person
{
public:
	//¹¹Ôìº¯Êý
	Person()
	{
		cout << "The function call of the default constructor of the class 'person'." << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "The function call of constructor for class 'person'." << endl;
	}
	~Person()
	{
		cout << "The function call of the destructor of the class 'person'." << endl;
	}
	//Copy Constructor
	Person(const Person& p)
	{
		// Initialize an object by copying the member value from an object of the same type.
		age = p.age;
		cout << "The function call of the copy constructor of the class 'person'." << endl;
	}

	int age;
};

//1. Use an instance to initialize a new object.
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "The age of p2 is:" << p2.age << endl;
}
//2. Passing by value

void do_work(Person p)
{

}

void test02()
{
	Person p;
	do_work(p);
}
//3. Return a local object by value.

Person do_work()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = do_work();
	cout << (int*)&p << endl;
}
// Function call


int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}