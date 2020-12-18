#include<iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int x, y, i, j, d;
	cout << "Введите значение для x: ";
	cin >> x;
	i = x - 3;
	j = i * i * i * i * i * i;
	d = i * i * i;
	y = 4 * j - 7 * d + 2;
	cout << "Результат функции= " << y << endl;
}


