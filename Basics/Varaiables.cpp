#include <iostream>

using namespace std;

int main() {
    // Basic variable declaration and initialization
    int age = 18;
    double height = 5.10;
    char grade = 'A+';
    bool isStudent = true;

    // Output the variables
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << boolalpha << isStudent << endl;

    // Basic arithmetic operations with variables
    int num1 = 10;
    int num2 = 5;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    double quotient = static_cast<double>(num1) / num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    // Variable reassignment
    age = 30;
    cout << "Updated Age: " << age << endl;

    return 0;
}
