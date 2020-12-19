#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  N;
	cout << " Введите команди составляюший из (0,1,-1) "; cin >> N;
	switch (N) {
	case 0:cout << " Робот продолжаеть движение на север " << endl; break;
	case 1:cout << " Робот повернулся налево на запад " << endl; break;
	case -1:cout << " Робот повернулся направо на юг " << endl; break;
	default:cout << " Данная число не является команды "; break;
	}
}
