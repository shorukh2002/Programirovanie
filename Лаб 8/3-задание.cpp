#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int a, b, sum = 0;
    cout << " А= "; cin >> a;
    cout << " В= "; cin >> b;
    while (a - sum >= b)
        sum += b;
    cout << " Длина незанятой части=  " << a - sum << endl;

}
