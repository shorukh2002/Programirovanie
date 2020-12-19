#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int  a, b, с, d;
	cout << "¬ведите значение дл€ a и b: " << endl;
	cin >> a >> b;
	if (a > b)c = a + b;
	else if (a < b) { d = b + a; }
	else if (a == b) {
		c = 0; d = 0;
		cout << "a= " << c << " b= " << d << endl;
	}
