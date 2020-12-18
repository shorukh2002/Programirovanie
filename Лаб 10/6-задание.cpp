#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Введите [a] = ";
    cin >> a;
    cout << "Введите [b] = ";
    cin >> b;
    cout << "Введите [c] = ";
    cin >> c;
    if (c * c == a * a + b * b) { cout << "Треугольник прямоугольный " << endl; }
    else if (a * a == c * c + b * b) { cout << "Треугольник прямоугольный " << endl; }
    else if (b * b == a * a + c * c) { cout << "Треугольник прямоугольный " << endl; }
    else
        cout << "Треугольник не является прямоугольным" << endl;
}
