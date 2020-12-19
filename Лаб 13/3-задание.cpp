#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cout << "n="; cin >> n;
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += 2 * i - 1;
		cout << s << " " << endl;
	}
	return 0;
}
