//Процедура, удаляющая из динамически выделенного массива максимальный и минимальный элементы.
#include <iostream>
using namespace std;
int max(int* a, int b) {
	int k = *a;
	for (int i = 0; i < b; i++) {
		if ((*(a + i)) > k) {
			k = *(a + i);
		}
	}
	return k;
}
int min(int* a, int b) {
	int k = *a;
	for (int i = 0; i < b; i++) {
		if ((*(a + i)) < k) {
			k = *(a + i);
		}
	}
	return k;
}
int x(int* a, int b) {
	int m = 0;
	for (int i = 0; i < b; i++) {
		if (((*(a + i)) == (max(a, b))) || ((*(a + i)) == (min(a, b)))) {
			m += 1;
		}
	}
	return m;
}
void arr(int* &a, int b) {
	int r = x(a, b);
	int* massiv = new int[b - r];
	int k = 0;
	for (int i = 0; i < b; i++) {
		if (((*(a + i)) != max(a, b)) && ((*(a + i)) != min(a, b))) {
			*(massiv + k) = *(a + i);
			k += 1;
		}
	}
	a = massiv;
}
int main() {
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(array + i);
	}
	int f = x(array, n);
	arr(array, n);
	for (int i = 0; i < (n - f); i++) {
		cout << *(array + i) << " ";
	}
	delete[]array;
	return 0;
}