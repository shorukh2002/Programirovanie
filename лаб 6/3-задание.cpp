#include<iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int a = 10, b = 15, c = 20;
	int i = a, j = b, d = c;
	a = j;
	j = d;
	d = i;
	cout << "Показать значение а: " << a << endl;
	cout << "Показать значение b: " << j << endl;
	cout << "Показать значение с: " << d << endl;

}


