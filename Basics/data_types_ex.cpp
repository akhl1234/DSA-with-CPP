#include <iostream>
using namespace std;

int main() {
    // Integer data types
    short int shortVar = 10;
    int intVar = 20;
    long int longVar = 30;
    long long int longLongVar = 40;

    // Floating-point data types
    float floatVar = 10.5f;
    double doubleVar = 20.5;
    long double longDoubleVar = 30.5L;

    // Character data type
    char charVar = 'A';

    // Boolean data type
    bool boolVar = true;

    // Print the values and sizes of the variables
    cout << "Basic types:" << endl;
    cout << "\tShort int: " << shortVar << " (Size: " << sizeof(shortVar) << " bytes)" << endl;
    cout << "\tInt: " << intVar << " (Size: " << sizeof(intVar) << " bytes)" << endl;
    cout << "\tLong int: " << longVar << " (Size: " << sizeof(longVar) << " bytes)" << endl;
    cout << "\tLong long int: " << longLongVar << " (Size: " << sizeof(longLongVar) << " bytes)" << endl;
    cout << "\tFloat: " << floatVar << " (Size: " << sizeof(floatVar) << " bytes)" << endl;
    cout << "\tDouble: " << doubleVar << " (Size: " << sizeof(doubleVar) << " bytes)" << endl;
    cout << "\tLong double: " << longDoubleVar << " (Size: " << sizeof(longDoubleVar) << " bytes)" << endl;
    cout << "\tChar: " << charVar << " (Size: " << sizeof(charVar) << " byte)" << endl;
    cout << "\tBool: " << boolVar << " (Size: " << sizeof(boolVar) << " byte)" << endl;

    return 0;
}