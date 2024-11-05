#include <iostream>
using namespace std;

int main()
{
  int arrs[] = {15, 25, 46, 250, 5};
  int *ptr = arrs;

  cout << "Pointer Arithmetic on Array Elements: " << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << "Value at arrs[" << i << "]: " << *ptr << endl;
    ptr++; // Mobe to the next elem in the arr...
  }

  // Reset pointer to the start..
  ptr = arrs;

  cout << "Value of arrs[0] is " << *ptr << endl;
  ptr++;
  cout << "Value of arrs[1] is " << *ptr << endl;
  ptr++;
  cout << "Value of arrs[2] is " << *ptr << endl;
  ptr--;
  cout << "Value of arrs[1] is " << *ptr << endl;

  return 0;
}
