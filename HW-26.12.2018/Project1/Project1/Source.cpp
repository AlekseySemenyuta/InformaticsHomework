//Программа, находящая k-ую порядковую статистику.
#include <iostream>
using namespace std;
int f(int *A, int a, int b) {
	if (a != b) {
		swap(A[a + rand() % (b - a)], A[b]);
	}
	int x = A[b];
	int i = a - 1;
	for (int j = a; j <= b; j++) {
		if (A[j] <= x) {
			swap(A[++i], A[j]);
		}
	}
	return i;
}
int K(int *A, int t, int k) {
	int x = 0, y = t;
	for (;;) {
		int mid = f(A, x, y);
		if (mid < k) {
			x = mid + 1;
		}
		else if (mid > k) {
			y = mid - 1;
		}
		else {
			return A[k];
		}
	}
}
int main() {
	int n, k;
	cin >> n >> k;
	int *A = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	cout << K(A, n, k);
	system("pause");
	return 0;
}