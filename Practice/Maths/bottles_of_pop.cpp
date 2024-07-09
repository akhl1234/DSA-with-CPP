#include <iostream>
using namespace std;

int main()
{
  for (int i = 99; i > 0; --i)
  {

    cout << i << " bottles of pop on the wall." << endl;
    cout << "Take one down and pass it around." << endl;

    if (i - 1 > 0)
    {
      cout << i - 1 << " bottles of pop on the wall." << endl;
    }
    else
    {
      cout << "No more bottles of pop on the wall." << endl;
    }
    cout << endl;
  }

  return 0;
}
