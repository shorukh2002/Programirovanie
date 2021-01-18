#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    for (int i = 0; i <= 1000; i += 25)
        if (i % 3 != 0) count++;

    cout << count << "\n";
    system("pause");
    return 0;
}
