#include <iostream>

#define MAX 10
#define LIMIT 362880

using namespace std;

int sum = -1;
int all_val[LIMIT]={0};

int getval(int* o, int len)
{
	int val = 0;
	for (int i = 0; i < len; i++) {
		int e=1;
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
	temp=o[i];
	o[i] = o[j];
	o[j] = temp;
}

void perm(int* o, int len, int index)
{
	if (index == len) {
		sum++;
		all_val[sum]=getval(o, len);
	}
	for (int i = index; i < len;i++) {
		swap(o, index, i);
		perm(o, len, index + 1);
		swap(o, index, i);
	}
}


int main() {
	int str[MAX];

	int n;
	cout << "请输入位数:" ;
	cin >> n;
	cout << endl;
	cout << "请输入这些数，每次一个，回车隔开" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	cout << getval(str, n) << endl;
	cout << all_val[1] << endl;
	perm(str, n, 0);
	
	int temp = 0;
	for (int i = 0; i < sum; i++) {
		cout << all_val[i] << endl;
		if (temp < all_val[i])
			temp = all_val[i];
		else
			continue;
	}

	cout << temp;
	system("pause");
	return 0;
}