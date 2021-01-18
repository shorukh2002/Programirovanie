#include<iomanip>
#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int H, W, max_index, min_index;
    std::cout << "¬ведите H: "; std::cin >> H;
    std::cout << "¬ведите W: "; std::cin >> W;
    std::cout << "\n";
    double max, min;
    double** M = new double* [H];
    for (int i = 0; i < H; i++)
        M[i] = new double[W];

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            M[i][j] = (double)(rand() % 5);
            std::cout << std::setw(7) << M[i][j];
        }
        std::cout << "\n\n";
    }

    max = min = M[0][0];

#include <iostream>
    using namespace std;

    int main()
    {
        setlocale(LC_ALL, "Russian");
        int n = 0, c = 0;
        cout << "¬ведите количество строк и столбцов: ";
        cin >> n >> c;
        int** a = new int* [n];
        for (int i = 0; i < n; i++)
        {
            a[i] = new int[c];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < c; j++)
            {
                a[i][j] = rand() % 25;
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        int k = (n + 1) / 2;
        int l = (c + 1) / 2;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < c / 2; j++)
            {
                int temp = a[i][j];
                a[i][j] = a[i + k][j + l];
                a[i + k][j + l] = temp;
                cout << temp << " ";
            }
        }
    }
