//Напишите программу, находящую обратный по модулю элемент.
#include <iostream>
using namespace std;
int main() {
	unsigned int X, N;
	cin >> X >> N;
	for (unsigned int Y = 1; Y < N; Y++) {
		if ((X * Y) % N == 1) {
			cout << Y;
			return 0;
		}
	}
	cout << "None";
	return 0;
}