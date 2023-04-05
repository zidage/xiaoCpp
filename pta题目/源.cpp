#include <iostream>

using namespace std;

int main()
{
	char* fuck[100];
	int i = 0;
	while (getchar() != '\n')
	{
		scanf_s("%s", &fuck[i]);
		i++;
	}
	for (int j = (sizeof(fuck) / sizeof(fuck[0])) - 1; j >= 0; j--)
	{
		cout << fuck[i];
		cout << " ";
	}
	return 0;
}