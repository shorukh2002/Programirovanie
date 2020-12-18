#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int d, n;
	cout << "¬ведите число недели  от 1 до 7 "; cin >> n;
	cout << "введите число дн€ от 1 до 365 "; cin >> d;
	d = d + n;
	while (d > 6)
		d -= 7;

	cout << "ƒень недели равно = " << d << endl;
}

