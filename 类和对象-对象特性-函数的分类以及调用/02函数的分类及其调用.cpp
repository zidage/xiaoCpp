#include <iostream>

using namespace std;

//1， 构造函数的分类和调用
//分类
//	按照参数分类	无参构造（默认构造）和 有参构造
//	按照类型分类	普通构造	拷贝构造
class Person
{
public:
	//构造函数
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
	Person(const Person &p)
	{
		// Initialize an object by copying the member value from an object of the same type.
		age = p.age;
		cout << "The function call of the copy constructor of the class 'person'." << endl;
	}

	int age;
};

// Function call
void test()
{
	// 1.括号法 (use parentheses when constructing objects)
	Person p; // The call of the default constructor.
	Person p2(10); // The call of the parameterized constructor.
	Person p3(p2);
	
	//注意事项
	// DO NOT use parentheses when calling the default constructor.
	// The C++ compiler will take it for a declaration of a function called p1. So it is not an initialization of the object.
	//Person p1(); // Declare a function within another function is permitted in C++.

	/*cout << "p2的年龄是：" << p2.age << endl;
	cout << "p3的年龄是：" << p3.age << endl;*/


	// 2.显式法 (Explicit Constructor)
	Person p1;
	Person p4 = Person(10); // Call the constructor. 
	Person p5 = Person(p4); // Copy constructor
	
	Person(10); // Lambda object. When this line has been executed, the compiler will destruct this object.

	//注意事项2
	// DO NOT use the copy constructor to initialize a lambda object.
	//Person(p4); // Compiler will take it as Person p4 i.e. the declaration of an object.

	// Implicit constructor
	Person p6 = 10; // Same as Person p6 = Person(10)
	Person p7 = p4; // Same as Person p7 = Person(p4)
}

int main()
{
	test();
	return 0;
}