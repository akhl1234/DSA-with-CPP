#include <iostream>
#include <string>
using namespace std;

int main()
{
  string greeting = "Hello, world!";
  string emptyString;

  // Output the strings
  cout << "Greeting: " << greeting << endl;
  cout << "Empty String: " << emptyString << endl;

  // Basic string operations
  string name = "John";
  string message = "Hello, " + name + "!";

  // String length
  cout << "Message length: " << message.length() << endl;

  // Accessing individual characters
  cout << "First character of message: " << message[0] << endl;
  cout << "Last character of message: " << message[message.length() - 1] << endl;

  // String concatenation
  message += " How are you?";
  cout << "Updated Message: " << message << endl;

  // Substring
  string sub = message.substr(7, 4); // Starting from index 7, take 4 characters
  cout << "Substring: " << sub << endl;

  // Find substring
  size_t found = message.find("are");
  if (found != string::npos)
  {
    cout << "'are' found at index: " << found << endl;
  }
  else
  {
    cout << "'are' not found in message." << endl;
  }

  return 0;
}
