#include<iostream>
using namespace std;
int Sign(double x) { return x < 0 ? -1 : ((x == 0) ? 0 : 1); }
int main() {
    setlocale(LC_ALL, "ru");
    double A, B;
    cout << "¬ведите  A, B:" << endl;
    cin >> A >> B;
    cout << Sign(A) + Sign(B) << endl;
    return 0;
}
