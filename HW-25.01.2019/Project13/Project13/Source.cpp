/*�������� ���������� ���������, ��������� ��� �������� ������������������
����� N ����� ����� ����������: ������������ ������������ ���� � ���������, 
������ ������� ����������� �� ����� ��� �� 5. 
��������� ����� ���� �������������*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int max = 0;
	int *array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 5; j < n; j++) {
			if ((array[i] * array[j]) > max) {
				max = array[i] * array[j];
			}
		}
	}
	cout << max;
	system("pause");
}