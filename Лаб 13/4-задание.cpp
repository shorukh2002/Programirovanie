#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int N, i;
    double A, b = 1, c = 1;
    cout << "Bведите степень N= "; cin >> N;
    cout << "Bведите A= ";
    cin >> A;
    for (i = 1; i <= N; i++);
    {c += pow(A, i); }
    cout << "Резуртат: " << c << endl;
}