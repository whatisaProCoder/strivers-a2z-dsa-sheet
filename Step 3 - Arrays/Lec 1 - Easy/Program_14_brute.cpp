#include <bits/stdc++.h>
using namespace std;

// Longest subarray with given sum K (positives+zeroes+negatives)
// Contiguous part of the array is a subarray.
// Brute : Generate all subarrays.
// For negatives, this is the better solution.

int max_subarray_len(vector<int> nums, int K) {
    int n = nums.size();
    int max_length = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            /* int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += nums[k];
            } */
            // causes O(N^3) t-complexity

            sum += nums[j];
            if (sum == K) {
                max_length = max(max_length, j - i + 1);
            }
        }
    }
    return max_length;
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

// Time-complexity  : ~O(N^3) to O(N^2) after optimisation
// Space-complexity : O(1)