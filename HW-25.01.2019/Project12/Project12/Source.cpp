/*�������� ���������� ���������, ��������� ��� �������� ������������������
����� N ��������������� ����� ����� ����������:����������� ����� ���� � ���������, 
������ ������� ����������� �� ����� ��� �� 5.
��������� ����� ���� �������������*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	int min = array[0] + array[5];
	for (int i = 0; i < n; i++) {
		for (int j = i + 5; j < n; j++) {
			if ((array[i] + array[j]) < min) {
				min = array[i] + array[j];
			}
		}
	}
	cout << min;
	system("pause");
}