#include<iostream>   //подключаем библиотеку
using namespace std;
int main() {
    int i, j, buf, arr[] = { 6, 4, 1, 5, 3, 12, 2 };//вводим переменные
    int n = sizeof(arr) / sizeof(int);
    for (i = 1; i < n; i++) {
        for (j = 1; j < n - i; j++) {  //вводим параметрический цикл
            if (arr[j] > arr[j + 1]) {
                buf = arr[j];  // Меняем значение 
                arr[j] = arr[j + 1];
                arr[j + 1] = buf;
            }
        }
    }
    for (i = 0; i < n; i++)printf("%d", arr[i]); cout << endl;
    for (int i = 0; i < n; i++) { int d = arr[0]; arr[0] = arr[n - 1]; arr[n - 1] = d; }
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}
