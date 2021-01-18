#include <iostream>
#include <float.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int n, m, index;
    double min, product;
    cout << " Введите размер матрицы \n";
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    double** a = new double* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new double[m];
    }
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { cin >> a[i][j]; }
    }
    min = DBL_MAX;
    for (int j = 0; j < m; j++) {
        product = 1.0;
        for (int i = 0; i < n; i++) { product *= a[i][j]; }
        if (product < min) { min = product; index = j; }
    }
    cout << " Номер столбца: " << ++index << "\n";
    cout << " Минималний произведение: " << min << "\n";
    for (int i = 0; i < n; i++) { delete[] a[i]; }
    delete[] a;
    cin.get();
    return 0;
}
