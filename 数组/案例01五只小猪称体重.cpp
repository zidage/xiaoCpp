#include <iostream>
using namespace std;

int main()
{
	//1,����5ֻС�����ص�����
	int arr[5] = { 300,350,500,400,250 };
	//���������ҵ����ֵ
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		//������ʵ������е�Ԫ�ر����϶������ֵ��Ҫ��,�������ֵ
		if (max < arr[i])
		{
			max = arr[i];
		}	
	}
	//��ӡ���ֵ
	cout << "���ص�С����:" << max << endl;
	system("pause");
	return 0;
}