#include <iostream>
int get_fib(int n);
int get_number_Fibonacci_numbers(int numb);

int main() {
    std::cout << "Enter number: ";
    int number;
    std::cin >> number;
    std::cout << "Serial number: " << get_number_Fibonacci_numbers(number);
    return 0;
}
int get_fib(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    return get_fib(n - 1) + get_fib(n - 2);
};
int get_number_Fibonacci_numbers(int numb) {
    for (int i = 1; ; ++i)
        if (get_fib(i) == numb)
            return i;
}
