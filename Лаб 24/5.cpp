#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    string s = "D:\\Practis\\Proverka\\File.txt";
    int count = 0;
    for (int i = s.length() - 1; i > -1; i--)
    {
        if (s[i] != '.') count++;
        else break;
    }
    s.erase(s.length() - count - 1, count + 1);
    count = 0;
    for (int i = s.length() - 1; i > -1; i--)
    {
        if (s[i] != '\\') count++;
        else break;
    }
    s.erase(0, s.length() - count);
    cout << s << endl;

    return 0;
}

