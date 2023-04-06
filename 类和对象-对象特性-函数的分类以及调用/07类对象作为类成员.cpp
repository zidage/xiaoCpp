#include <iostream>
#include <string>

using namespace std;

#include <iostream>

using namespace std;

// Class object as the member of the class.

class Phone
{
public:
	Phone(string p_name)
	{
		cout << "call of the constructor of phone\n";
		phone_name = p_name;
	}
	~Phone()
	{
		cout << "call of the destructor of the class Phone\n";
	}
	// The brand of the phone.
	string phone_name;
};

class Person
{
public:
	//构造函数

	Person(string name, string p_name) : p_name(name), p_phone(p_name) // Implicit constructor, same as Phone p_phone = p_name;
	{
		cout << "call of the constructor of person\n";
	}
	~Person()
	{
		cout << "call of the destructor of the class Person\n";
	}

	// Name
	string p_name;
	// Phone 
	Phone p_phone;
};

// If a object as a member is from another class, the compiler will construct this member object before construct the whole object.
// The order of destruction is: The bigger object will be destructed before the member object will be destructed.

void test01()
{
	Person p("张三", "iPhone");
	cout << p.p_name << "拿着" << p.p_phone.phone_name << endl;
}

int main()
{
	test01();
	return 0;
}