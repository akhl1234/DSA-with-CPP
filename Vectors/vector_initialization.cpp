#include <iostream>
#include <vector>

int main()
{
  // Create and initialize a vector with values
  std::vector<double> location = {42.651443, -73.749302};
  std::cout << "Vector with specific values:" << std::endl;
  for (double value : location)
  {
    std::cout << value << " ";
  }
  std::cout << std::endl;

  // with a set size (default values are 0.0)
  std::vector<double> defaultValues(2);
  std::cout << "Vector with default values:" << std::endl;
  for (double value : defaultValues)
  {
    std::cout << value << " ";
  }
  std::cout << std::endl;

  return 0;
}
