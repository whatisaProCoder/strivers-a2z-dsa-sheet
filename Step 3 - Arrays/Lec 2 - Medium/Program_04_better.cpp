#include <bits/stdc++.h>
using namespace std;

// Kadane's Algorithm, maximum subarray sum
// Better : Using two for-loops

int max_subarray_sum(vector<int> nums) {
    int n = nums.size();
    int sum;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            max_sum = max(max_sum, sum);
        }
    }

    return max_sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum subarray sum = " << max_subarray_sum(nums);
}

// Time-complexity  : O(N^2)
// Space-complexity : O(1)