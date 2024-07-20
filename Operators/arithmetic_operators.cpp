#include <iostream>

int main() {
    int a = 10;
    int b = 5;
    
    // Addition
    int sum = a + b;
    std::cout << "Sum (a + b) = " << sum << std::endl;
    
    // Subtraction
    int difference = a - b;
    std::cout << "Difference (a - b) = " << difference << std::endl;
    
    // Multiplication
    int product = a * b;
    std::cout << "Product (a * b) = " << product << std::endl;
    
    // Division
    int quotient = a / b;
    std::cout << "Quotient (a / b) = " << quotient << std::endl;
    
    // Modulus
    int remainder = a % b;
    std::cout << "Remainder (a % b) = " << remainder << std::endl;
    
    // Increment
    int increment = a;
    increment++;
    std::cout << "Increment (a++) = " << increment << std::endl;
    
    // Decrement
    int decrement = a;
    decrement--;
    std::cout << "Decrement (a--) = " << decrement << std::endl;

    // Compound assignment operators
    int c = 10;
    c += 5; // equivalent to c = c + 5
    std::cout << "Compound Addition (c += 5) = " << c << std::endl;
    
    c -= 3; // equivalent to c = c - 3
    std::cout << "Compound Subtraction (c -= 3) = " << c << std::endl;

    c *= 2; // equivalent to c = c * 2
    std::cout << "Compound Multiplication (c *= 2) = " << c << std::endl;

    c /= 4; // equivalent to c = c / 4
    std::cout << "Compound Division (c /= 4) = " << c << std::endl;

    c %= 3; // equivalent to c = c % 3
    std::cout << "Compound Modulus (c %= 3) = " << c << std::endl;

    return 0;
}
