#include <iostream>
#include <cstring>

void insert(char* buffer, unsigned pos, char c)
{
    for (unsigned i = strlen(buffer) + 1; i > pos; --i)
        buffer[i] = buffer[i - 1];
    buffer[pos] = c;
}

int main()
{
    std::cout << "input line: ";

    const int BUF_SIZE = 256;
    char* buffer = new char[BUF_SIZE];

    std::cin.getline(buffer, BUF_SIZE);

    std::cout << "input character: ";
    char c;
    std::cin >> c;

    for (unsigned i = 0; i < strlen(buffer); ++i)
        if (c == buffer[i])
        {
            insert(buffer, i, c);
            ++i;
        }

    std::cout << buffer << std::endl;

    delete[] buffer;
    return 0;
}
