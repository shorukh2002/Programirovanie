#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "ввести трёхзначное  число "; cin >> a;
    cout << " Перестановка числа= " << a / 100 + (a % 100) * 10 << endl;
}
