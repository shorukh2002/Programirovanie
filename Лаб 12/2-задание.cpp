#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  N;
	cout << " ������� ������� ������������ �� (0,1,-1) "; cin >> N;
	switch (N) {
	case 0:cout << " ����� ����������� �������� �� ����� " << endl; break;
	case 1:cout << " ����� ���������� ������ �� ����� " << endl; break;
	case -1:cout << " ����� ���������� ������� �� �� " << endl; break;
	default:cout << " ������ ����� �� �������� ������� "; break;
	}
}
