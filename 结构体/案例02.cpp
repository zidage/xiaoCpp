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
		cout << "ÐÕÃû:" << hArray[i].name << " ÄêÁä:" << hArray[i].age << " ÐÔ±ð:" << hArray[i].gender << endl;
	}
}


int main()
{
	struct hero hArray[5] = 
	{ 
		{"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
	    {"õõ²õ",19,"Å®"}, 
	};

	int len = sizeof(hArray) / sizeof(hero);

	BubbleSort(hArray,len);
	printInfo(hArray, len);


	system("pause");
	return 0;
}