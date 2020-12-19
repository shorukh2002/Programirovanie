#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, selection;
	cout << "Введите 2 числа:  " << endl; cin >> a >> b;
	cout << "Выберите математическу оператсию  " << endl <<
		"1. Сложение " << endl <<
		"2. Вычитание " << endl <<
		"3. Умножение " << endl <<
		"4. Деление " << endl;
	cin >> selection;
	switch (selection) {
	case 1:
		cout << "Результат сложение " << a + b << endl;
		break;
	case 2:
		cout << "Результат вычитание " << a - b << endl;
		break;
	case 3:
		cout << "Результат умножение " << a * b << endl;
		break;
	case 4:
		cout << "Результат умножение " << a * b << endl;
		break;
	}

}