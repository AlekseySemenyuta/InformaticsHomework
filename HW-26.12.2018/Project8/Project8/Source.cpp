#include <iostream>
using namespace std;
void  arr(int** &a, int b) {
	b--;
	int c = b, d = 0, k = 1;
	while (c >= d) {
		int x = c, y = d;
		while (x > d) {
			a[y][x] = k;
			k++;
			x--;
		}
		while (y < c) {
			a[y][x] = k;
			k++;
			y++;
		}
		while (x < c) {
			a[y][x] = k;
			k++;
			x++;
		}
		while (y > d) {
			a[y][x] = k;
			k++;
			y--;
		}
		d++;
		c--;
	}
	if ((b % 2) == 0) {
		a[(b / 2)][(b / 2)] = ((b + 1)*(b + 1));
	}
}
int main() {
	int n;
	cin >> n;
	int** array = new int*[n];
	for (int count = 0; count < n; count++) {
		*(array + count) = new int[n];
	}
	int f = 3;
	if ((n * n) >= 10) {
		f += 2;
	}
	arr(array, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}