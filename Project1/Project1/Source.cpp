//Программа, проверяющая является ли число составным. (Число - натуральное)
#include <iostream>
using namespace std;
int main() {
	int N, i = 2;
	cin >> N;
	if (N == 1) {
		cout << "Unit";
	}
	else {
		while (N % i != (0)) {
			i++;
		}
		if (N == i) { cout << "Prime"; }
		else { cout << "Composite"; }
	}
		return 0;
}