#include <iostream>
#include <fstream>
std::ifstream infile("ex_log.txt");

int main() {
    std::cout << "Hello, World!" << std::endl;
    for( std::string line; getline(infile, line ); )
    {
        std::cout << line << std::endl;
    }
    return 0;
}