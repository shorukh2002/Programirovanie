#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  x, y;
	cout << "������� ����� ��� �, �: " << endl; cin >> x >> y;
	if (x > 0 && y > 0) { cout << " � ������" << endl; }
	else if (x > 0 && y < 0) { cout << " � ������ " << endl; }
	else if (x < 0 && y > 0) { cout << " � ������ " << endl; }
	else { cout << " � �������� " << endl; }
}


