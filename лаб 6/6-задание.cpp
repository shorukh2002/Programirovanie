#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n, i, j, d;
	cout << "������� �����: ";
	cin >> n;
	i = n * n;
	j = i * i;
	d = j * j;
	cout << "������ ����� � 8-�� �������= " << d << endl;
}
