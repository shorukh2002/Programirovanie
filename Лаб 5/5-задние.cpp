#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    float x1, x2, x3, y1, y2, y3;
    float S, P;
    float st1, st2, st3, p;
    cout << "���������� �1 � �1: "; cin >> x1 >> y1;
    cout << "���������� �2 � �2: "; cin >> x2 >> y2;
    cout << "���������� �3 � �3: "; cin >> x3 >> y3;
    st1 = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    st2 = sqrt(((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3)));
    st3 = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
    P = st1 + st2 + st3;
    p = P / 2;
    cout << endl;
    S = sqrt(p * (p - st1) * (p - st2) * (p - st3));
    cout << "�������� = " << P << endl
        << "������� = " << S << endl << endl;
}


