#include<iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int a = 10, b = 15;
	int i = a, j = b;
	a = j;
	j = i;

	cout << "Показать значение а: " << a << endl;
	cout << "Показать значение b: " << j << endl;


}
