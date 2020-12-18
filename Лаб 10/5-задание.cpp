#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n, a, b, c, d;
    cout << "¬ведите четирЄхзначное  число: ";  cin >> n;
    a = n / 1000;
    b = n / 100 - a * 10;
    c = n / 10 - b * 10 - a * 100;
    d = n - b * 100 - c * 10 - a * 1000;
    if ((a < b) && (b == c) && (c > d)) { cout << "высказивание истино " << endl; }
    else { cout << "высказивание не истино " << endl; }
}
