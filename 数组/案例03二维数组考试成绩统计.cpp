#include <iostream>
#include <string>
using namespace std;

int main() {
	int scores[3][3]
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string username[3] = { "����","����","����" };
	for (int i = 0; i < 3; i++)
	{
		int total_score = 0;
		for (int j = 0; j < 3; j++)
		{
			total_score += scores[i][j];
		}
		cout << username[i] << "�ĳɼ�Ϊ:" << total_score << endl;
	}


	system("pause");
	return 0;
}