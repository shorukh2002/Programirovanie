
#include <iostream>
using namespace std;
int main() {
    int N;
    double D;
    cout << "Vedite chislo N: "; cin >> N;
    double* mas = new double[N];
    cout << "\nVedite znamenatel progressii: "; cin >> D;
    cout << "Vvedite pervii element massiva: ";
    cin >> mas[0];
    for (int i = 1; i < N; i++)
        mas[i] = mas[0] * pow(D, i);
    cout << "massiv: ";
    for (int i = 0; i < N; i++)
        cout << mas[i] << " ";
    cout << "\n\n";
    return 0;
}
