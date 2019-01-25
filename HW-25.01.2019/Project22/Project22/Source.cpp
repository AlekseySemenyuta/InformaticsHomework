#include <iostream>
using namespace std;
int main() {
	int d = 6;
	int max = 2147483646;
	int N, x, sum = 0, min, k;
	cin >> N;
	min = max + 1;
	for (int i = 0; i < N; i++) {
		cin >> x;
		sum += x;
		if ((x % d != 0) && (x < min)) {
			min = x;
		}
	}
	if (sum % d != 0) {
		k = N;
	}
	else if (min <= max) {
		k = N - 1;
		sum -= min;
	}
	else {
		k = 0;
		sum = 0;
	}
	cout << k << " " << sum;
	system("pause");
	return 0;
}