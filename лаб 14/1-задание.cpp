#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите число А: "; cin >> a;
	cout << "Введите число B: "; cin >> b;
	while (a > b || a < 0 || b < 0);
	for (int i = a; i < b; i++)
	{
		for (int j = 0; j < i; j++) { cout << i; }cout << " | ";
	}cout << endl;
}
