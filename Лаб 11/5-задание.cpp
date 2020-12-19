#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  n;
	cout << "Введите число: " << endl; cin >> n;
	if (n % 2 == 0 && n < 0) { cout << " Число отрицательно чётное" << endl; }
	else if (n == 0) { cout << " Число нулевое " << endl; }
	if (n % 2 != 0 && n > 0) { cout << " Число положительно нечётное" << endl; }
	if (n % 2 != 0 && n < 0) { cout << " Число отрицательно нечётное" << endl; }
	if (n % 2 == 0 && n > 0) { cout << " Число положительно чётное" << endl; }
}
