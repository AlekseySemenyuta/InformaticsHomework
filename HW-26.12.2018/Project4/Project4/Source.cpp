//Реализуйте вычисление значения полинома в точке посредством схемы Горнера.
#include <iostream> 
using namespace std;
int main() {
	unsigned int x, y;
	cin >> x >> y;
	int* a = new int[x + 1];
	for (unsigned int i = 0; i < x + 1; i++) {
		cin >> a[i];
	}
	int b = a[x];
	for (int i = x - 1; i >= 1; i--) {
		b = a[i] + b * y;
	}
	cout << a[0] + b * y;
	system("pause");
	return 0;
}