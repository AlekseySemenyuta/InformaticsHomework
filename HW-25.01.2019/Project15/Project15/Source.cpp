/*�������� ���������, ��������� ��� �������� ������������������ ����� N ����� ����� ����������: 
�����������	������������ ���� � ���������, ������ ������� ����������� �� ����� ��� �� 5.
��������� ������ ���� ����������� �� ������� � ������.*/
#include <iostream> 
using namespace std;
int main() {
	int a, k = 5, N;
	cin >> N;
	int *arr = new int[k - 1];
	for (int i = 0; i < k; i++) {
		cin >> a;
		arr[i % k] = a;
	}
	int sum = 2147483647, min = 2147483647;
	for (int i = k; i < N; i++) {
		cin >> a;
		if (arr[i % k] < min) {
			min = arr[i % k];
		}
		if (a * min < sum) {
			sum = a * min;
			arr[i % k] = a;
		}
	}
	cout << sum;
	system("pause");
	return 0;
}