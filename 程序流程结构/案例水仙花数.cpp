#include <iostream>
using namespace std;

int main()
{
	//1,�����е���λ���������(100-999)
	int num = 100;
	do
	{
		int a = 0; //��λ
		int b = 0; //ʮλ
		int c = 0; //��λ

		a = num % 10;         	//��ȡ��λ ������ȡģ��10 num%10
		b = num / 10 % 10;      //��ȡʮλ num/10 (num/10)%10 ��������10,�õ���λ��,��ȡģ��10,�õ�ʮλ��
		c = num / 100;          //��ȡ��λ num/100 ֱ��������100,��ȡ��λ

		if (a*a*a+b*b*b+c*c*c==num)//�����ˮ�ɻ���
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	//2,�����е���λ�����ҵ�ˮ�ɻ���	
	//ˮ�ɻ���


	system("pause");
	return 0;
}