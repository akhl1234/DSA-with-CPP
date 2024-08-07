#include <iostream>
#include <iomanip>

int main()
{
  // Set precision for floating-point numbers
  double pi = 3.14159265359;
  std::cout << "Pi (default): " << pi << std::endl;
  std::cout << "Pi (fixed, 2 decimal places): " << std::fixed << std::setprecision(2) << pi << std::endl;

  // Set field width and alignment for integers
  int num = 123;
  std::cout << "Number (default): " << num << std::endl;
  std::cout << "Number (width 5, left-aligned): " << std::setw(5) << std::left << num << std::endl;
  std::cout << "Number (width 5, right-aligned): " << std::setw(5) << std::right << num << std::endl;

  // Use std::setfill to change the fill character
  std::cout << "Number (width 5, left-aligned, filled with '*'): " << std::setw(5) << std::left << std::setfill('*') << num << std::endl;

  // Use std::scientific to display numbers in scientific notation
  double largeNum = 123456789.0;
  std::cout << "Large number (default): " << largeNum << std::endl;
  std::cout << "Large number (scientific notation): " << std::scientific << largeNum << std::endl;

  return 0;
}