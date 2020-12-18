#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n, min;
	cout << "Введите количество прошедших секнуд ";
	cin >> n;
	min = n % 60;
	cout << "С момента последней минуты прошло " << min << " секунд" << endl;
}
