#include <iostream>
using namespace std;
int main() {
	int arr[] = { 2,3,4,5,6,7,78 };
	int n = 7;
	for (int i = 0; i < n; i++) { cout << arr[i] << " "; }cout << endl;
	for (int j = 0; j < n - 6; j++) { cout << arr[j] << " "; }
	for (int d = 1; d < n - 1; d++) { arr[d] = arr[d] * 0; cout << arr[d] << " "; }
	for (int c = 5; c < n; c++) { cout << arr[c] << " "; }
}

