//Процедура, дописывающая к каждому элементу динамически выделенного массива справа его квадрат.
#include <iostream>
using namespace std;
int sq_num(int x) {
	return x * x;
}
void arr(int* &a, int b) {
	int *arr = new int[b];
	for (int i = 0; i < b; i++) {
		*(arr + i) = sq_num(*(a + i));
	};
	int c = 2 * b;
	int* new_arr = new int[c];
	for (int i = 0; i < c; i++) {
		if ((i % 2) == 0) {
			*(new_arr + i) = *(a + (i / 2));
		}
		else {
			*(new_arr + i) = *(arr + ((i - 1) / 2));
		};
	};
	delete[]arr;
	a = new_arr;
}
int main() {
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(array + i);
	};
	arr(array, n);
	n += n;
	for (int i = 0; i < n; i++) {
		cout << *(array + i) << " ";
	}
	return 0;
}