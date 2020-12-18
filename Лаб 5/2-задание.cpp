#include<iostream>
using namespace std;
int  main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "¬ведите точку а: " << endl; cin >> a;
	cout << "¬ведите точку b: " << endl; cin >> b;
	cout << "¬ведите точку с: " << endl; cin >> c;
	int ac = c - a, bc = c - a, sum = ac + bc;

	cout << "—умма отрезок=  " << sum << endl;


}
