#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;  // Pointr to integer varible num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr (Address of num): " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}
