#include <iostream>
using namespace std;

int main() {
    
    int num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Relational operations
    cout << "Relational Operations:" << endl;
    cout << num1 << " == " << num2 << " is " << (num1 == num2) << endl; 
    cout << num1 << " != " << num2 << " is " << (num1 != num2) << endl; 
    cout << num1 << " < " << num2 << " is " << (num1 < num2) << endl; 
    cout << num1 << " > " << num2 << " is " << (num1 > num2) << endl;  
    cout << num1 << " <= " << num2 << " is " << (num1 <= num2) << endl; 
    cout << num1 << " >= " << num2 << " is " << (num1 >= num2) << endl; 

    return 0;
}
