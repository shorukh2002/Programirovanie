#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите целое число А: " << endl;
	cin >> a;
	if (a % 2 == 0 && a < 100) {
		cout << "высказивание истино " << a << " Чётное двухзначное  " << endl;
	}
	else {
		cout << "Высказивание не истино ";
	}
}
