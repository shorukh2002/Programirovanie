#include<iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int x, y, i, j, d;
	cout << "������� �������� ��� x: ";
	cin >> x;
	i = x - 3;
	j = i * i * i * i * i * i;
	d = i * i * i;
	y = 4 * j - 7 * d + 2;
	cout << "��������� �������= " << y << endl;
}


