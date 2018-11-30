/*ѕереборна€ программа, вычисл€ющую значение функции Ёйлера дл€ числа n.
ѕрограмма должна работать не более чем за O(n* log n) шагов.*/
#include <iostream>
using namespace std;
int GCD(int x, int y) {
	while (x != y) {
		if (x > y) {
			int z = x;
			x = y;
			y = z;
		}
		y = y - x;
	}
	return x;
	};
int main() {
	int n;
	cin >> n;
	int a = 1;
	for (int i = 2; i < n; i++) {
		if (GCD(i, n) == 1) {
			a++;
		};
	};
	cout << a;
	system("pause");
}