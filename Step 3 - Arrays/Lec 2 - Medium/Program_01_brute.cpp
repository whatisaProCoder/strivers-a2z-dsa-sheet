#include <bits/stdc++.h>
using namespace std;

// Two sum problem
// Brute : Checking all possible pairs (loops)

vector<int> twoSum(vector<int> nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            /*if (i == j)
                continue;*/
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    cout << "Indices : ";
    for (auto element : twoSum(nums, target)) {
        cout << element << " ";
    }
}

// Time-complexity  : O(N^2)
// Space-complexity : O(1)