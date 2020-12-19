#include <iostream>
#include <cmath>
using namespace std;

int Quarter(double  x, double  y);

int Quarter(double  x, double  y)
{
    if (x > 0 && y > 0) return 1;
    if (x < 0 && y>0) return 2;
    if (x < 0 && y < 0) return 3;
    if (x > 0 && y < 0) return 4;
    return 0; // можно вернуть 0, если одна из координат нулевая
}

int main(void)
{
    setlocale(LC_ALL, "ru");
    double x, y;
    int q;
    printf("Введите  x ");
    scanf_s("%lf", &x);
    printf("Введите  y ");
    scanf_s("%lf", &y);
    q = Quarter(x, y);

    if (q == 1) printf("Первая");
    if (q == 2) printf("вторая");
    if (q == 3) printf("третья");
    if (q == 4) printf("Четвёртая");
    if (q == 0) printf("ноль");
    return 0;
}

