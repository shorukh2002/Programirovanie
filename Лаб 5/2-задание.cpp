#include<iostream>
using namespace std;
int  main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "������� ����� �: " << endl; cin >> a;
	cout << "������� ����� b: " << endl; cin >> b;
	cout << "������� ����� �: " << endl; cin >> c;
	int ac = c - a, bc = c - a, sum = ac + bc;

	cout << "����� �������=  " << sum << endl;


}
