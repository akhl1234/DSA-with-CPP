// Filename: variablescope.cpp
#include <iostream>
using namespace std;

// Global variable - Yeh sab jagah accessible hai
int globalVar = 10;

void demoFunction() {
    // Local variable - Yeh sirf is function ke andar hi accessible hai
    int localVar = 20;
    cout << "Inside demoFunction, localVar: " << localVar << endl;
    cout << "Inside demoFunction, globalVar: " << globalVar << endl;
}

void anotherFunction() {
    // Static variable - Yeh function ke multiple calls ke beech bhi apni value retain karta hai
    static int staticVar = 30;
    staticVar++;
    cout << "Inside anotherFunction, staticVar: " << staticVar << endl;
}

int main() {
    // Local variable - Yeh sirf main function ke andar hi accessible hai
    int mainLocalVar = 40;
    cout << "Inside main, mainLocalVar: " << mainLocalVar << endl;
    cout << "Inside main, globalVar: " << globalVar << endl;

    demoFunction();
    anotherFunction();
    anotherFunction();

    // Nested scope - Yeh inner block ke variable outer block me accessible nahi hote
    if (true) {
        int nestedVar = 50;
        cout << "Inside nested block, nestedVar: " << nestedVar << endl;
    }

    // Uncommenting the below line will cause an error because nestedVar is not accessible here
    // cout << "Outside nested block, nestedVar: " << nestedVar << endl;

    return 0;
}
