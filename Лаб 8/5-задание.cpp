#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "������ ����������  ����� "; cin >> a;
    cout << " ������������ �����= " << a / 100 + (a % 100) * 10 << endl;
}
