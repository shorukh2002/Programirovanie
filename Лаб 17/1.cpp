#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int N, K, L;
    cout << "Vvedite N: "; cin >> N;
    cout << "Vvedite K: "; cin >> K;
    cout << "Vvedite L: "; cin >> L;
    int* mas = new int[N];
    for (int i = 0; i < N; i++) { mas[i] = 1 + rand() % 10; }
    cout << "Ishodnii massiv: " << endl;
    for (int i = 0; i < N; i++) { cout << "[" << i + 1 << "]-" << mas[i] << " "; }
    double sum = 0;
    int count = 0;
    for (int i = K - 1; i <= L - 1; i++) { sum = sum + mas[i]; count++; }
    cout << "\n" << "Srednee elementov ot " << K << " do " << L << " = " << sum / count << endl;
    int M = K + N - L - 1;
    int* array = new int[M];
    int j = 0;
    for (int i = 0; i < K - 1; i++) { array[i] = mas[i]; j++; }
    for (int i = L; i < N; i++) { array[j] = mas[i]; j++; }
    cout << "Ostavshiesja elementi dinamicheski razmeshennie v pamjati: " << endl;
    for (int i = 0; i < M; i++) { cout << "[" << i + 1 << "]-" << array[i] << " "; }
    return 0;
}
