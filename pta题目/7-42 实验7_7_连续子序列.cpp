#include <stdio.h>

int main()
{
	int a[1000];
	int b[1000];

	int i = 0;
	int num;
	while (scanf_s("%d", &num))
	{
		if (num == -1)
		{
			break;
		}
		else
		{
			a[i] = num;
			i++;
		}
	}
	i = 0;
	while (scanf_s("%d", &num))
	{
		if (num == -1)
		{
			break;
		}
		else
		{
			b[i] = num;
			i++;
		}
	}

	int n = 0;
	for (; n < sizeof(a) / sizeof(a[0]); n++)
	{
		if (a[n] == b[0])
			break;
	}
	int k = 0;
	for (int j = n; j <= n + sizeof(b) / sizeof(b[0]); j++)
	{
		if (a[j] != b[k])
		{
			printf("ListB is not the sub sequence of ListA.\n");
			return 0;
		}
		k++;
	}
	printf("ListB is the sub sequence of ListA.\n");
	return 0;
}