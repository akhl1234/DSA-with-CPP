#include <iostream>
using namespace std;

// simple function to add two nums---
int add(int a, int b)
{
  return a + b;
}

int main()
{
  int result = add(7, 6);
  cout << "The Sum IS: " << result << endl;
  return 0;
}