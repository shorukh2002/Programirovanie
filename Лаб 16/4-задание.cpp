#include <iostream>
using namespace std;
void func(int A[], int N);
int main() {
    int const n = 10;
    int a[n] = { 1,2,3,4,5,6,7,8,9 };
    func(a, n);
    return 0;
}
void func(int A[], int N) {
    for (int i = 0; i < N / 2; i++)
        cout << A[N - 2 - i] << ' ' << A[i] << ' ';
    if (N % 2 != 0)
        cout << A[N / 2] << endl;
    system("pause");
}


