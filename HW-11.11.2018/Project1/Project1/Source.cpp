//Программа, вычисляющая сумму нечетных цифр целого числа.
#include <iostream>
using namespace std;
int main() {
	int x; int i = 10; int sum = 0;
	cin >> x;
	if (x < 0) {
		x = -x;
	}
		while ((x / i) != 0) {
			if ((((x % i) / (i / 10)) % 2) == 1) {
				sum += ((x % i) / (i / 10));
			}
			i *= 10;
	}
		if ((((x % i) / (i / 10)) % 2) == 1) {
			sum += ((x % i) / (i / 10));
		}
		cout << sum;
}