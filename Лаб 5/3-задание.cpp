#include<iostream>
using namespace std;
int  main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "Введите точку а: " << endl; cin >> a;
	cout << "Введите точку b: " << endl; cin >> b;
	cout << "Введите точку с: " << endl; cin >> c;
	int ac = c - a, bc = b - c, pro = ac * bc;

	cout << "Произведение=  " << pro << endl;


}

