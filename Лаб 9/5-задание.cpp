#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите год "; cin >> n;
	int sto = n / 100 + 1;
	cout << "Данний год равно столетии" << sto << " го" << endl;
}


