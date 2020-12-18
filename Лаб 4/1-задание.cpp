#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a, b, P, S;
	cout << "Длина прямоугольника  а= ";
	cin >> a;
	cout << "ширина прямоугольника= ";
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Площадь прямоугольника=" << S << "Периметр= " << P << endl;


}
