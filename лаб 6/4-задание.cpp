#include<iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "ru");
	int x, y, t, k;
	cout << "¬ведите х: " << endl; cin >> x;
	t = x * x * x * x * x * x * x;
	k = x * x;
	y = 3 * t - 6 * k - 7;


	cout << "y= " << y << endl;


}


