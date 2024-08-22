#include <bits/stdc++.h>
using namespace std;

// Two sum problem
// Optimal : without using map data structure
// Greedy Approach
// Cannot return indices, only "YES" or "NO"

string twoSum(vector<int> nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int left = 0;
    int right = n - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "NO";
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

    cout << "twoSum() => " << twoSum(nums, target);
}

// Time-complexity  : O(N log N) [sorting] + O(N) [processing]
// Space-complexity : O(1)