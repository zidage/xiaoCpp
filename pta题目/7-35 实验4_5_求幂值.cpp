#include <stdio.h>
#include <math.h>

double t(int i, double x)
{
	if (i == 1)
		return 1;
	else
	{
		double a = 1;
		for (int j = 1; j < i; j++)
		{
			a *= x;
		}
		double b = 1;
		for (int j = 1; j < i; j++)
		{
			b *= j;
		}
		return a / b;
	}
}

int main()
{
	int x;
	scanf_s("%d", &x);
	
	double result = 0;
	int i = 1;
	while (1)
	{
		if(fabs(t(i,x))<1e-8)
			break;
		else
		{
			result += t(i, x);
			i++;
		}
	}
	printf("%.4lf", result);
	return 0;
}