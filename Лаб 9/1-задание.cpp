#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n, min;
	cout << "������� ���������� ��������� ������ ";
	cin >> n;
	min = n % 60;
	cout << "� ������� ��������� ������ ������ " << min << " ������" << endl;
}
