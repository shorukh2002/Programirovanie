#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int i = 0, count = 0;
    string s;
    cout << "String:\n";
    getline(cin, s);
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z') count++;
        i++;
    }
    cout << "count=" << count << endl;
    system("pause");
    return 0;
}
