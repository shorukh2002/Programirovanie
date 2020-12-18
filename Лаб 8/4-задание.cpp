#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "ввести двухзначний число "; cin >> a;
    cout << " Перестановка числа= " << a / 10 + (a % 10) * 10 << endl;
}
