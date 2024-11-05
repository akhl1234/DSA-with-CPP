#include <iostream>
using namespace std;

int main()
{

  int *ptr = new int(50); // Dynamically Allocate Memory.

  cout << "The Values of dynamically  alloacted memory: " << *ptr << endl;

  delete ptr; // Free the aloc mem;

  ptr = nullptr;
  return 0;
}