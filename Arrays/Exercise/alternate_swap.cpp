#include <iostream>
using namespace std;

void Print(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

void Swap(int arr[], int size) {
  for (int i = 0; i < size; i += 2) {
    if (i + 1 < size) {
      swap(arr[i], arr[i + 1]);
    }
  }
}

int main() {
  int size;

  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[size];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Original array: ";
  Print(arr, size);
  cout << endl;

  Swap(arr, size);

  cout << "Array after swapping: ";
  Print(arr, size);
  cout << endl;

  return 0;
}
