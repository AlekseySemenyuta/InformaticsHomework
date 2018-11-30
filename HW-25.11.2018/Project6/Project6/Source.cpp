/*Программа, находящая все простые числа Ченя не превосходящие n. 
Программа должна работать не более чем за O(n*log log n) шагов.*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool *used = new bool[n + 3];
	int *arr = new int[n + 3];
	used[0] = used[1] = 0;
	for (int i = 2; i <= n; i++) {
		arr[i] = 0;
		used[i] = 1;
	}
	for (int i = 2; i <= n + 2; i++) {
		if (used[i]) {
			for (int j = i + i; j <= n + 2; j += i) {
				used[j] = 0;
				arr[j]++;
				if (j % (i*i) == 0) {
					arr[j]++;
				}
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (used[i] == 1 && (used[i + 2] == 1 || arr[i + 2] == 2)) {
			cout << i << " ";
		}
	}
	system("pause");
	return 0;
}