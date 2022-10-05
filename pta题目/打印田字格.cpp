#include <stdio.h>

int main() {
	int r, c;
	scanf_s("%d%d", &r, &c);
	for (int i = 0; i < r; i++)
	{
		for (int f = 0; f < c; f++)
		{
			printf("|*****");
		}
		printf("|\n");
		for (int f = 0; f < c; f++)
		{
			printf("|  |  ");
		}
		printf("|\n");
		for (int f = 0; f < c; f++)
		{
			printf("|--+--");
		}
		printf("|\n");
		for (int j = 0; j < c; j++)
		{
			printf("|  |  ");
		}
		printf("|\n");
	}
	for (int i = 0; i < c; i++)
	{
		printf("|*****");
	}
	printf("|\n");
	return 0;
}