#include <iostream>
using namespace std;
#define N 8
int a[N] = { 0, 1, 2, 3, 4, 2, 6, 6 };
int main() {
    for (int i = 0, t = 0; t != 1; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) {
                if (a[i] == a[j]) {
                    cout << i << " " << j << endl;
                    t = 1;
                }
            }
        }
    }
}
