#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,3,2,5,4 };
	//记录起始下标的位置
	int start = 0; //起始元素下标
	//记录结束下标的位置
	int end = sizeof(arr) / sizeof(arr[0])-1; //末尾元素下标

	while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}


	system("pause");
	return 0;
}