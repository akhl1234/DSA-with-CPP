#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an integer array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Perform array operations
    cout << "Array operations:" << endl;
    cout << "Sum: " << numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] << endl;
    cout << "Average: " << (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4]) / 5.0 << endl;

    // Find the maximum element in the array
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    cout << "Maximum element: " << max << endl;

    // Find the minimum element in the array
    int min = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    cout << "Minimum element: " << min << endl;

    return 0;
}