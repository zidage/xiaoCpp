#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	int len = 1;
	int tn = n;
	if (tn > 0)
	{
		len = 0;
		while (tn > 0)
		{
			tn /= 10;
			len++;
		}
	}

	int pow = 1;

	for (int i = 0; i < len-1 ; i++)
	{
		pow *= 10;
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d ", n / pow);
		n = n%pow;
		pow /= 10;
	}

	return 0;
}