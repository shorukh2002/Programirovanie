#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  n;
	cout << "Введите число от 1 до 999: " << endl; cin >> n;
	if (n % 2 == 0 && n > 100)
	{
		cout << " Число чётное  трёхзначное " << endl;
	}
	if (n % 2 != 0 && n > 100)
	{
		cout << " Число нечётное  трёхзначное" << endl;
	}
	if (n % 2 == 0 && n < 100 && n>9)
	{
		cout << " Число чётное  двухзначное" << endl;
	}
	if (n % 2 != 0 && n < 100 && n>9)
	{
		cout << " Число нечётное  двухзначное" << endl;
	}
	if (n % 2 == 0 && n < 10)
	{
		cout << " Число чётное  однозначное" << endl;
	}
	if (n % 2 != 0 && n < 10)
	{
		cout << " Число нечётное  однозначное" << endl;
	}
}
