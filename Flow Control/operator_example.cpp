#include <iostream>

int main()
{
  int x = 5;

  // Post-increment (x++)
  std::cout << "x++ = " << x++ << std::endl; // prints 5, x becomes 6

  // Pre-increment (++x)
  std::cout << "++x = " << ++x << std::endl; // prints 7, x becomes 7

  // Post-decrement (x--)
  std::cout << "x-- = " << x-- << std::endl; // prints 7, x becomes 6

  // Pre-decrement (--x)
  std::cout << "--x = " << --x << std::endl; // prints 5, x becomes 5

  return 0;
}