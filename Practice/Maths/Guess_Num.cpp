#include <iostream>
using namespace std;

int main()
{
  int guess, tries = 0;
  cout << "Enter a number between 1 and 10: ";
  cin >> guess;

  while (guess != 8 && tries < 20)
  {
    cout << "Try again. You're closer than you think." << endl;
    cin >> guess;
    tries++;
  }

  if (guess == 8)
  {
    cout << "Congratulations! You entered the correct number." << endl;
  }

  return 0;
}
