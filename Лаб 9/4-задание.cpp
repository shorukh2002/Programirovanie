#include<iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Длина прямоугольника (а)= "; cin >> a;
    cout << "Ширина прямоугольника (b)= "; cin >> b;
    cout << "Длина квадрата (c)= "; cin >> c;
    int k = 0, n = 0;
    while (a >= c) {
        a -= c;
        k++;
    }
    while (b >= c) {
        b -= c;
        n++;
    }
    int count = 0;
    for (int i = 0; i < k; i++)
        count += n;
    cout << "Количество квадратов на прямоугольнике= " << count << endl;
}

