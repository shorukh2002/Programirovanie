#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    string colors[] = { "�������", "�������", "�����", "�����", "������" };
    string animals[] = { "�����", "������", "�����", "�����", "�������", "����", "������", "����", "��������","������", "������", "������" };

    int year, a, b, c;
    cout << " ������� ��� ";
    cin >> year;

    a = (year - 4) % 60;
    b = a / 12;
    c = a % 12;
    if (year == 0)
        cout << "��� ������ ��������� " << endl;
    else
        cout << "���  " << colors[b] << " " << animals[c];
    getchar();
    getchar();
    return 0;
}

