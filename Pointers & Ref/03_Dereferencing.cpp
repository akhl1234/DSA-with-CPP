#include <iostream>
using namespace std;

int main()
{

  int value = 30;
  int *pointer = &value;

  cout << "value  before: " << value << endl;

  *pointer = 786; // Modifying dereferencing ko use karke...

  cout << "value after modification via Pointer: " << value << endl;
  return 0;
}