#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cout << "������� ��� "; cin >> n;
	int sto = n / 100 + 1;
	cout << "������ ��� ����� ��������" << sto << " ��" << endl;
}


