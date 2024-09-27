#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <utility>  // For std::pair
#include <numeric>

using namespace std;

int main() {
    // 1. Vectors (Dynamic Arrays)
    vector<int> vec = {10, 20, 30, 40, 50};
    
    // Access elements in vector
    cout << "Vector Elements: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;

    // Push and Pop operations
    vec.push_back(60);
    vec.pop_back();
    cout << "After Push/Pop: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;

    // Sorting (using STL algorithm)
    sort(vec.begin(), vec.end());
    cout << "Sorted Vector: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;

    // Binary Search (using STL algorithm)
    if (binary_search(vec.begin(), vec.end(), 30)) {
        cout << "30 Found in Vector" << endl;
    } else {
        cout << "30 Not Found" << endl;
    }

    // 2. Pairs (Useful in competitive programming for coordinates or multiple values)
    pair<int, string> p1;
    p1.first = 1;
    p1.second = "Element";
    cout << "Pair: " << p1.first << ", " << p1.second << endl;

    // 3. Map (Key-Value Data Structure)
    map<string, int> frequency;
    string str = "leetcode";

    // Counting character frequency
    for (char c : str) {
        frequency[string(1, c)]++;
    }

    cout << "Character Frequencies in 'leetcode':" << endl;
    for (auto &pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // 4. Set (Stores unique elements in sorted order)
    set<int> uniqueSet = {5, 10, 5, 20, 15};  // Set removes duplicates
    cout << "Unique Elements in Set: ";
    for (int s : uniqueSet) {
        cout << s << " ";
    }
    cout << endl;

    // 5. Stack (LIFO - Last In, First Out)
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    cout << "Top Element in Stack: " << stk.top() << endl;  // 3
    stk.pop();
    cout << "After Pop, Top Element: " << stk.top() << endl;  // 2

    // 6. Queue (FIFO - First In, First Out)
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front Element in Queue: " << q.front() << endl;  // 10
    q.pop();
    cout << "After Pop, Front Element: " << q.front() << endl;  // 20

    // 7. Priority Queue (Max Heap by default)
    priority_queue<int> maxHeap;
    maxHeap.push(5);
    maxHeap.push(15);
    maxHeap.push(10);
    cout << "Max Element in Priority Queue: " << maxHeap.top() << endl;  // 15
    maxHeap.pop();
    cout << "After Pop, Max Element: " << maxHeap.top() << endl;  // 10

    // Min-Heap using priority queue
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(15);
    minHeap.push(10);
    cout << "Min Element in Priority Queue: " << minHeap.top() << endl;  // 5
    minHeap.pop();
    cout << "After Pop, Min Element: " << minHeap.top() << endl;  // 10

    // 8. Algorithms
    vector<int> nums = {1, 3, 5, 7, 9, 11};

    // Find element (Using find algorithm)
    auto it = find(nums.begin(), nums.end(), 5);
    if (it != nums.end()) {
        cout << "Element 5 found at index: " << distance(nums.begin(), it) << endl;
    } else {
        cout << "Element 5 not found" << endl;
    }

    // Reversing a vector
    reverse(nums.begin(), nums.end());
    cout << "Reversed Vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Accumulate elements (Sum of elements)
    int sum = accumulate(nums.begin(), nums.end(), 0);
    cout << "Sum of Elements: " << sum << endl;

    // Find Maximum Element
    cout << "Max Element: " << *max_element(nums.begin(), nums.end()) << endl;

    // Find Minimum Element
    cout << "Min Element: " << *min_element(nums.begin(), nums.end()) << endl;

    return 0;
}
