#include <iostream>
using namespace std;

int main()
{
  cout << "In this Snippet we use mixed Add or sub mul div etc. \n";
  int A = 5, B = 7;
  float C = 5.1, D = 7.9;

  cout << "The sum of int and Float is: " << A + C << " And " << B + D << endl;
  cout << "The Diff of int and Float is: " << A - D << " and " << A - C << endl;

  // Multiplication (int and float)
  cout << "The product of int and Float is: " << A * C << " And " << B * D << endl;

  // Division (int and float)
  cout << "The quotient of int and Float (int division): " << A / C << " and " << B / D << endl;
  cout << "The quotient of int and Float (float division): " << (float)A / C << " and " << (float)B / D << endl;

  // Modulo (integer only)
  cout << "The modulo of int is: " << A % B << endl;
  return 0;
}
