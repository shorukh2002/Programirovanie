#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double proizvedenie = 1.0;
    unsigned int n;
    cout << "Введите число: ";
    cin >> n;
    for (double i = 1, j = 1.1; i <= n; i++, j += 0.1)
        proizvedenie = proizvedenie * j;
    cout << "Произведение=  " << proizvedenie << endl;
    return 0;
}
