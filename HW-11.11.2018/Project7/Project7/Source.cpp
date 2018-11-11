//Напишите программу, выписывающую все элементы последовательности, имеющие ровно семь делителей
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
		int k = 2; int sum = 0;
		while (k <= temp) {
			if ((temp % k) == 0) {
				sum++;
			}
			k++;
		}
		if (sum == 6) {
			a.push_back(temp);
		}
	}
	for (int m = a.size() - 1; m >= 0; m--) {
		cout << a[m] << " ";
	}
}