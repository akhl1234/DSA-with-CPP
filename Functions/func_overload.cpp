#include <iostream>
using namespace std;

// Function to add two integers
int Add(int x, int y)
{
  return x + y;
}

// Function to subtract two doubles
double sub(double a, double b)
{
  return a - b;
}

int main()
{
  cout << "In this program, we'll use two functions for addition and subtraction:" << endl;

  // Example of addition
  int num1 = 26;
  int num2 = 15;
  cout << "The sum of " << num1 << " + " << num2 << " is: " << Add(num1, num2) << endl;

  // Example of subtraction
  double val1 = 20.5;
  double val2 = 12.98;
  cout << "The difference of " << val1 << " - " << val2 << " is: " << sub(val1, val2) << endl;

  return 0;
}
