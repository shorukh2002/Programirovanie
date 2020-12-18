# include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, x;
	cout << "Введите коэффициенты A: ";
	cin >> a;
	cout << "Введите коэффициенты B: ";
	cin >> b;
	x = -(b / a);
	cout << "x= " << x << endl;
}

