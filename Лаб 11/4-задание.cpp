#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  x, y;
	cout << "Введите число для х, у: " << endl; cin >> x >> y;
	if (x > 0 && y > 0) { cout << " В первом" << endl; }
	else if (x > 0 && y < 0) { cout << " в втором " << endl; }
	else if (x < 0 && y > 0) { cout << " в третый " << endl; }
	else { cout << " в четвёртом " << endl; }
}


