#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, n = 0;
    do
    {
        cout << "������� � � � "; cin >> a >> b;
    } while (a <= b);
    do
    {
        a -= b;
        n++;
    } while (a > 0 && a >= b);

    cout << " ���������� �������� �= " << n << endl;
}
