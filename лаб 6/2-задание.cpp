#include<iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int a = 10, b = 15, c = 20;
	int i = a, j = b, d = c;
	j = i;
	a = d;
	d = b;
	cout << "Показать значение а: " << а << endl;
	cout << "Показать значение b: " << j << endl;
	cout << "Показать значение а: " << d << endl;

}
