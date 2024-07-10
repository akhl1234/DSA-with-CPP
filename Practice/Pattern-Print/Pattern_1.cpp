#include <iostream>
using namespace std;

int main()
{
  // Ascending Number Pattern
  cout << "Ascending Number Pattern\n";
  for (int i = 1; i <= 5; ++i)
  {
    for (int j = 1; j <= i; ++j)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  // Right Angle Triangle Pattern
  cout << "Right Angle Triangle Pattern\n";
  for (int r = 1; r <= 5; ++r)
  {
    for (int c = 1; c <= r; ++c)
    {
      cout << r << " ";
    }
    cout << endl;
  }

  // Descending Right Angle Triangle Number Pattern
  cout << "Descending Right Angle Triangle Number Pattern\n";
  for (int a = 1; a <= 7; ++a)
  {
    for (int b = a; b >= 1; --b)
    {
      cout << b << "  ";
    }
    cout << endl;
  }

  // Character Pattern
  cout << "Character Pattern\n";
  int n = 5;
  for (int i = 1; i <= n; ++i)
  {
    for (char ch = 'a'; ch < 'a' + i; ++ch)
    {
      cout << ch << "\t";
    }
    cout << endl;
  }

  // Reverse Character Pattern
  cout << "Reverse Character Pattern\n";
  for (int w = n; w >= 1; --w)
  {
    for (char chh = 'a' + w - 1; chh >= 'a'; --chh)
    {
      cout << chh << " ";
    }
    cout << endl;
  }

  return 0;
}
