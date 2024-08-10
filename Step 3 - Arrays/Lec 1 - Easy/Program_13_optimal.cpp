#include <bits/stdc++.h>
using namespace std;

// Find the number that appears once, and other numbers twice.
// Input  : 1 1 2 3 3 4 4
// Output : 2 (APPEARS ONCE)

int appearsOnce(vector<int> nums) {
    int XOR_ALL = 0;
    for (auto element : nums) {
        XOR_ALL = XOR_ALL ^ element;
    }
    return XOR_ALL;

    // XOR_ALL = element that appears once,
    // since all same-elements will cancel out (XOR_ALL = 0)
    // and single element ^ XOR_ALL = required element.
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Appears once : " << appearsOnce(nums);
}

// Time-complexity  : O(N)
// Space-complexity : O(1)