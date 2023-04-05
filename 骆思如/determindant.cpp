#include <iostream>

#define MAX 10
#define LIMIT 362880

using namespace std;

int sum = -1;
int all_val[LIMIT] = { 0 };

int getval(int* o, int len)
{
	int val = 0;
	for (int i = 0; i < len; i++) {
		int e = 1;
		for (int j = 0; j < len - i - 1; j++) {
			e *= 10;
		}
		val += (o[i] * e);
	}
	return val;
}

void swap(int* o, int i, int j)
{
	int temp;
	temp = o[i];
	o[i] = o[j];
	o[j] = temp;
}

void perm(int* o, int len, int index)
{
	if (index == len) {
		sum++;
		all_val[sum] = getval(o, len);
	}
	for (int i = index; i < len; i++) {
		swap(o, index, i);
		perm(o, len, index + 1);
		swap(o, index, i);
	}
}

int val = 0;

int detEval(int* det)
{
	for (int i = 1; i <= 3; i++)
	{
		
	}
}


int main() {
	int str[MAX];

	int det[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
}