#include <iostream>
using namespace std;

int main()
{

  int arr[] = {1, 2, 3, 4};

  int *pointer = arr;

  cout << "Array Elements Accessed via Pointers: " << endl;

  for (int i = 0; i < 4; i++)
  {
    cout << *(pointer + i) << "  ";
  }
  return 0;
}