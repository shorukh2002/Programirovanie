#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;
int main() {
    int n;
    cin >> n;
    int min = INT_MAX;
    vector<int>A(n); // Массив из n символов
    for (int i = 0; i < A.size(); i++) {
        A[i] = rand() % n; // Рандомизация}
        cout << " Massiv: " << endl;
        for (int i = 0; i < A.size(); i++) { cout << A[i] << ' '; }
        cout << endl;
        for (int i = 0; i < A.size(); i++) {
            if (i % 2) {
                if (A[i] < min)
                    min = A[i]; // Находим минимальный элемент
            }
        }
        cout << "Min = " << min << endl;
    }
}
