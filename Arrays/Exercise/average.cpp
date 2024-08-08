#include <iostream>
using namespace std;

// Ques: Calculate the average of elements in an array of size 9
int main()
{
  int Array[9];
  int sum = 0;

  cout << "Enter 9 elements: ";
  for (int x = 0; x < 9; x++)
  {
    cin >> Array[x];
    sum += Array[x];
  }
  cout << "The average of this array is: " << sum / 9.0 << endl;
  return 0;
}