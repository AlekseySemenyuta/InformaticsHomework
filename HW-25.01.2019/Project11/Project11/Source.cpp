/*ƒан массив, содержащий N неотрицательных целых чисел. 
Ќапишите программу, котора€ находит в этом массиве количество элементов, 
значение которых менее чем в два раза превосходит значение предшествующего элемента*/
#include <iostream>
using namespace std;
int main() {
	int n; int ans = 0;
	cin >> n;
	int * arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if ((arr[i] > arr[i - 1]) && (arr[i] < 2 * arr[i - 1])) {
			ans++;
		}
	}
	cout << ans;
	system("pause");
	return 0;
}