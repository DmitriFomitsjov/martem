#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>

int main() {
    int count = 0;
    std::string first;
    std::string second;
    bool date = true;
    bool time = true;
    std::cout << "Hello, World!" << std::endl;
    std::ifstream file("D:\\Kool\\Work\\Martem\\work del\\ex_logV2.txt");
    std::string str;
    while (std::getline(file, str))
    {
        time = true;
        date = true;
        // time check
        count = 0;
        std::vector<std::string> result;
        std::istringstream iss(str);
        for(std::string s; iss >> s; ){
            result.push_back(s);
            if (count == 1) {
                first = s;
            }
            count++;
        }

        // first and second make string and compare

        if (first != second) {
            time = false;
        }
        std::cout << first << std::endl;
        std::cout << second << std::endl;

        // date check
        count = 0;
        for(std::string s; iss >> s; ){
            result.push_back(s);
            if (count == 0) {
                first = s;
            }
            count++;
        }
        std::cout << first << std::endl;
        std::cout << second << std::endl;

        // first and second make string and compare


        if (first != second) {
            date = false;
        }
        if (date and time) {
            std::cout << str << std::endl;
        }

    }

    return 0;
}