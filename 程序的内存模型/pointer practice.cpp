#include <iostream>

int main() {
	using namespace std;
	char ch[6] = "hello";
	cout << ch << endl;
	int num[2] = { 1,2 };
	cout << num << endl;
	int* num1 = num;
	cout << *(num1 + 1) << endl;
	return 0;
}