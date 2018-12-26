//ѕрограмма, перевод€ща€ число в систему счислени€ с основанием k, где k не превышает 30.
#include <iostream>
using namespace std;
int main() {
	int n; int k; int size;
	cin >> n >> k >> size;
	int *arr = new int[size];
	while (n > 0) {
		int i = 0;
		arr[i] = n % k;
		n /= k;
		i++;
	}
	while (size >= 0) {
		cout << arr[size];
		size--;
	}
	system("pause");
	return 0;
}