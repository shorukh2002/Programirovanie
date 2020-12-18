#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n, a, b, c;
    cout << "Введите трёхзначное  число: ";  cin >> n;
    a = n / 100;
    b = n / 10 - a * 10;
    c = n - b * 10 - a * 100;
    if ((a < b) && (b < c)) { cout << "Последовательность возрастаеть  " << endl; }
    else
        if ((a > b) && (b > c)) { cout << "Последовательность убываеть " << endl; }
        else { cout << "высказивание не истино " << endl; }
}
