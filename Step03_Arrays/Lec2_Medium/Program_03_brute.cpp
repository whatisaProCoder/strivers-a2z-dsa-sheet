#include <bits/stdc++.h>
using namespace std;

// Majority Element (>n/2 times)
// Brute : Using Loops

int majority_element(vector<int> nums) {
    int n = nums.size();
    int cnt;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j])
                cnt++;
        }
        if (cnt > n / 2)
            return nums[i];
    }
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

// Time-complexity  : O(N^2)
// Space-complexity : O(1)