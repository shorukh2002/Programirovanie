#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n, i, j, d;
	cout << "Введите число: ";
	cin >> n;
	i = n * n;
	j = i * i;
	d = j * j;
	cout << "Данная число в 8-ой степени= " << d << endl;
}
