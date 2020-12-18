#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "Введите целое число А,  В,  C: " << endl;
	cin >> a >> b >> c;
	if (a < b < c) {
		cout << "высказивание истино " << a << " < " << b << " <" << c << endl;
	}
	else {
		cout << "Высказивание не истино ";
	}
}

