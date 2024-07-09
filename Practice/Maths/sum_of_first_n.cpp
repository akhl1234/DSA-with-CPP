#include <iostream>

int main() {
  int n;
  std::cout << "Enter a number to calculate the sum of first n natural numbers: ";
  std::cin >> n;

  int sum = (n * (n + 1)) / 2;

  std::cout << "The sum of first " << n << " natural numbers is: " << sum << std::endl;

  return 0;
}