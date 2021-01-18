#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << " Введите число для а: "; cin >> a;
	cout << " Введите число для b: "; cin >> b;
	cout << " Прежднее число: " << a << b << endl;
	c = a;
	a = b;
	b = c;
	cout << " Новое число " << endl;
	cout << a << b << a;
}




