#include <iostream>
#include <string>

using namespace std;

struct hero
{
	string name;
	int age;
	string gender;
};

void BubbleSort(struct hero hArray[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j = len - i - 1;j++)
		{
			if (hArray[j].age > hArray[j + 1].age)
			{
				struct hero temp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = temp;
			}
		}
	}
}

void printInfo(struct hero hArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "����:" << hArray[i].name << " ����:" << hArray[i].age << " �Ա�:" << hArray[i].gender << endl;
	}
}


int main()
{
	struct hero hArray[5] = 
	{ 
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
	    {"����",19,"Ů"}, 
	};

	int len = sizeof(hArray) / sizeof(hero);

	BubbleSort(hArray,len);
	printInfo(hArray, len);


	system("pause");
	return 0;
}