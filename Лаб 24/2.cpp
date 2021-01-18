#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::istringstream ist(str);
    auto res = std::minmax_element(std::istream_iterator<std::string>(ist),
        std::istream_iterator<std::string>(),
        [](const std::string& s1, const std::string& s2)
        {
            return s1.length() < s2.length();
        });
    std::cout << "Min: " << *res.first << " with length "
        << res.first->length() << "\nMax: " << *res.second
        << " with length " << res.second->length() << std::endl;
}
