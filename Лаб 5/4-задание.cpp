#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    float x1, x2, y1, y2;
    float S, P;

    cout << "���������� �1 � �1: "; cin >> x1 >> y1;
    cout << "���������� �2 � �2: "; cin >> x2 >> y2;
    int a = (x2 - x1);
    int b = (y2 - y1);
    P = 2 * (a + b);
    S = a * b;
    cout << "�������� = " << P << endl
        << "������� = " << S << endl << endl;
}

