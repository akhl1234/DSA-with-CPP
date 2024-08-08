#include <iostream>
using namespace std;

int main()
{
  int arr[10];
  int sum = 0;

  cout << "Enter 10 elements: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  cout << "Sum of the elements: " << sum << endl;

  return 0;
}