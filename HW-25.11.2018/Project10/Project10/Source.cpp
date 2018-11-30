/*Функция, вычисляющая праймориал числа. 
Программа должна работать не более чем за O(n*log log n) шагов.*/
#include <iostream>
using namespace std;
int p(bool *a, int b) {
	int k = 1;
	a[0] = a[1] = 0;
	for (int i = 2; i <= b; i++) {
		a[i] = 1;
		for (int i = 2; i <= b; i++) {
			if (a[i] == 1) {
				for (int j = i + i; j <= b; j += i) {
					a[j] = 0;
				};
			};
		};
		if (a[i] == 1) {
			k *= i;
		};
	};
	return k;
}
int main() {
	int n;
	cin >> n;
	bool *arr = new bool[n + 1];
	cout << p(arr, n);
	system("pause");
}