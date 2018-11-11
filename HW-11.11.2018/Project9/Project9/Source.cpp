//Программа, находящая корень функции f, если известно, что f – монотонна.
#include <iostream>
using namespace std;
bool s(double a) {
	return (a >= 0);
}
double function(double a) {
	return (a * a * a);
}
int main() {
	double n, x = 0, b = 100, i = (x - b), j = (x + b);
	cin >> n;
	while (s(function(i)) == s(function(j)))
	{
		i -= b;
		j += b;
	}
	double c = (j - i);
	while ((function(x) != 0) && (s(function(x - n)) == s(function(x + n))))
	{
		c /= 2;
		if (s(function(i)) != s(function(x)))
		{
			j -= c;
			x -= (c / 2);
		}
		else
		{
			i += c;
			x += (c / 2);
		}
	}
	cout << x;
	return 0;
}