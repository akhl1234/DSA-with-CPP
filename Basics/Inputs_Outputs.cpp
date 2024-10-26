#include <bits/stdc++.h>
using namespace std;

int main() {
    // Example of taking single word input
    string name;
    cout << "Enter your name: ";
    cin >> name;  // Only reads a single word
    cout << "Your name is: " << name << endl;

    // Example of taking integer input
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;

    // Using getline for multi-word input (e.g., full name)
    cin.ignore();  // To ignore any leftover newline character in the input buffer
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);  // Reads the entire line including spaces
    cout << "Your full name is: " << fullName << endl;

    // Multiple integer inputs in a single line
    int x, y;
    cout << "Enter two integers separated by space: ";
    cin >> x >> y;
    cout << "The value of X is: " << x << endl;
    cout << "The value of Y is: " << y << endl;

    // Using getline with integer input followed by string
    int score;
    cout << "Enter your score: ";
    cin >> score;
    cin.ignore();  // Clear the buffer to prevent issues with getline
    string feedback;
    cout << "Enter feedback about this score: ";
    getline(cin, feedback);  // Reads an entire line of feedback
    cout << "Score: " << score << ", Feedback: " << feedback << endl;

    cout << "Thank you for providing your details!" << endl;

    return 0;
}
