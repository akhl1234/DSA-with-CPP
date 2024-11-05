#include <iostream>
using namespace std;

int main()
{
  int num = 60;
  int *ptr = &num;
  int **ptr2 = &ptr;

  cout << "Value of num: " << num << endl;
  cout << "Value through *ptr: " << *ptr << endl;
  cout << "Value through **ptr2: " << **ptr2 << endl;

  return 0;
}
