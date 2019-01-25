#include <iostream>
using namespace std;
int main() {
	int n, t, A, B, b = 0, a, a2, a3;
	cin >> n;
	cin >> t;
	a = t;
	for (int i = 1; i <= n; i++) {
		cin >> A >> B;
		b = b + A;
		a2 = a + B;
		a3 = b + t;
		if (a2 < a3) {
			a = a2;
		}
		else {
			a = a3;
		}
	}
	cout << a;
	system("pause");
	return 0;
}