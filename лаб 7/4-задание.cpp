#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int v1, v2;
	cout << "Скорость 1 машина= "; cin >> v1;
	cout << "скорость 2 машина= "; cin >> v2;
	int t;
	cout << "Введите время удаление машин друг от друга "; cin >> t;
	int S = (v1 + v2) * t;
	cout << " Расстояние машин после " << t << " часов=  " << S << endl;
}
