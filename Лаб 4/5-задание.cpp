#include<iostream>
using namespace std;
int  main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите 1-ое число: " << endl; cin >> a;
	cout << "Введите 2-ое число: " << endl; cin >> b;
	int sum = a + b, raznost = a - b, pro = a * b;
	fabs(a);
	fabs(b);
	cout << "Резултать суммы 2-х чисел=" << sum << endl <<
		"Резултать разности 2-х чисел=" << raznost << endl <<
		"Резултать произведение 2-х чисел=" << pro << endl << endl <<
		"Модуль а= " << a << endl << "Модуль  b= " << b << endl;
}


