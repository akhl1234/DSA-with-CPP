#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> mp; // Declaration

    // Insert elements
    mp[1] = 100;
    mp[2] = 200;

    // Check if key exists
    if (mp.find(1) != mp.end())
        cout << "Key 1 found" << endl;

    // Iterate over map
    for(auto it : mp)
        cout << it.first << " -> " << it.second << endl;

    return 0;
}
