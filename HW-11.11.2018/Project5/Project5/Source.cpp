//Программа, заменяющая составные числа на их самые большие простые делители.
#include <iostream>
using namespace std;
int main() {
	int n; int k = 2;
	cin >> n;
	while (n > 1) {
		int i = n/2;
		while ((n > 1) && ((n % i) != 0) && (i > 1)) {
			i--;
		}
		n = i;
		while ((n % k) != 0) {
			k++;
		}
		if (n == k) {
			cout << n;
		}
	}
}