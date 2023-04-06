#include <iostream>

using namespace std;

// Shallow copy and Deep copy

class Person
{
public:
	Person()
	{
		cout << "The call of the default constructor.\n";
	}

	~Person()
	{
		// Destructor will release the data in the heap.
		if (height != NULL)
		{
			delete height;
			height = NULL;
		}
		cout << "The call of the destructor\n";
	}

	Person(int a, int h)
	{
		age = a;
		height = new int(h);
		cout << "The call of the parameterized constructor\n";
	}

	// Implement the deep copy constructor.
	Person(const Person& p)
	{
		cout << "The call of the copy constructor.\n";
		age = p.age;
		//height = p.height; // The defalut implementation of the copy constructor by the compiler.
		// Implement deep copy.
		height = new int(*p.height);
	}

	int age;
	int* height;
};

void test01()
{
	Person p1(18, 160); // So when p1 is going to be released, an undefined behaviour will occur.(说人话：堆区内存重复释放）
	cout << "p1的年龄是：" << p1.age << " 身高：" << *p1.height << endl;

	Person p2(p1); // Due to FIFO, p2 will be released before p1 will be released. After that, p2.height will be NULL, the p1.height will point at somewhere unknown.
	cout << "p2的年龄是：" << p2.age << " 身高：" << *p2.height << endl;
}

int main()
{
	test01();

	return 0;
}