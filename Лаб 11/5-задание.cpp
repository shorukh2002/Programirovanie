#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  n;
	cout << "������� �����: " << endl; cin >> n;
	if (n % 2 == 0 && n < 0) { cout << " ����� ������������ ������" << endl; }
	else if (n == 0) { cout << " ����� ������� " << endl; }
	if (n % 2 != 0 && n > 0) { cout << " ����� ������������ ��������" << endl; }
	if (n % 2 != 0 && n < 0) { cout << " ����� ������������ ��������" << endl; }
	if (n % 2 == 0 && n > 0) { cout << " ����� ������������ ������" << endl; }
}
