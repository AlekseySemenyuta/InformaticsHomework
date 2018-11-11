//Процедура, заполняющая квадратный двумерный массив по диагоналям.
#include <iostream>
using namespace std;
void arr(int** &a, int b) {
	b--;
	int c = b, d = 0, k = 1;
	while (c >= d) {
		int x = d, y = d;
		while (x < c) {
			a[x][y] = k;
			k++;
			x++;
		}
		while (y < c) {
			a[x][y] = k;
			k--;
			y++;
		}
		while (x > d) {
			a[x][y] = k;
			k++;
			x--;
		}
		while (y > d) {
			a[x][y] = k;
			k--;
			y--;
		}
		d++;
		c--;
		k += 2;
	}
	if ((b % 2) == 0) {
		a[(b / 2)][(b / 2)] = (b + 1);
	}
}
int main() {
	int n;
	cin >> n;
	int** array = new int*[n];
	for (int count = 0; count < n; count++) {
		*(array + count) = new int[n];
	}
	arr(array, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	return 0; 
}