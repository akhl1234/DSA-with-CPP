#include <iostream>

int main() {
    int a = 10;
    int b = 5;

    // Equal to
    bool isEqual = (a == b);
    std::cout << "Is a equal to b? (a == b): " << isEqual << std::endl;

    // Not equal to
    bool isNotEqual = (a != b);
    std::cout << "Is a not equal to b? (a != b): " << isNotEqual << std::endl;

    // Greater than
    bool isGreater = (a > b);
    std::cout << "Is a greater than b? (a > b): " << isGreater << std::endl;

    // Less than
    bool isLess = (a < b);
    std::cout << "Is a less than b? (a < b): " << isLess << std::endl;

    // Greater than or equal to
    bool isGreaterOrEqual = (a >= b);
    std::cout << "Is a greater than or equal to b? (a >= b): " << isGreaterOrEqual << std::endl;

    // Less than or equal to
    bool isLessOrEqual = (a <= b);
    std::cout << "Is a less than or equal to b? (a <= b): " << isLessOrEqual << std::endl;

    return 0;
}
