#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double a;
	int n;
	cout << "������� ����� a= ";
	cin >> a;
	cout << "B�����e ������  n= ";
	cin >> n;
	double s = 1, si = 1;
	for (int i = 0; i < n; ++i)
		s + (si = -si * a);
	cout << "��������: " << s << endl;
	return 0;
}
