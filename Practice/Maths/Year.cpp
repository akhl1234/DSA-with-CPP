#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
  if (year % 400 == 0)
  {
    return true;
  }
  if (year % 100 == 0)
  {
    return false;
  }
  if (year % 4 == 0)
  {
    return true;
  }
  return false;
}

int main()
{
  int year;
  cout << "Enter a year: ";
  cin >> year;

  if (year < 1000 || year > 9999)
  {
    cout << "Please enter a four-digit year." << endl;
  }
  else
  {
    if (isLeapYear(year))
    {
      cout << year << " is a leap year." << endl;
    }
    else
    {
      cout << year << " is not a leap year." << endl;
    }
  }

  return 0;
}
