#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите целое число А и В: " << endl;
	cin >> a >> b;
	if (a > 2 && b <= 3) {
		cout << "высказивание истино " << a << " >2 и " << b << " >3" << endl;
	}
	else {
		cout << "Высказивание не истино ";
	}
}
