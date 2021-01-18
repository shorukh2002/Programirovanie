#include <iostream>

using namespace std;

int main()
{
    char str[] = "aaaaaaaa nnnnn fffffff yyyyyyy        jjj j";
    char str1[255];
    int i, z = 0;
    for (i = 0; i < strlen(str); i++)
        if (str[i] != ' ' && str[i + 1] != ' ') {
            str1[z] = str[i];
            str1[z + 1] = ' ';
            z += 2;
        }
    str1[z - 1] = NULL;
    cout << str1;
    return 0;
}
