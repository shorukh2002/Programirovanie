#include <iostream>
using namespace std;

double Fact2(int n)
{
    double p = 1;
    int j;

    for (j = 1; j <= n; j++) {
        if ((n % 2 == 0) && (j % 2 == 0)) p = p * (double)j;
        if ((n % 2 != 0) && (j % 2 != 0)) p = p * (double)j;
    } return p;
}

void main()
{
    setlocale(LC_ALL, "ru");
    int n;

    cout << " ¬ведите число " << " ";
    cin >> n;
    cout << "Fact2(" << n << ")=" << Fact2(n) << endl;

}

