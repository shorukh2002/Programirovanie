#include <iostream>
#include <string>
#include <clocale>
using namespace std;
int main()
{
    std::setlocale(LC_ALL, "Rus");
    cout << "Таджикистан" << endl;
    std::string s = "Таджикистан";
    const int len = s.length();
    for (int i = 1; i < len; i += 2)
    {
        std::cout << s[i];
    }
    for (int i = len % 2 ? len - 1 : len - 2; i >= 0; i -= 2)
    {
        std::cout << s[i];
    }
    std::cout << endl;
    std::system("pause");
    return 0;
}
