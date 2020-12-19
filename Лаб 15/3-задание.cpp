#include <iostream>
#include <cmath>
using namespace std;
const double PI_CONST = 3.14;
double calc_rings_area(double r1, double r2);
int main()
{
    setlocale(LC_ALL, "ru");
    double r1;
    double r2;
    const int HOW_MANY_TIMES = 3;
    for (int i = 0; i < HOW_MANY_TIMES; ++i) {
        double result;
        cout << "Введите 2 число для r1 и r2:\n";
        do {
            std::cin >> r1 >> r2;
            result = calc_rings_area(r1, r2);
            if (result)
                std::cout << "\nРезультат равно : " << result;
            else
                std::cout << "\nпервая число должно  быт меньше"
                "\nПовторите:\n";
        } while (!result);
        std::cout << "\n";
    }
    setlocale(LC_ALL, "ru");
    return 0;
}
double calc_rings_area(double r1, double r2) {
    double area = 0;
    if (r1 < r2)
        area = (PI_CONST * pow(r2, 2)) - (PI_CONST * pow(r1, 2));
    return area;
}
