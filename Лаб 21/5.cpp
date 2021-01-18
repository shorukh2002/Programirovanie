#include <iostream>
#include <ctime>

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int m, f, cols = 0, i, j;
    std::cin >> m >> f;
    int** arr = new int* [m];
    for (int i = 0; i < m; ++i) {
        arr[i] = new int[f];
    }

    for (i = 0; i < m; ++i) {
        for (j = 0; j < f; ++j) {
            arr[i][j] = rand() % 5 + 1;
        }
    }

    for (j = 0; j < f; ++j) {
        int cntr = 0;
        for (i = 0; i < m; ++i) {
            if (arr[i][j] % 2 == 0) {
                break;
            }
            else
                cntr++;
        }
        if (cntr == m) {
            std::cout << "Столбец: " << i - 1 << std::endl;
            break;
        }
        else if (i - 1 == m) {
            std::cout << "0" << std::endl;
        }
    }


    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < f; ++j) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    system("pause");
    return 0
