/*�������� ���������, ��������� ��� �������� ������������������
����� N ��������������� ����� ����� ����������: 
������������ ����� ���� � ���������, ������ ������� ����������� �� ����� ��� �� 5.
��������� ������ ���� ����������� �� ������� � ������*/
#include <iostream>
using namespace std;
int main() {
	int m = 0;
	int max = 0;
	int x;
	int d = 5;
	int n;
	cin >> n;
	int *arr = new int[d - 1];
	for (int i = 0; i < d; i++)
	{
		cin >> x;
		arr[i % d] = x;
	}
	for (int i = d; i < n; i++)
	{
		cin >> x;
		if (arr[i % d] > max) {
			max = arr[i % d];
		}
		if (x + max > m) {
			m = x + max;
			arr[i % d] = x;
		}
	}
	cout << m;
	system("pause");
	return 0;
}