#include <iostream>
using namespace std;
int main()
{
    const int m = 4, n = 5;
    int mat[m][n] = { {3, 0, 4, 9, 1},
                     {6, 7, 8, 1, 2},
                     {2, 5, 7, 0, 5},
                     {6, 7, 1, 0, 10} };
    cout << "Matrix before:" << '\n';
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << '\n';
    }

    int min = 0, max = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][min] > mat[i][j]) {
                min = j;
            }
            if (mat[i][max] < mat[i][j])
            {
                max = j;
            }
        }
        int temp = mat[i][min];
        mat[i][min] = mat[i][max];
        mat[i][max] = temp;
    }

    cout << "Matrix after:" << '\n';
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << '\n';
    }

    return 0;
}
