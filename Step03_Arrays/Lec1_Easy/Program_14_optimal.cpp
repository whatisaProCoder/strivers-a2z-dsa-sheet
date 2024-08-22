#include <bits/stdc++.h>
using namespace std;

// Longest subarray with given sum K (positives)
// Contiguous part of the array is a subarray.
// Optimal : Using 2-pointer and greedy approach.
// This cannot run for zeroes & negatives.

int max_subarray_len(vector<int> nums, int K) {
    int n = nums.size();
    int left = 0;
    int right = 0;
    int sum = nums[0];
    int max_len = 0;

    while (right < n) {
        while (left <= right && sum > K) {
            sum -= nums[left];
            left++;
        }

        if (sum == K) {
            max_len = max(max_len, right - left + 1);
        }

        right++;
        if (right < n) {
            sum += nums[right];
        }
    }
    return max_len;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int K;
    cin >> K;

    cout << "Sum K = " << K << endl;
    cout << "Longest subarray length : " << max_subarray_len(nums, K);
}

// Time-complexity  : O(2N)
// Space-complexity : O(1)