#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> v = {3, 1, 2};

    // Sort the vector
    sort(v.begin(), v.end());

    // Reverse the vector
    reverse(v.begin(), v.end());

    return 0;
}
