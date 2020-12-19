#include<iostream>
using namespace std;
int get_fib(int n);
int get_number_Fibonacci_numbers(int numb);
void PowerA3(double A, double& B) { B = A * A * A; }
int main(void) {
    setlocale(LC_ALL, "ru");
    double mas[5] = { 4,2,6,8,3 };
    for (int i = 0; i < 5; i++) {
        PowerA3(mas[i], mas[i]);
        cout << "Третьи степен число= " << mas[i] << " " << endl;
    }
    system("pause");
    return 0;
}
