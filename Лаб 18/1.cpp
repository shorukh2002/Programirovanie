#include<iostream>
using namespace std;
int main() {
	const int N = 7;
	int a[N] = { 2,3,6,2,3,2,7 };
	int b[N] = { 4,5,7,5,3,2,8 };
	for (int i = 0; i < N; i++) { cout << a[i] << " "; }cout << endl;
	for (int j = 0; j < N; j++) { cout << b[j] << " "; }cout << endl;
	cout << " resultat posle preobrozovanie " << endl;
	for (int i = 0; i < N; i++)
	{
		int t = a[i];
		a[i] = b[i];
		b[i] = t;
		cout << a[i] << " ";
	}cout << endl;
	for (int i = 0; i < N; i++)
	{
		int d = a[i];
		a[i] = b[i];
		b[i] = a[i];
		cout << b[i] << " ";
	}
}
