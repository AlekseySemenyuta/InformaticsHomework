//Процедура, заполняющая квадратный двумерный массив пирамидой.
#include <iostream>
using namespace std;
void arr(int **&a, int b) {
	b--;
	int c = b, d = 0, k = 1;
	while (c >= d) {
		int x = d, y = d;
		while (x < c) { 
			a[x][y] = k;
			x++;
		}
		while (y < c) { 
			a[x][y] = k;
			y++;
		}
		while (x > d) {
			a[x][y] = k;
			x--;
		}
		while (y > d) {
			a[x][y] = k;
			y--;
		}
		d++;
		c--;
		k++;
	}
	if ((b % 2) == 0) {
		a[(b / 2)][(b / 2)] = ((b / 2) + 1);
	}
}
int main() {
	int n;
	cin >> n;
	int **array = new int *[n];
	for (int count = 0; count < n; count++) {
		*(array + count) = new int[n];
	}
	arr(array, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << " ";
		};
		cout << endl;
	}
	return 0;
}