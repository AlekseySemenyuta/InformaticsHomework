/*��� ����� �� N ����� ������������� �����. �� ���� ����� ����������� ��� 
��������� ���� (����� ��������� ��� ��������, ������� ��������� �� ������ 
������ � ������, ������� ����� � ���� �� �����������), � ������ ���� 
����������� ����� ���������. ���������� ���������� ���������� ���, ��� 
������� ���������� ����� ������� �� 9.
�������� ����������� �� ������� � �� ������ ��������� ��� ������� ���� ������.*/
#include <iostream>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if ((arr[i] + arr[j]) % 9 == 0) {
				ans++;
			}
		}
	}
	cout << ans;
	system("pause");
	return 0;
}