#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a;
	cout << "������� ����� ����� �: " << endl;
	cin >> a;
	if (a % 2 == 0 && a < 100) {
		cout << "������������ ������ " << a << " ׸���� �����������  " << endl;
	}
	else {
		cout << "������������ �� ������ ";
	}
}
