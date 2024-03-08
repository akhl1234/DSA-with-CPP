#include <iostream>

int main()
{
  int num = 2147483647; // Maximum value for a 32-bit signed integer

  // Overflow
  std::cout << "Overflow: " << num + 1 << std::endl; // Wraps around to minimum

  // Underflow
  num = -2147483648;                                  // min val
  std::cout << "Underflow: " << num - 1 << std::endl; // Wraps-max

  return 0;
}
