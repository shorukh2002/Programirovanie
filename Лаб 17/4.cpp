#include <iostream>

int main(void) {
    const int N = 8;
    int arr[N] = { 2, 4, 9, 5, 8, 10, 7, 70 };

    int tmp = arr[1];
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            tmp = arr[i];
    }
    std::cout << tmp << std::endl;
    return 0;
}
