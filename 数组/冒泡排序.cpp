#include <iostream>
using namespace std;

int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//�ܹ���������Ϊ Ԫ�ظ���-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//�ڲ�ѭ���Ա� ����=Ԫ�ظ���-��ǰ����-1
		for (int j = 0; j < 9-1-i; j++)
		{
			//�����һ�����ֱȵڶ������ִ�,��������������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	//�������
	cout << "�����" << endl;
	for (int k = 0; k < 9; k++)
	{
		cout << arr[k] << endl;
	}

	

	system("pause");

	return 0;
}