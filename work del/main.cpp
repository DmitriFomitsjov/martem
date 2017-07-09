#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::ifstream file("D:\\Kool\\Work\\Martem\\work del\\ex_logV2.txt");
    std::string str;
    while (std::getline(file, str))
    {
        std::cout << str << std::endl;
    }

    return 0;
}