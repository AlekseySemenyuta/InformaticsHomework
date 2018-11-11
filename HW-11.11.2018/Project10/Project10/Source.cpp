//Процедура, удаляющая из динамически выделенного массива все чётные значения.
#include <iostream>
using namespace std;
int x(int* a, int b) {
	int s = 0;
	for (int i = 0; i < b; i++) {
		if (((*(a + i)) % 2) == 0) {
			s++;
		};
	};
	return s;
}
void function(int* &c, int d) {
	int l = x(c, d);
	int* arr = new int[d - l];
	int k = 0;
	for (int i = 0; i < d; i++) {
		if (((*(c + i)) % 2) != 0) {
			*(arr + k) = *(c + i);
			k++;
		};
	};
	c = arr;
}
int main() {
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(array + i);
	};
	int f = x(array, n);
	function(array, n);
	for (int i = 0; i < (n - f); i++) {
		cout << *(array + i) << " ";
	};
	delete[] array;
}