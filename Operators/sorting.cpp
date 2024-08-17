#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int main()
{
  std::vector<int> data = {5, 3, 8, 1, 2};

  // Sort the vector
  std::sort(data.begin(), data.end());
  std::cout << "Sorted vector:" << std::endl;
  for (int num : data)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
