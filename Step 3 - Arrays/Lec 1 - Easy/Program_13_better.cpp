#include <bits/stdc++.h>
using namespace std;

// Find the number that appears once, and other numbers twice.
// Input  : 1 1 2 3 3 4 4
// Output : 2 (APPEARS ONCE)

int appearsOnce(vector<int> nums) {
    map<int, int> hash;
    for (auto element : nums) {
        hash[element]++;
    }
    for (auto pair : hash) {
        if (pair.second == 1) {
            return pair.first;
        }
    }
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

// Time-complexity  : O(N log M) + O(M)
// Space-complexity : O(M), where M = N/2 + 1