#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int v1, v2;
	cout << "�������� 1 ������= "; cin >> v1;
	cout << "�������� 2 ������= "; cin >> v2;
	int t;
	cout << "������� ����� �������� ����� ���� �� ����� "; cin >> t;
	int S = (v1 + v2) * t;
	cout << " ���������� ����� ����� " << t << " �����=  " << S << endl;
}
