#include <iostream>
#include <vector>

int main()
{
  std::vector<int> numbers = {1, 2, 3};

  // Add elements to the vector
  numbers.push_back(4);
  numbers.push_back(5);
  std::cout << "After adding elements:" << std::endl;
  for (int num : numbers)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Remove the last element
  numbers.pop_back();
  std::cout << "After removing the last element:" << std::endl;
  for (int num : numbers)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
