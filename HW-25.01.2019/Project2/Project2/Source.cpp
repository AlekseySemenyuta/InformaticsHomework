/*� ����������� ������ �������, ������� ��������� ������:
1. ������� 1
2. ������ ������
3. ������ ��������
4. ������ �� 10
������ �� ��� ����������� �� 1 �������� ����� x, ������ �������� ��� ����� �� 2, 
������ ��������� ����� x � ����� 2x + 1, �������� �������� ��� �� 10. 
��������� ��� ����������� � ��� ������������������ ������. 
�������� ��������� �����������, ������� ���������� ��������, 
������� ����� X ����������� � ����� Y, �����,
��� � ������������� ��������� �� ����������� ����� Z.*/
#include <iostream> 
using namespace std;
int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	int *arr = new int[Y + 1];
	for (int i = 0; i <= Y; i++) {
		if (i == X) {
			arr[i] = 1;
		}
		else if (i <= X) {
			arr[i] = 0;
		}
		else if (i == Z) {
			arr[i] = 0;
		}
		else if ((i % 2 != 0) && (i % 10 == 0)) {
			arr[i] = arr[i - 1] + arr[(i - 1) / 2] + arr[i / 10];
		}
		else if ((i % 2 != 0) && (i % 10 != 0)) {
			arr[i] = arr[i - 1] + arr[(i - 1) / 2];
		}
		else if ((i % 2 == 0) && (i % 10 == 0)) {
			arr[i] = arr[i - 1] + arr[i / 2] + arr[i / 10];
		}
		else if ((i % 2 == 0) && (i % 10 != 0)) {
			arr[i] = arr[i - 1] + arr[i / 2];
		}
	}
	cout << arr[Y];
	system("pause");
	return 0;
}