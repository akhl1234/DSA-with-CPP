#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int target;
    cout << "Enter a number to search: ";
    cin >> target;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            cout << "Found at index " << i << endl;
            return 0;
        }
    }
    cout << "Not found" << endl;
    return 0;
}