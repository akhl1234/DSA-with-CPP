#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int row = n; row >= 1; --row) {
        int spaces = n - row;
        int stars = 2 * row - 1;

        // Print spaces
        for (int i = 0; i < spaces; ++i) {
            std::cout << "  ";
        }

        // Print stars
        for (int i = 0; i < stars; ++i) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}