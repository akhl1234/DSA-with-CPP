/*
Arrays are a fundamental data structure in C++ used to store collections of similar data types under a single variable name.*/
// Syntax data_type array_name[size];
#include <iostream>
using namespace std;

int main()
{
  string peoples[4] = {"alam", "ansari", "khan", "ahmed"};
  cout << peoples[2] << endl;

  // Input array
  int arr[4];
  cout << "Enter numbers; they will be stored in an array: ";
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

  cout << "The fourth number entered is: " << arr[3] << endl;

  string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for (int i = 0; i < 5; i++)
  {
    cout << cars[i] << "\n";
  }

  return 0;
}
