#include <bits/stdc++.h>
using namespace std;

// Majority Element (>n/2 times)
// Better : Using Hashing

int majority_element(vector<int> nums) {
    int n = nums.size();
    map<int, int> mpp;
    // <element, value>

    for (auto it : nums) {
        mpp[it]++;
    }

    for (auto it : mpp) {
        if (it.second > n / 2) {
            return it.first;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Majority Element = " << majority_element(nums);
}

// Time-complexity  : O(N log N + N)
// Space-complexity : O(N) [for all unique elements]