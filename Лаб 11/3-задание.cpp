#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");

	int  a, b, с, ba, cа;

	cout << "Введите значение для a, b, c: " << endl;

	cin >> a >> b >> c;

	ba = b - a, ca = c - a;

	if (ba < ca) { cout << "Точка В ближе к точку А. Растояние= " << ba << endl; }

	else { cout << "Точка С ближе к точку А. Растояние= " << са << endl; }
}


