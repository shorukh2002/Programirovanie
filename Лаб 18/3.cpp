#include <stdio.h>
#include<iostream>
using namespace std;

int main(void) {

    int arr[] = { 1, 2, 3, 4, 7 }; // инициализируем массив

    int tmp = 0;

    for (int i = 0; i < 5; i++)// находим самый последний нечетный элемент, если он есть
    {
        if (arr[i] % 2 != 0) { tmp = arr[i]; }
    }

    for (int i = 0; i < 5; i++)//прибавляем к нечетным элементам, самый последний нечетный, если он есть
    {
        if (arr[i] % 2 != 0) { arr[i] = arr[i] + tmp; cout << arr[i] << " "; }
    }
    return 0;
}
