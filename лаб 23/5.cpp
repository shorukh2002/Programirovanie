#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s1(" i go to go og ertygo !togou"), s2("go");
    int count = 0;

    for (string::size_type i = 0; i < s1.length(); i++)
        if (s1[i] == s2[0])
            if (s1.substr(i, s2.length()) == s2)
            {
                count++;
                i += s2.length() - 1;
            }

    cout << count;
    return 0;
}
