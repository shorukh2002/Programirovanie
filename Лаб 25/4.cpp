#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100] = { 0 };
    char res[100] = { 0 };

    cin.getline(str, 100);

    int spaceCount = 0;
    int resIndex = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            ++spaceCount;
            if (spaceCount == 1)
            {
                res[resIndex++] = str[i];
            }
        }
        else
        {
            spaceCount = 0;
            res[resIndex++] = str[i];
        }

        cout << res << endl;
        system("pause");
        return 0;
    }
