//Ћогическа€ функци€, провер€юща€, €вл€етс€ ли строка палиндромом.
#include <iostream>
using namespace std;
bool function(char* a, int b) {
	b--;
	int count = 0;
	for (int i = 0; i <= ((b - 1) / 2); i++) {
		if (a[i] != a[b - i]) {
			count++;
		};
	};
	return (count == 0);
}
int l(char* a) {
	int b = 0;
	while (*a++) {
		b++;
	};
	return b;
}
int main() {
	int n;
	char* arr = new char[100];
	cin.getline(arr, 100);
	n = l(arr);
	if (function(arr, n) == 1) {
		cout << "palindrome";
	}
	else {
		cout << "not palindrome";
	};
}