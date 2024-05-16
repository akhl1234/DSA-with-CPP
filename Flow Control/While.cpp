#include <iostream>
using namespace std;

int main()
{
  int nums;
  cout << "Enter the number of terms you want to sum: ";
  cin >> nums;
  int i = 1;
  int sum = 0;
  while (i <= nums)
  {
    sum = sum + i;
    i += 1;
  }
  cout << "The value of sum is: " << sum << endl;
  return 0;
}
