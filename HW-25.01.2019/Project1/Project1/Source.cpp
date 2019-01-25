/*� ����������� ���������-��������� ��� �������, ������� ��������� ������:
1. ������� 1
2. ������ �� 2
3. ������ �� 3.
������ �� ��� ����������� �� 1 ����� �� ������, 
������ ����������� ��� ����� � 2 ����, ������ � � 3 ����. 
��������� ��� ���������-��������� � ��� ������������������ ������.
�������� ��������� �����������, ������� ���������� ��������, 
������� ����� X ����������� � ����� Y.*/
/*#include <iostream>
using namespace std;
void f(int X, int Y, int sum) {
	int Sum = 1;
	while (0 == 0) {
		while (Y >= X) {
			if ((Y % 3) == 0) {
				sum++;
				f(X, Y / 3, sum);
			}
			if (((Y % 2) == 0) && ((Y % 3) != 0)) {
				sum++;
				f(X, Y / 2, sum);
			}
			if (((Y % 3) != 0) && ((Y % 2) != 0)) {
				f(X, Y / 3, sum);
				Y--;
			}
		}
		Sum = sum;
		if (0 == 0) {
			break;
		}
	}
	cout << Sum;
}
int main() {
	int X; int Y; int sum = 1; int Sum = 1;
	cin >> X >> Y;
	f(X, Y, sum);
	system("pause");
	return 0;
}*/
#include <iostream>
using namespace std;
int main() {
	int X, Y;
	cin >> X >> Y;
	int *arr = new int[Y + 1];
	for (int i = 0; i <= Y; i++) {
		if (i == X) {
			arr[i] = 1;
		}
		else if (i <= X) {
			arr[i] = 0;
		}
		else if ((i % 2 == 0) && (i % 3 == 0)) {
			arr[i] = arr[i - 1] + arr[i / 2] + arr[i / 3];
		}
		else if ((i % 2 == 0) && (i % 3 != 0)) {
			arr[i] = arr[i - 1] + arr[i / 2];
		}
		else if ((i % 2 != 0) && (i % 3 == 0)) {
			arr[i] = arr[i - 1] + arr[i / 3];
		}
		else if ((i % 2 != 0) && (i % 3 != 0)) {
			arr[i] = arr[i - 1];
		}
	}
	cout << arr[Y];
	system("pause");
	return 0;
}