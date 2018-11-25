/*Процедура, выписывающая из массива длины n все элементы, 
у которых произведение ненулевых цифр больше k.*/
#include <iostream>
using namespace std;
int main() {
	int size, k;
	cin >> size;
	cin >> k;
	int *array = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < size; i++) {
		int product = 1;
		int num = array[i];
		while (array[i] >= 1) {
			if ((array[i] % 10) != 0) {
				product *= (array[i] % 10);
			}
			if (product > k) {
				cout << num << " ";
				break;
			}
			array[i] /= 10;
		}
	}
	system("pause");
	return 0;
}