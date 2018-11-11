//Программа, находящая сумму простых элементов массива.
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		int k = 2;
		while ((k <= temp) && ((temp % k) != 0)) {
			k++;
		}
		if (k == temp) {
			a.push_back(temp);
		}
	}
	int t = 0;
	for (int m = 0; m < a.size(); m++)
		t += a[m];
	cout << t;
}