//Программа, находящая все простые числа Чэня не превосходящие n.
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool * used = new bool[n + 1];
	used[0] = used[1] = 0;
	for (int i = 2; i <= n; i++) {
		used[i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		if (used[i]) {
			for (int j = i + i; j <= n; j += i) {
				used[j] = 0;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if ((used[i] == 1) && (used[i + 2] == 1)) {
			cout << i << " ";
		}
	}
	system("pause");
	return 0;
}