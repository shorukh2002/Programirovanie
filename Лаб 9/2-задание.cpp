#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int d;
	cout << "������� ����� ��� �� 1 �� 365 ";
	cin >> d;
	while (d > 6)
		d -= 7;
	cout << " ���� ������ ����� " << d + 1 << endl;
}
