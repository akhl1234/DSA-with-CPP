#include <iostream>
using namespace std;

int main() {
    // Introduction to logical operators
    cout << "Logical Operators in C++" << endl;
    cout << "------------------------" << endl;
    cout << "Logical operators are used to perform logical operations on boolean operands." << endl;
    cout << "In C++, there are two main logical operators: && (logical AND) and || (logical OR)." << endl;
    cout << endl;

    // Logical AND operator (&&)
    cout << "Logical AND Operator (&&)" << endl;
    cout << "--------------------------" << endl;
    cout << "The logical AND operator (&&) returns true if and only if both of its operands are true." << endl;
    cout << "Otherwise, it returns false." << endl;
    cout << "Syntax: operand1 && operand2" << endl;
    cout << "Example:" << endl;
    cout << "bool result = (5 > 3) && (10 < 5);" << endl;
    cout << "// result will be true because both conditions are true" << endl;
    cout << endl;

    // Logical OR operator (||)
    cout << "Logical OR Operator (||)" << endl;
    cout << "-------------------------" << endl;
    cout << "The logical OR operator (||) returns true if at least one of its operands is true." << endl;
    cout << "Otherwise, it returns false." << endl;
    cout << "Syntax: operand1 || operand2" << endl;
    cout << "Example:" << endl;
    cout << "bool result = (5 > 3) || (10 < 5);" << endl;
    cout << "// result will be true because at least one condition is true" << endl;
    cout << endl;

    return 0;
}
