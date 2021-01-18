#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    const int m = 5, n = 5;
    int sum;
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
    int min = a[0][0];
    for (int l = 0; l < 2 * n - 1; l++) {
        sum = 0;
        if (l <= n) {
            for (int i = 0; i < l; i++) {
                for (int j = 0; j < l; j++) {
                    if (j = l - i + 1) sum = sum + a[i][j];
                    if (sum < min) min = sum;
                }
            }
        }
        else if (l > n) {
            for (int i = l - n + 1; i < n; i++) {
                for (int j = l - n + 1; j < n; j++) {
                    if (j = l - i + 1) sum = sum + a[i][j];
                    if (sum < min) min = sum;
                }
            }
        }
        cout << "Sum of diagonal: " << l << " =" << sum << endl;
    }
    system("pause");
    return 0;
}
