#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, i, j;
	cout << "������� �����: ";
	cin >> n;
	i = n * n * n;
	j = i * i;
	cout << "������ ����� � 15-�� �������= " << j * j * i << endl;
}
