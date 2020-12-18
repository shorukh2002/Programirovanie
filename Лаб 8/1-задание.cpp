#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int file;
    cout << "¬ведите размер файла в байтах: ";
    cin >> file; cout << endl << endl;
    float kb = file / 1024;
    cout << file << " = " << kb << " kb" << endl;
}
