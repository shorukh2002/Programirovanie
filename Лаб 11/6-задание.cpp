#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  n;
	cout << "������� ����� �� 1 �� 999: " << endl; cin >> n;
	if (n % 2 == 0 && n > 100)
	{
		cout << " ����� ������  ���������� " << endl;
	}
	if (n % 2 != 0 && n > 100)
	{
		cout << " ����� ��������  ����������" << endl;
	}
	if (n % 2 == 0 && n < 100 && n>9)
	{
		cout << " ����� ������  �����������" << endl;
	}
	if (n % 2 != 0 && n < 100 && n>9)
	{
		cout << " ����� ��������  �����������" << endl;
	}
	if (n % 2 == 0 && n < 10)
	{
		cout << " ����� ������  �����������" << endl;
	}
	if (n % 2 != 0 && n < 10)
	{
		cout << " ����� ��������  �����������" << endl;
	}
}
