#include <iostream>
using namespace std;

int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//总共排序轮数为 元素个数-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比 次数=元素个数-当前轮数-1
		for (int j = 0; j < 9-1-i; j++)
		{
			//如果第一个数字比第二个数字大,交换这两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	//排序后结果
	cout << "排序后" << endl;
	for (int k = 0; k < 9; k++)
	{
		cout << arr[k] << endl;
	}

	

	system("pause");

	return 0;
}