// https://open.kattis.com/problems/basketballoneonone
#include <iostream>

int main() {
    std::string str;
    std::cin >> str;

    std::cout << str[str.length() - 2];
    return 0;
}

