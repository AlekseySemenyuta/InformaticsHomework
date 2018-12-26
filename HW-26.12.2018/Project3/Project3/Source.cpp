//Программа, позволяющая эффективно проверять принадлежность пары значений массиву.
#include <iostream>
using namespace std;
bool f(int *A, int size, int x, int q, int p = 0) {
	if (A[(q + p) / 2] == x) {
		return true;
	}
	if (q - p <= 1) {
		return false;
	}
	if (A[(p + q) / 2] > x) {
		f(A, size, x, (p + q) / 2, p);
	}
	if (A[(p + q) / 2] < x) {
		f(A, size, x, q, (p + q) / 2);
	}
}
int main() {
	int size;
	cin >> size;
	int *A = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> A[i];
	}
	int a, b;
	cin >> a >> b;
	if (f(A, size, a, size) && f(A, size, b, size) == true) {
		cout << " YES ";
	}
	else {
		cout << " NO ";
	}
	system("pause");
	return 0;
}