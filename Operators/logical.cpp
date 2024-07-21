#include <iostream>

/**
 * Demonstrates the use of logical operators (AND, OR, NOT) in C++.
 *
 * Logical operators are used to combine boolean expressions and produce boolean results.
 */
int main() {
    // Boolean variables representing conditions
    bool is_raining = true;
    bool is_cold = false;

    // Logical AND (&&): Both conditions must be true for the result to be true
    std::cout << "Is it raining AND cold? " << (is_raining && is_cold) << std::endl;

    // Logical OR (||): At least one condition must be true for the result to be true
    std::cout << "Is it raining OR cold? " << (is_raining || is_cold) << std::endl;

    // Logical NOT (!): Reverses the boolean value
    std::cout << "Is it NOT raining? " << (!is_raining) << std::endl;

    return 0;
}
