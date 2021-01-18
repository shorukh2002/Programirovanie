#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;
#include <windows.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    char str[] = "ауеыоэ€ию”≈џјЁя»ё";
    char s[100];
    cout << "введите русский текст:" << endl;
    cin.getline(s, 100);
    OemToCharA(s, s); // ≈сли не отключать уникод
    //OemToCharW(s,s); // ≈сли отключить уникод 
    int kol = 0;
    for (int j = 0; s[j] != 0; j++)
        for (int i = 0; str[i] != 0; i++)
            if (s[j] == str[i])
            {
                kol++;
                break;
            }
    cout << "¬сего гласных букв " << kol << endl;
    system("pause");
    return 0;
}
