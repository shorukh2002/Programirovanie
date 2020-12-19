#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int  a, b, с, cum;
	cout << "¬ведите значение дл€ a и b, с: " << endl;
	cin >> a >> b >> c;
	if (a > c && b > c) {
		cum = a + b;
		cout << "Cума a и b  = " << sum;
		cout << endl;
	}
	else if (a > b && c > b) {
		cum = a + c;
		cout << "Cума a и c = " << cum;
		cout << endl;
	}
	else if (b > a && c > a) cum = b + c;
	cout << "Cума b и c  = " << cum;
	cout << endl;

}
