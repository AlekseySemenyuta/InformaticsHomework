#include <iostream>
using namespace std;
int main() {
	unsigned int a, sum = 0, length = -1;
	double avarage;
	do {
		cin >> a;
		sum += a;
		length++;
	} while (a != 0);
	avarage = (double)sum / (double)length;
	cout << avarage;
	return 0;
}