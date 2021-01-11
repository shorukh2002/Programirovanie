
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int N, i;
    static int arr[100];
    cout << "Введите размерность массива: \n";
    cin >> N;
    if (N < 3) {
        cout << "Массив должен содержать в себе не менее 3 элементов!\n";
        while (N < 3) {
            cout << "Введите размер массива: \n"; cin >> N;
        }
    }
    cout << "Введите элементы массива: \n";
    for (int q = 0; q < N; q++) { cin >> arr[q]; }
    for (int a = 0; a + 2 < N; a++) {
        if (arr[a + 1] - arr[a] == arr[a + 2] - arr[a + 1]) {
            while (arr[a + 1] - arr[a] == arr[a + 2] - arr[a + 1] && a + 2 < N) {
                a++;
                if (a >= N) { cout << "Прогрессия обнаружена!\n"; }
                else { cout << "Прогрессия не обнаружена!\n"; break; }
            }
        }
    }
    system("pause >> null");
    return main();
}
