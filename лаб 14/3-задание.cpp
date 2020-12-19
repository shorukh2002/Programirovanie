#include<iostream>
using namespace std;
int sum(int x) { return x * (x + 1) / 2; }
int main() {
	setlocale(LC_ALL, "ru");
	int n, k = 2;
	cout << "  ¬ведите n: "; cin >> n;
	while (sum(k) < n) { k++; }
	cout << "k= " << k << endl;
	cout << "sum= " << sum(k) << endl;
}
