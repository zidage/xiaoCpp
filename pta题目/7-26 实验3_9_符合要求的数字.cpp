#include <stdio.h>


int main()
{
	int n, m;
	scanf_s("%d%d", &n, &m);


	for (int i = 1; i < n; i++)
	{

		int t = i;
		int num = 0;
		while (t > 0)
		{
			num += (t % 10) * (t % 10);
			t /= 10;
		}
		if (i / m == num)
			printf("%d\n", i);
		
	}
	return 0;
}