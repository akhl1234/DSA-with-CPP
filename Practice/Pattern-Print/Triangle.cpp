#include <iostream>

int main()
{
  int rows;
  std::cout << "Enter the number of rows: ";
  std::cin >> rows;

  for (int row = 1; row <= rows; ++row)
  {
    // Print leading spaces
    for (int space = 1; space <= rows - row; ++space)
    {
      std::cout << "  ";
    }

    // Print the numbers
    for (int num = 1; num <= row; ++num)
    {
      std::cout << num << " ";
    }

    // Print the descending numbers (except for the first row)
    if (row > 1)
    {
      for (int num = row - 1; num >= 1; --num)
      {
        std::cout << num << " ";
      }
    }

    // Print trailing spaces
    for (int space = 1; space <= rows - row; ++space)
    {
      std::cout << "  ";
    }

    std::cout << std::endl;
  }

  return 0;
}