#include<iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int a = 10, b = 15, c = 20;
	int i = a, j = b, d = c;
	j = i;
	a = d;
	d = b;
	cout << "�������� �������� �: " << � << endl;
	cout << "�������� �������� b: " << j << endl;
	cout << "�������� �������� �: " << d << endl;

}
