#include <iostream>
using namespace std;
int main() {
	int N;
	int * arr = new int[9];
	for (int i = 0; i < 9; i++) {
		arr[i] = 0;
	}
	cin >> N;
	int a, n;
	for (int i = 0; i < N; i++) {
		cin >> a;
		while (a > 0) {
			n = a % 10;
			arr[n]++;
			a = a / 10;
		}
	}
	int max = 0;
	for (int i = 0; i < 9; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 9; i > 0; i--) {
		if (arr[i] == max) {
			cout << i << " ";
		}
	}
	system("pause");
	return 0;
}