#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x = 10, a = 100, Ax, Ay, y;
	Ax = a * x;
	cout << "10 �� ������ �����: " << Ax << "������" << endl;
	cout << "1 �� ������ �����: " << a * 1 << endl;
	cout << "������� ������� �� ������ ������?  "; cin >> y;
	Ay = a * y;
	cout << y << " �� ������  ����� " << Ay << " ������ " << endl;
}
