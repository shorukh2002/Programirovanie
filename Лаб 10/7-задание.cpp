#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "¬ведите [a] = ";
    cin >> a;
    cout << "¬ведите [b] = ";
    cin >> b;
    cout << "¬ведите [c] = ";
    cin >> c;
    if (c * c == a * a + b * b)
        cout << "“реугольник с заданами числами существуеть";
    cout << endl;
}