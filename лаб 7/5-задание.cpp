# include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, b, x;
	cout << "������� ������������ A: ";
	cin >> a;
	cout << "������� ������������ B: ";
	cin >> b;
	x = -(b / a);
	cout << "x= " << x << endl;
}

