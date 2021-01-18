#include<iomanip>
#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int H, W, max_index, min_index;
    std::cout << "Введите H: "; std::cin >> H;
    std::cout << "Введите W: "; std::cin >> W;
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

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (max < M[i][j])
            {
                max = M[i][j];
                max_index = i;
            }

            if (min > M[i][j])
            {
                min = M[i][j];
                min_index = i;
            }
        }
    }

    if (max_index == min_index)
        std::cout << "\nMax and Min elements are on the same row\n\n";
    else
    {
        for (int i = 0; i < W; i++)
            std::swap(M[max_index][i], M[min_index][i]);

        std::cout << "\nПосле того как поменял\n\n";

        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
                std::cout << std::setw(7) << M[i][j];
            std::cout << "\n\n";
        }
    }

    for (int i = 0; i < H; i++)
        delete[] M[i];
    delete M;

    system("pause");
}
