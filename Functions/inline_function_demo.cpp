#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum: " << add(5, 3) << endl; 
    return 0;
}