#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
struct PrintNums : std::unary_function<int, bool> {
    PrintNums(bool act)
        : _act(act) {
        idx = 0;
    }
    bool operator() (int) {
        ++idx;
        return _act == true ? idx % 2 == 0 : idx % 2 != 0;
    }
    static int idx;
    bool _act;
};
int PrintNums::idx;
int main() {
    const size_t N = 10;
    int A[N] = { 1, 2, 3, 4, 5, 6 , 7, 8, 9, 10 };
    std::copy_if(A, A + N, std::ostream_iterator<int>(std::cout, " "), PrintNums(true));
    std::cout << std::endl;
    std::copy_if(A, A + N, std::ostream_iterator<int>(std::cout, " "), PrintNums(false));
    std::cout << std::endl;
}


