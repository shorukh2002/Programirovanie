#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int d;
	cout << "Введите число дня от 1 до 365 ";
	cin >> d;
	while (d > 6)
		d -= 7;
	cout << " День недели равно " << d + 1 << endl;
}
