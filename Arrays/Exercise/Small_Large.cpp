#include <iostream>
#include <vector>

using namespace std;

void findSmallestAndLargest(vector<int>& nums) {
    int smallest = nums[0];
    int largest = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        } else if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
}

int main() {
    vector<int> nums = {5, 2, 8, 1, 7};
    findSmallestAndLargest(nums);
    return 0;
}