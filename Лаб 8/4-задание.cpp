#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "������ ����������� ����� "; cin >> a;
    cout << " ������������ �����= " << a / 10 + (a % 10) * 10 << endl;
}
