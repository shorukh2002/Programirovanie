#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float a, n = 3.14;
	cout << "������� �������� � � ��������: "; cin >> a;
	cout << "�������� ���� = " << a * 180 / 2 * n << endl;
}
