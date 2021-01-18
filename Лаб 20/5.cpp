#include <iostream>
#include <cmath>

// структура, описывающая точку
struct point {
    int x;
    int y;
};

// перегруженный оператор вывода точки
// если перегрузку не проходили, то говорите, что нашли в интернете
std::ostream& operator << (std::ostream& s, const point& p)
{
    s << '(' << p.x << "; " << p.y << ')';
    return s;
}

// функция печати массива точек
void print(point* p, int size) {
    for (int i = 0; i < size; i++) { // перебираем циклом массив точек
        std::cout << p[i] << ' ';    // выводим i-ю точку через пробел
    }
    std::cout << std::endl;          // выводим конец строки
}

// вычисление расстояния между двумя точками по теореме Пифагора
double length(const point& A, const point& B) {
    return hypot(A.x - B.x, A.y - B.y);
}

// вычисление периметра треугольника
double perimeter(const point& A, const point& B, const point& C) {
    return length(A, B) + length(B, C) + length(A, C);
}

int main()
{
    const int n = 5;
    point a[n] = { {3,1},{2,2},{4,5},{2,0},{7,8} };
    print(a, n);
    double maxPerimeter = 0;  // максимальный периметр
    double tmpPerimeter = 0;  // текущий периметр, чтобы два раза функцию не дёргать
    int A, B, C;              // номера найденых точек

    // в цикле перебираем тройки точек с индексами i > j > k

    for (int i = 0; i < n - 2; i++) {                       // 0 <= i < n-2
        for (int j = i + 1; j < n - 1; j++) {               // 1 <= j < n-1
            for (int k = j + 1; k < n; k++) {             // 2 <= k < n
                tmpPerimeter = perimeter(a[i], a[j], a[k]); // вычисляем периметр
                if (tmpPerimeter > maxPerimeter) {        // если периметр больше максимального
                    maxPerimeter = tmpPerimeter;          // запоминаем текущий максимум
                    A = i;                                // |
                    B = j;                                // | <= запоминаем номера точек
                    C = k;                                // |
                }
            }
        }
    }

    // выводим номера точек
    std::cout << "Triangle with vertices at points " << A << ", " << B << " and " << C <<
        " has the greatest perimeter.";
}
