## include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double a1, b1, c1;
	double a2, b2, c2;
	double x, y, D;
	cout << "������� ������������ 1-�� ���������: ";
	cin >> a1 >> b1 >> c1;
	cout << "������� ������������ 2-�� ���������: ";
	cin >> a2 >> b2 >> c2;
	D = a1 * b2 - a2 * b1;
	x = (c1 * b2 - c2 * b1) / D;
	y = (a1 * c2 - a2 * c1) / D;
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
	system("pause");
	return 0;
}

