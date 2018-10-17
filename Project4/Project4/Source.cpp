/*Написать программу, находящую в массиве сумму элементов делящихся либо
на 72 либо на 27(не вместе)*/
#include <iostream>
using namespace std;
int main() {
	unsigned int length = 0;
	cin >> length;
	int sum = 0, a;
	for (unsigned int i = 0; i < length; i++)
	{
		cin >> a;
		if ((a % 27) == (0) ^ ((a % 72) == (0))) sum += a;
	};
	cout << sum;
	return 0;
}