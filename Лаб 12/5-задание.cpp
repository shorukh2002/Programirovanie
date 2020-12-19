#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    string colors[] = { "зеленый", "красный", "жёлтый", "белый", "чёрный" };
    string animals[] = { "крисы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяни","курицы", "собаки", "свиньи" };

    int year, a, b, c;
    cout << " Введите год ";
    cin >> year;

    a = (year - 4) % 60;
    b = a / 12;
    c = a % 12;
    if (year == 0)
        cout << "год чёрный обезьяный " << endl;
    else
        cout << "Год  " << colors[b] << " " << animals[c];
    getchar();
    getchar();
    return 0;
}

