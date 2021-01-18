#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
int main() {
    std::string filename;
    std::cout << "Enter file name: ";
    std::cin >> filename;
    std::ifstream ifs(filename);
    if (!ifs) {
        perror(filename.c_str());
        exit(1);
    }
    std::string str;
    getline(ifs, str, (char)EOF);
    ifs.close();
    str.erase(str.begin() + str.find(" "), str.end());
    std::ofstream ofs(filename);
    if (!ofs) {
        perror(filename.c_str());
        exit(1);
    }
    ofs << str;
    std::cout << "Succesful!\n";
    return 0;
}



