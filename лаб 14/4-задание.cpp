#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    double proc;
    cout << "Введите процент по вкладу  >0-25> :";
    cin >> proc;
    if (proc < 0 || proc>25) {
        std::cout << "Нереальный процент :)";
        system("pause");
        return 1;
    }
    double deposit = 1000;
    int count = 0;
    while (deposit < 1100) { deposit += deposit / proc; count++; }
    cout << " Через " << count << " месяца " << " сумма вклада составит: " << deposit << " руб.";
    cout << endl << endl;
    system("pause");
    return 0;
}
