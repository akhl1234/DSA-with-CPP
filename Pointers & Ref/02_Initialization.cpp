#include <iostream>
using namespace std;

int main()
{
  int *ptr1 = nullptr;

  if (ptr1 == nullptr)
  {
    cout << "ptr1 is inialize to nullptr and points to nothing." << endl;
  }

  int num = 101;
  int *ptr2 = &num;

  cout << "Address of num: " << ptr2 << endl;
  cout << "Value of num through ptr2 is: " << *ptr2 << endl;

  return 0;
}