#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "������� [a] = ";
    cin >> a;
    cout << "������� [b] = ";
    cin >> b;
    cout << "������� [c] = ";
    cin >> c;
    if (c * c == a * a + b * b)
        cout << "����������� � �������� ������� �����������";
    cout << endl;
}