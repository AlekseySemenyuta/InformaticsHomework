//Программа, находящая все простые числа Софи Жермен не превосходящие n.
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool * used = new bool[2 * n + 2];
	used[0] = used[1] = 0;
	for (int i = 2; i <= 2 * n + 1; i++) {
		used[i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		if (used[i]) {
			for (int j = i + i; j <= 2 * n + 1; j += i) {
				used[j] = 0;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if ((used[i] == 1) && (used[2 * i + 1] == 1)) {
			cout << i << " ";
		}
	}
	system("pause");
	return 0;
}