#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x = 10, a = 100, Ax, Ay, y;
	Ax = a * x;
	cout << "10 кг конфет стоит: " << Ax << "рублей" << endl;
	cout << "1 кг конфет стоит: " << a * 1 << endl;
	cout << "Введите сколько кг конфет хотите?  "; cin >> y;
	Ay = a * y;
	cout << y << " кг конфет  стоит " << Ay << " рублей " << endl;
}
