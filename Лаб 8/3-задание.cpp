#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int a, b, sum = 0;
    cout << " �= "; cin >> a;
    cout << " �= "; cin >> b;
    while (a - sum >= b)
        sum += b;
    cout << " ����� ��������� �����=  " << a - sum << endl;

}
