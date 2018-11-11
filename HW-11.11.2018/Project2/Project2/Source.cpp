//Программа, вычисляющая произведение цифр целого числа, чётность которых совпадает с чётностью последней цифры.
#include <iostream>
using namespace std;
int main() {
	int x; int i = 10; int answer = 1;
	cin >> x;
	if (x < 0) {
		x = -x;
	}
	while ((x / i) != 0) {
		if ((((x % i) / (i / 10)) % 2) == ((x % 10) % 2)) {
			answer *= ((x % i) / (i / 10));
		}
		i *= 10;
	}
	if (((x % i) / (i / 10)) == (x % 10)) {
		answer *= ((x % i) / (i / 10));
	}
	cout << answer;
}