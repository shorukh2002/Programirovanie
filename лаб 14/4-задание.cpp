#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    double proc;
    cout << "������� ������� �� ������  >0-25> :";
    cin >> proc;
    if (proc < 0 || proc>25) {
        std::cout << "���������� ������� :)";
        system("pause");
        return 1;
    }
    double deposit = 1000;
    int count = 0;
    while (deposit < 1100) { deposit += deposit / proc; count++; }
    cout << " ����� " << count << " ������ " << " ����� ������ ��������: " << deposit << " ���.";
    cout << endl << endl;
    system("pause");
    return 0;
}
