#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
    srand(time(NULL));
    int size = 10, num(0);
    vector<int> coll1(size), coll2(size);
    for_each(coll1.begin(), coll1.end(), [](int& value) {value = rand() % 21; });
    cout << "First array: ";
    copy(coll1.begin(), coll1.end(), ostream_iterator<int>(cout, " "));
    for_each(coll2.begin(), coll2.end(), [&num, &coll1](int& value) {++num;
    value = accumulate(coll1.begin(), coll1.begin() + num, 0) / num; });
    cout << "\nSecond array: ";
    copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
    cout << "\n\n";
    return 0;
}
