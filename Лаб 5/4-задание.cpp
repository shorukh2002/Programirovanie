#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    float x1, x2, y1, y2;
    float S, P;

    cout << "Координата х1 и у1: "; cin >> x1 >> y1;
    cout << "Координата х2 и у2: "; cin >> x2 >> y2;
    int a = (x2 - x1);
    int b = (y2 - y1);
    P = 2 * (a + b);
    S = a * b;
    cout << "Периметр = " << P << endl
        << "Площадь = " << S << endl << endl;
}

