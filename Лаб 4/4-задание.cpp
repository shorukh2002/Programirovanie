#include<iostream>
using namespace std;
int  main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите 1-ое число: " << endl; cin >> a;
	cout << "Введите 2-ое число: " << endl; cin >> b;
	int sum = a + b, raznost = a - b, pro = a * b;
	int ka = a * a;
	int kb = b * b;
	cout << "Резултать суммы 2-х чисел=" << sum << endl <<
		"Резултать разности 2-х чисел=" << raznost << endl <<
		"Резултать произведение 2-х чисел=" << pro << endl << endl <<
		"Квадрат а= " << ka << endl << "Квадрат b= " << kb << endl;


}

