#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "������� ����� ����� �,  �,  C: " << endl;
	cin >> a >> b >> c;
	if (a < b < c) {
		cout << "������������ ������ " << a << " < " << b << " <" << c << endl;
	}
	else {
		cout << "������������ �� ������ ";
	}
}

