#include <iostream>

using namespace std;

int main()
{
  // Basic data types
  int age = 25;
  float pi = 3.14159;
  double largeNumber = 1.79769e+308;
  char initial = 'S';
  bool isTrue = true;

  // Derived data types
  int numbers[5] = {1, 2, 3, 4, 5};
  struct Student
  {
    string name;
    int age;
  };
  Student s1 = {"Alice", 25};
  int x = 10;
  int *ptr = &x;
  int y = 20;
  int &ref = y;

  // Print output with sizes
  cout << "Basic types:" << endl;
  cout << "\tAge (int): " << age << " (size: " << sizeof(age) << " bytes)" << endl;
  cout << "\tPi (float): " << pi << " (size: " << sizeof(pi) << " bytes)" << endl;
  cout << "\tLarge number (double): " << largeNumber << " (size: " << sizeof(largeNumber) << " bytes)" << endl;
  cout << "\tInitial (char): " << initial << " (size: " << sizeof(initial) << " byte)" << endl;
  cout << "\tIs true (bool): " << isTrue << " (size: " << sizeof(isTrue) << " byte)" << endl;

  cout << "\nDerived types:" << endl;
  cout << "\tThird element in array: " << numbers[2] << endl;
  cout << "\tStudent name: " << s1.name << endl;
  cout << "\tValue using pointer: " << *ptr << endl;
  cout << "\tValue using reference: " << ref << endl;

  return 0;
}
