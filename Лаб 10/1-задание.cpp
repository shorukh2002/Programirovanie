#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "������� ����� ����� � � �: " << endl;
	cin >> a >> b;
	if (a > 2 && b <= 3) {
		cout << "������������ ������ " << a << " >2 � " << b << " >3" << endl;
	}
	else {
		cout << "������������ �� ������ ";
	}
}
