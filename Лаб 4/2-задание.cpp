#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int d, L;
	float n = 3.14;
	cout << "Диаметр окружности= "; cin >> d;

	L = n * d;

	cout << "Длина= " << L << endl;


}
