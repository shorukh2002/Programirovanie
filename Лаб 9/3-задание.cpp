#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int d, n;
	cout << "������� ����� ������  �� 1 �� 7 "; cin >> n;
	cout << "������� ����� ��� �� 1 �� 365 "; cin >> d;
	d = d + n;
	while (d > 6)
		d -= 7;

	cout << "���� ������ ����� = " << d << endl;
}

