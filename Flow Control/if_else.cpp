#include <iostream>
using namespace std;

int main()
{
  char Enter_Characterd;
  cout << "Enter a Enter_Characterdaracter to determine its type: ";
  cin >> Enter_Characterd;

  if (isupper(Enter_Characterd))
  {
    cout << "The Enter_Characterdaracter is uppercase." << endl;
  }
  else if (islower(Enter_Characterd))
  {
    cout << "The Enter_Characterdaracter is lowercase." << endl;
  }
  else if (isdigit(Enter_Characterd))
  {
    cout << "The Enter_Characterdaracter is a digit." << endl;
  }
  else
  {
    cout << "The statement is written incorrectly." << endl;
  }

  return 0;
}
