#include <iostream>
using namespace std;

void printDescending(int n) {
    if (n == 0) return; 
    cout << n << " ";  
    printDescending(n - 1); 
}

void printAscending(int n) {
    if (n == 0) return; 
    printAscending(n - 1); 
    cout << n << " ";  
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Numbers from " << N << " to 1: ";
    printDescending(N);
    
    cout << "\nNumbers from 1 to " << N << ": ";
    printAscending(N);

    return 0;
}
