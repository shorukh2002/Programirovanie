#include<iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "����� �������������� (�)= "; cin >> a;
    cout << "������ �������������� (b)= "; cin >> b;
    cout << "����� �������� (c)= "; cin >> c;
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
    cout << "���������� ��������� �� ��������������= " << count << endl;
}

