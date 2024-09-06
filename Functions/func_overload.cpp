#include <iostream>
#include <string>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to print an integer
void print(int i) {
    cout << "Here is int: " << i << endl;
}

// Function to print a double
void print(double f) {
    cout << "Here is double: " << f << endl;
}

// Function to print a string
void print(const string& s) {
    cout << "Here is string: " << s << endl;
}

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    // Demonstrating function overloading with add functions
    cout << "Sum of 5 and 7: " << add(5, 7) << endl;
    cout << "Sum of 5, 7, and 9: " << add(5, 7, 9) << endl;
    cout << "Sum of 5.5 and 7.3: " << add(5.5, 7.3) << endl;

    // Demonstrating function overloading with print functions
    print(10);
    print(10.10);
    print("Hello, World!");

    // Demonstrating function overloading with area functions
    cout << "Area of rectangle (5.0, 7.0): " << area(5.0, 7.0) << endl;
    cout << "Area of circle (radius 5.0): " << area(5.0) << endl;

    return 0;
}
