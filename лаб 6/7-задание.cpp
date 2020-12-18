#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, i, j;
	cout << "Введите число: ";
	cin >> n;
	i = n * n * n;
	j = i * i;
	cout << "Данная число в 15-ой степени= " << j * j * i << endl;
}
