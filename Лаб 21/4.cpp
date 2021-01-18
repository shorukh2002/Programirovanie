#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a, b, sum = 0;
    cout << "������� a: "; cin >> a;
    cout << "������� b: "; cin >> b;

    int* matr = new int[a * b]; // �������. ����������

    srand(time(NULL));
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matr[i * b + j] = rand() % 101;
            cout << matr[i * b + j] << "\t";
            sum += matr[i * b + j];
        }
        cout << endl;
    }
    double average = sum / (double)(a * b);
    cout << endl << " ������� ��������: " << average << endl;

    int cnt;
    for (int i = 0; i < a; i++) {
        cnt = 0;
        for (int j = 0; j < b; j++) {
            if (matr[i * b + j] > average) cnt++;
        }
        cout << "������ " << i + 1 << ": " << cnt << endl;
    }
    delete[] matr;
    return 0;
}
