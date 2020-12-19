#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	float price;
	cout << "¬ведите цену" << endl;
	cin >> price;

	for (int i = 1; i <= 10; i++) {
		cout << i / 10.0 << ": " << i * price / 10 << endl;
	}
	return 0;
}
